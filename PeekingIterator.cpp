//
//  PeekingIterator.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/19/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include "PeekingIterator.hpp"
#include <iterator>
#include "Iterator.hpp"
using namespace std;

PeekingIterator::PeekingIterator(const vector<int>& nums) : Iterator(nums){
    peekNum = NULL;
    // Initialize any member here.
    // **DO NOT** save a copy of nums and manipulate it directly.
    // You should only use the Iterator interface methods.
}

PeekingIterator::~PeekingIterator(){
}

// Returns the next element in the iteration without advancing the iterator.
int PeekingIterator::PeekingIterator::peek() {
    if(!peekNum) {
        peekNum = Iterator::next();
    }
    return peekNum;
}

int PeekingIterator::PeekingIterator::next(){
    int res;
    if(peekNum) {
        res = peekNum;
        peekNum = NULL;
    } else {
        res = Iterator::next();
    }
    return res;
}

bool PeekingIterator::PeekingIterator::hasNext() const {
    return Iterator::hasNext();
}




