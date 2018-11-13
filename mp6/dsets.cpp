/* Your code here! */
#include "dsets.h"

DisjointSets::DisjointSets(){

}

void DisjointSets::addelements(int num){
  for(int i = 0; i < num; i++){
    _elem.push_back(-1);
  }
}

int DisjointSets::find(int elem){
  if(_elem[elem] < 0){
    return elem;
  }
  else{
    return find(_elem[elem]);
  }
}

void DisjointSets::setunion(int a, int b){
int roota = find(a);
int rootb = find(b);
int sizea = size(roota);
int sizeb = size(rootb);
int newsize = size(roota) + size(rootb);
if(sizea < sizeb){
  _elem[roota] = rootb;
  _elem[rootb] = -1*newsize;
}
else{
  _elem[rootb] = roota;
  _elem[roota] = -1*newsize;
}
}

int DisjointSets::size(int elem){
int in = find(elem);
return (-1*_elem[in]);
}
