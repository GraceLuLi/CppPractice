//
//  MedianFinder.hpp
//  CppLeetcode
//
//  Created by Lu Li on 3/13/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#ifndef MedianFinder_hpp
#define MedianFinder_hpp

#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

class MedianFinder {
    priority_queue<int> *maxHeap;
    priority_queue<int, vector<int>, greater<int>> *minHeap;
    
public:
    MedianFinder();
    ~MedianFinder();
    
    //Adds a number into the data structure
    void addNum(int num);
    //Returns the median of current data stream
    double findMedian();
};

#endif /* MedianFinder_hpp */
