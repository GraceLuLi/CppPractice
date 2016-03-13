//
//  Iterator.hpp
//  MyHashMap
//
//  Created by Lu Li on 2/24/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#ifndef Iterator_hpp
#define Iterator_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class Iterator {
    struct Data;
    Data* data;
    vector<int> nums;
    vector<int>::iterator myVectorIter;
public:
    Iterator(const vector<int>& nums);
    Iterator(const Iterator& iter);
    virtual ~Iterator();
    
    // Returns the next element in the iteration.
    int next();
    // Returns true if the iteration has more elements.
    bool hasNext() const;
};

#endif /* Iterator_hpp */
