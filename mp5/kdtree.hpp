/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
     if(first[curDim] > second[curDim]){
       return false;
     }
     if(first[curDim] < second[curDim]){
       return true;
     }
     if(first[curDim] == second[curDim]){
       if(first < second){
         return true;
       }
       else{
         return false;
       }
     }
     return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     double first = distance(target, currentBest);
     double second = distance(target, potential);
     if(first < second){
       return false;
     }
     if(first > second){
       return true;
     }
     if(first == second){
       return (potential < currentBest);
     }
     return false;
}

template <int Dim>
double KDTree<Dim>::distance(const Point<Dim>& first, const Point<Dim>& second) const{
  double k = 0;
  unsigned i = 0;
  while(i != Dim){
    k = k + pow((first[i]-second[i]),2);
    i++;
  }
  k = sqrt(k);
  return k;
}

template <int Dim>
int KDTree<Dim>::shift(vector<Point<Dim>>& in, int first, int second, int median2, int dim){
  Point<Dim> mid = in[median2];
  Point<Dim> compare = in[second];
  in[second] = in[median2];
  in[median2] = compare;
  int initial = first;
  int i = first;
  while(i<second){
    if(smallerDimVal(in[i], mid, dim) == true){
      compare = in[i];
      in[i] = in[initial];
      in[initial] = compare;
      initial++;
    }
    i++;
  }
  compare = in[initial];
  in[initial] = in[second];
  in[second] = compare;
  return initial;
}

template <int Dim>
void KDTree<Dim>::sort(vector<Point<Dim>>& in, int first, int second, int median, int dim){
  if(first == second){
    return;
  }
  int median2 = (first + second)/2;
  median2 = shift(in, first, second, median2, dim);
  if(median == median2){
    return;
  }
  if(median < median2){
    return sort(in, first, median2-1, median, dim);
  }
  if(median > median2){
    return sort(in, median2+1, second, median, dim);
  }

}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::tree(vector<Point<Dim>>& in, int first, int second, int dim){
if(second < first){
  return NULL;
}
KDTreeNode* insert = new KDTreeNode();
int median = (first + second)/2;
sort(in, first, second, median, dim%Dim);
insert->point = in[median];
insert->left = tree(in, first, median-1, (dim+1)%Dim);
insert->right = tree(in, median+1, second, (dim+1)%Dim);
return insert;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
     vector<Point<Dim>> Points(newPoints);
     size = Points.size();
   	 root = tree(Points, 0, Points.size()-1, 0);
}

template <int Dim>
void KDTree<Dim>::erase(KDTree<Dim>::KDTreeNode* subroot){
if(subroot == NULL){
  return;
}
erase(subroot->left);
erase(subroot->right);
delete subroot;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::copy(const KDTree* subroot){

  KDTreeNode* copy = new KDTreeNode(subroot->point);
  copy->left = copy(subroot->left);
  copy->right = copy(subroot->right);
  return copy;
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
   Points = other.Points;
   size = other.size();
   root = copy(other.root);
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
   if(!(this == &rhs)){
     erase(root);
     root = copy(rhs.root);
     size = rhs.size();
   }
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
   erase(root);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::trav(const Point<Dim>& query, KDTreeNode* subroot, int d, int & floor, double & dou, vector<KDTreeNode*> & original, vector<bool> & dir) const{
  if (query == subroot->point)
	{
		original.push_back(subroot);
		dir.push_back(true);
		dou = 0;
		floor = d;
		return subroot;
	}
	if (smallerDimVal(query, subroot->point, d) == true){
		original.push_back(subroot);
		dir.push_back(true);
		if (!(subroot->left == NULL))
			return trav(query, subroot->left, (d+1)%Dim, floor, dou, original, dir);
		else{
			dou = distance(query, subroot->point);
			floor = d;
			return subroot;
		}
	}
	if(smallerDimVal(query, subroot->point, d) == false){
		original.push_back(subroot);
		dir.push_back(false);
		if (!(subroot->right == NULL))
			return trav(query, subroot->right, (d+1)%Dim, floor, dou, original, dir);
		else{
			dou = distance(query, subroot->point);
			floor = d;
			return subroot;
		}
	}
  return subroot;
}

template <int Dim>
void KDTree<Dim>::rewind(const Point<Dim>& query, KDTreeNode* subroot, KDTreeNode* & next, int d, double & dou, vector<KDTreeNode*> & original, vector<bool> & dir) const{
	if (distance(query, subroot->point)==dou){
    if (subroot->point < next->point)
			next = subroot;
	   }
	else if (distance(query, subroot->point)<dou){
      dou = distance(query, subroot->point);
      next = subroot;
	   }
	bool dtop = dir.back();
	original.pop_back();
	dir.pop_back();
  Point<Dim> border = query;
  border.set(d, subroot->point[d]);
	if (distance(query,border)<=dou){
		if (dtop==true && subroot->right!=NULL){
			KDTreeNode* subnearnode = subroot;//new KDTreeNode();
			double subDist = near(query, subroot->right, subnearnode, (d+1)%Dim);
			if (subDist<dou){
				next = subnearnode;
				dou = subDist;
			}
      if(subDist==dou && subnearnode->point < next->point){
        next = subnearnode;
				dou = subDist;
      }
		}
		else if (dtop==false && subroot->left!=NULL){
			KDTreeNode* subnearnode = subroot;//new KDTreeNode();
			double subDist = near(query, subroot->left, subnearnode, (d+1)%Dim);
			if (subDist<dou){
				next = subnearnode;
				dou = subDist;
			}
      if(subDist==dou && subnearnode->point < next->point){
        next = subnearnode;
				dou = subDist;
      }
		}
	}
	if (original.empty() == false){
		KDTreeNode* orig = original.back();
			rewind(query, orig, next, (d-1+Dim)%Dim, dou, original, dir);
	}
	return;
}

template <int Dim>
double KDTree<Dim>::near(const Point<Dim>& query, KDTreeNode* subroot, KDTreeNode* & next, int dim) const{
	double dou;
	int dint;
  vector<bool> dir;
  vector<KDTreeNode*> original;
	KDTreeNode* temp = trav(query, subroot, dim, dint, dou, original, dir);
	next = temp;
	rewind(query, temp, next, dint, dou, original, dir);
	return dou;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    KDTreeNode* close = root;
    double ret;
    ret = near(query, root, close, 0);
    return close->point;

}
