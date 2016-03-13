//
//  MyHashMap.hpp
//  MyHashMap
//
//  Created by Lu Li on 2/14/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#ifndef MyHashMap_hpp
#define MyHashMap_hpp

#include <stdio.h>
#include <vector>
using namespace std;

template <class K, class V>

class MyHashMap {
    private:
        class HashNode {
        
            public:
                K key;
                int hash;
                V val;
                HashNode* next;
                HashNode(int h, K k, V v);
                ~HashNode();
        };
    
    
        int DEFAULT_CAPACITY;
    
    public:
    
        MyHashMap(int c);
        ~MyHashMap();
    
        vector<HashNode*>* list;
        int capacity;
    
        int getHash(K key);
        void put(K key, V val);
        V get(K key);
        bool remove(K key);
        void resize(int newSize);
};

#endif /* MyHashMap_hpp */
