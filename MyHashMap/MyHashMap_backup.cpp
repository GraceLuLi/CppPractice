//
//  MyHashMap.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/14/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include "MyHashMap.hpp"
#include <vector>
using namespace std;

template <class K, class V>
MyHashMap<K, V>::HashNode::HashNode(int h, K k, V v) {
    this->hash = h;
    this->key = k;
    this->val = v;
    this->next = NULL;
}

template <class K, class V>
MyHashMap<K, V>::HashNode::~HashNode() {
    
}

template <class K, class V>
MyHashMap<K, V>::MyHashMap(int capacity) {
    this->capacity = capacity;
    this->list = new vector<HashNode*>(capacity, NULL);
}

template <class K, class V>
MyHashMap<K, V>::~MyHashMap(){
    
}

template <class K, class V>
int MyHashMap<K, V>::getHash(K key) {
    int hash = (int)(key.hashCode() / capacity);
    if(hash < 0) hash += capacity;
    return hash;
}

template <class K, class V>
void MyHashMap<K, V>::put(K key, V value) {
    int hash = getHash(key);
    bool found = false;
    
    for(HashNode* n = (*list)[hash]; n != NULL; n = n->next) {
        if(hash == n->hash && (n->key).compares(key) == 0) {
            found = true;
            n->val = value;
        }
    }
    
    if(!found) {
        HashNode *n = new HashNode(hash, key, value);
        n->next = (*list)[hash];
        (*list)[hash] = n;
    }
}

template <class K, class V>
V MyHashMap<K, V>::get(K key) {
    int hash = getHash(key);
    
    for(HashNode* n = (*list)[hash]; n != NULL; n = n->next) {
        if(hash == n->hash && (n->key).compares(key) == 0) {
            return n->val;
        }
    }
    return (V)NULL;
}

template <class K, class V>
bool MyHashMap<K, V>::remove(K key) {
    int hash = getHash(key);
    HashNode *pre = NULL;
    
    for(HashNode* n = (*list)[hash]; n != NULL; n = n->next) {
        if(hash == n->hash && (n->key).compares(key) == 0) {
            if(pre == NULL) {
                (*list)[hash] = n->next;
            } else {
                pre->next = n->next;
            }
            return true;
        }
        pre = n;
    }
    return false;
}

template <class K, class V>
void MyHashMap<K, V>::resize(int newSize) {
    MyHashMap newMap(newSize);
    
    for(HashNode* n : *list) {
        while(n) {
            newMap.put(n->key, n->val);
            n = n->next;
        }
    }
    
    this->list = newMap.list;
}