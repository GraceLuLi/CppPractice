//
//  LruCache.hpp
//  MyHashMap
//
//  Created by Lu Li on 2/17/16.
//  Copyright © 2016 Grace. All rights reserved.
//

/*
 Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and set.
 
 get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
 set(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.
 */

#ifndef LruCache_hpp
#define LruCache_hpp

#include <stdio.h>
#include <map>
using namespace std;

class LRUCache {
    
    public:
        class Node {
            public:
                int key;
                int val;
                Node* pre;
                Node* next;
            
                Node(int key, int val);
                ~Node();
        };
    
    
        LRUCache(int capacity);
        ~LRUCache();

        int get(int key);
        void set(int key, int val);
    
    private:
        int capacity;
        Node *head, *tail;
        map<int, Node*> myMap;
        void addToHead(Node* n);
        void removeFromTail();

};

#endif /* LruCache_hpp */
