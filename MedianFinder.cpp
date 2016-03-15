//
//  MedianFinder.cpp
//  CppLeetcode
//
//  Created by Lu Li on 3/13/16.
//  Copyright © 2016 Grace. All rights reserved.
//
/*
 Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value. So the median is the mean of the two middle value.
 
 Examples:
 [2,3,4] , the median is 3
 
 [2,3], the median is (2 + 3) / 2 = 2.5
 
 Design a data structure that supports the following two operations:
 
 void addNum(int num) - Add a integer number from the data stream to the data structure.
 double findMedian() - Return the median of all elements so far.
 For example:
 
 add(1)
 add(2)
 findMedian() -> 1.5
 add(3)
 findMedian() -> 2
 */
#include "MedianFinder.hpp"
#include <vector>
#include <queue>
using namespace std;

MedianFinder::MedianFinder::MedianFinder() {
    this->maxHeap = new priority_queue<int>();
        this->minHeap = new priority_queue<int, vector<int>, greater<int>>();
}

void MedianFinder::addNum(int num) {
    maxHeap->push(num);
    minHeap->push(maxHeap->top());
    maxHeap->pop();
    
    size_t size1 = maxHeap->size();
    size_t size2 = minHeap->size();
    
    if(size1 < size2) {
        maxHeap->push(minHeap->top());
        minHeap->pop();
    }
}

double MedianFinder::findMedian() {
    if(maxHeap->empty() && minHeap->empty()) return 0.0;
    
    size_t size1 = maxHeap->size();
    size_t size2 = minHeap->size();
    
    if(size1 == size2) {
        return (maxHeap->top() + minHeap->top())/2.0;
    } else {
        return maxHeap->top();
    }
}


