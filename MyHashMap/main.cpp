//
//  main.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/14/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "MedianFinder.hpp"
#include "LRUCache.hpp"
#include "TrieTree.hpp"
#include "PeekingIterator.hpp"
#include "MyHashMap.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
/* Test for MedianFinder */
    MedianFinder *mFinder = new MedianFinder();
    cout << mFinder->findMedian() << " expected: 0\n";
    mFinder->addNum(2);
    cout << mFinder->findMedian() << " expected: 2\n";
    mFinder->addNum(3);
    cout << mFinder->findMedian() << " expected: 2.5\n";
    mFinder->addNum(4);
    cout << mFinder->findMedian() << " expected: 3\n";
    
/* Test for LRU_Cache */
//    LRUCache *lruc = new LRUCache(3);
//    lruc->set(1, 1);
//    lruc->set(2, 2);
//    lruc->set(3, 3);
//    cout << "lruc->get(1): " << lruc->get(1) << "  expected: 1\n";
//    lruc->set(4, 4);
//    cout << "lruc->get(2): " << lruc->get(2) << "  expected: null\n";
    
/* Test for TrieTree */
//    TrieTree *tTree = new TrieTree();
//    tTree->insert("workbreak");
//    bool find = tTree->search("work");
//    bool find2 = tTree->startsWith("work");
//    bool find3 = tTree->search("workbreak");
//    tTree->insert("workdone");
//    cout << "find: " << boolalpha << find << " expected: false\n";
//    cout << "find2: " << boolalpha << find2 << " expected: true\n";
//    cout << "find3: " << boolalpha << find3 << " expected: true\n";
    
    
/* Test for Peeking Iterator */
//    vector<int> nums = {1, 2, 3, 4, 5};
//    PeekingIterator *pi = new PeekingIterator(nums);
//    cout << "pi->peek(): " << pi->peek() << " expected: 1\n";
//    cout << "pi->hasNext(): " << std::boolalpha << pi->hasNext() << " expected: true\n";
//    cout << "pi->next(): " << pi->next() << " expected: 1\n";
//    cout << "pi->peek(): " << pi->peek() << " expected: 2\n";
    
/* Test for MyHashMap */
//    MyHashMap<int, int> myMap(10);
//    MyHashMap<string, string> myMap2(10);
//    
//    myMap.put(1, 1);
//    myMap.put(1, 2);
//    
//    myMap.resize(20);
//    
//    myMap2.put("1", "1");
//    myMap2.put("1", "2");
//    
//    int res = myMap.get(1);
//    string res2 = myMap2.get("1");
//    cout << "hello world really?\n";
//    cout << res;
//    cout << res2;
//    cout << "end\n";
    return 0;
}
