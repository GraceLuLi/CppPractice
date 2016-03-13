//
//  Iterator.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/24/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include "Iterator.hpp"

Iterator::Iterator(const vector<int>& nums) {
    this->nums = nums;
    this->myVectorIter = this->nums.begin();
}

Iterator::Iterator(const Iterator& tier) {
    this->nums = tier.nums;
    this->myVectorIter = tier.myVectorIter;
}

Iterator::~Iterator() {
    
}

int Iterator::next() {
    if(myVectorIter == nums.end()) {
        return NULL;
    }
    int res = *myVectorIter;
    myVectorIter++;
    return res;
}

bool Iterator::hasNext() const {
    return myVectorIter != nums.end();
}




