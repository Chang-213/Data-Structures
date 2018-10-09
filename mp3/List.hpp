/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */


/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  return List<T>::ListIterator(nullptr);
}


/**
 * Destroys the current List. This function should ensure that
 * memory does not leak on destruction of a list.
 */
template <typename T>
List<T>::~List() {
  /// @todo Graded in MP3.1
  _destroy();
}

/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode* temp = this->head_;
  while(temp != NULL){
      ListNode* rep = temp;
      temp = temp->next;
      delete rep;
  }
  length_ = 0;
  tail_ = NULL;
  head_ = NULL;
  delete temp;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode* hoof = new ListNode(ndata);
  if(head_ == NULL){
    hoof->next = head_;
    hoof->prev = NULL;
    head_ = hoof;
    tail_ = hoof;

  }
  else{
    hoof->next = head_;
    head_->prev = hoof;
    head_ = hoof;
  }
  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  ListNode* hoof = new ListNode(ndata);
  if(head_ == NULL){
    hoof->next = head_;
    hoof->prev = NULL;
    head_ = hoof;
    tail_ = hoof;
  }
  else{
    tail_->next = hoof;
    hoof->prev = tail_;
    tail_ = hoof;
  }
  length_++;
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {

  /// @todo Graded in MP3.1
  if(startPoint == endPoint){
    return;
  }
  if(startPoint == NULL){
    return;
  }
  if(endPoint == NULL){
    return;
  }
  ListNode* rep1 = startPoint;
  ListNode* rep2 = endPoint->next;
  ListNode* rep3 = startPoint->prev;
  while(startPoint != endPoint){
    ListNode* test = startPoint->prev;
    startPoint->prev = startPoint->next;
    startPoint->next = test;
    startPoint = startPoint->prev;
  }
  ListNode* test = startPoint->prev;
  startPoint->prev = rep3;
  startPoint->next = test;
  if(rep3 != NULL){
    rep3->next = startPoint;
  }
  else{
    head_ = startPoint;
  }
  endPoint = rep1;
  endPoint->next = rep2;
  if(rep2 != NULL){
    rep2->prev = endPoint;
  }
  else{
    tail_ = endPoint;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.1
  if (length_ == 0){
	return;
}
	ListNode* rep1 = head_;
	ListNode* rep2 = head_;
  if(rep2->next == NULL){
    return;
  }
	while(rep2->next != NULL)
	{
		rep2 = rep1;
		for(int i = 1; i < n; i++)
		{
      if(rep2->next != NULL){
			rep2 = rep2->next;
    }
		}
		reverse(rep1, rep2);
		rep1 = rep2->next;
	}
}
/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  /// @todo Graded in MP3.1
  if(length_ == 0){
    return;
  }

  ListNode* rep1 = head_;
  ListNode* rep3 = head_;
  if(rep1->next == NULL){
    return;
  }
  while(rep3->next->next != NULL){
    rep1 = rep1->next;
    ListNode* temp = rep1->prev;
    temp->next = rep1->next;
    ListNode* test = rep1->next;
    test->prev = temp;
    tail_->next = rep1;
    rep1->prev = tail_;
    rep1->next = NULL;
    tail_ = rep1;
    rep1=test;
    rep3 = rep3->next;

  }

}

/**
 * Splits the given list into two parts by dividing it at the splitPoint.
 *
 * @param splitPoint Point at which the list should be split into two.
 * @return The second list created from the split.
 */
template <typename T>
List<T> List<T>::split(int splitPoint) {
    if (splitPoint > length_)
        return List<T>();

    if (splitPoint < 0)
        splitPoint = 0;

    ListNode * secondHead = split(head_, splitPoint);

    int oldLength = length_;
    if (secondHead == head_) {
        // current list is going to be empty
        head_ = NULL;
        tail_ = NULL;
        length_ = 0;
    } else {
        // set up current list
        tail_ = head_;
        while (tail_ -> next != NULL)
            tail_ = tail_->next;
        length_ = splitPoint;
    }

    // set up the returned list
    List<T> ret;
    ret.head_ = secondHead;
    ret.tail_ = secondHead;
    if (ret.tail_ != NULL) {
        while (ret.tail_->next != NULL)
            ret.tail_ = ret.tail_->next;
    }
    ret.length_ = oldLength - splitPoint;
    return ret;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.2
  int a = 0;
  while(a != splitPoint){
    start = start->next;
    a++;
  }
  if(a == 0){
    return start;
  }
  if(start == NULL){
    return start;
  }
  start->prev->next = NULL;
  start->prev = NULL;
  return start;
}

/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  ListNode* f;
  ListNode* temp;
  ListNode* s;
  if(first == NULL){
    return NULL;
  }
  if(second == NULL){
    return NULL;
  }
  if(first == second){
    return first;
  }
  if(first->data < second->data){
    f = first;
    temp = second;
    s = first;
  }
  else{
    f = second;
    temp = first;
    s = second;
  }
while(f != NULL){
  while(f->next != NULL && f->next->data < temp->data){
    f = f->next;
  }
  if(f->next == NULL){
    f->next = temp;
    temp->prev = f;
    break;
  }
  ListNode* hold = f->next;
  ListNode* temph = hold;
  if(temph != NULL){
    f->next->prev = NULL;
    f->next = temp;
    temp->prev = f;
    f = temp;
    temp = temph;
  }

}
return s;
}

/**
 * Sorts the current list by applying the Mergesort algorithm.
 */
template <typename T>
void List<T>::sort() {
    if (empty())
        return;
    head_ = mergesort(head_, length_);
    tail_ = head_;
    while (tail_->next != NULL)
        tail_ = tail_->next;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if(chainLength == 1){
    return start;
  }
  if(chainLength == 0){
    return start;
  }
  int half = chainLength/2;
  ListNode* yeet = split(start, half);
  start = mergesort(start, half);
  yeet = mergesort(yeet, chainLength-half);
  return merge(start,yeet);
}
