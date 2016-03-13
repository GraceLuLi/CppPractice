//
//  PeekingIterator.hpp
//  MyHashMap
//
//  Created by Lu Li on 2/19/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#ifndef PeekingIterator_hpp
#define PeekingIterator_hpp

#include <stdio.h>
#include <vector>
#include "Iterator.hpp"
using namespace std;

//class Iterator {
//    struct Data;
//    Data* data;
//    
//public:
//    Iterator(const vector<int>& nums);
//    Iterator(const Iterator& iter);
//    virtual ~Iterator();
//    //Returns the next element in the iteration
//    int next();
//    //Returns true if the iteration has more elements
//    bool hasNext() const;
//};

class PeekingIterator : public Iterator {
    int peekNum;
public:
    PeekingIterator(const vector<int>& nums);
    ~PeekingIterator();
    
    int peek();
    int next();
    bool hasNext() const;
};
#endif /* PeekingIterator_hpp */
