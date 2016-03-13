//
//  LruCache.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/17/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include "LruCache.hpp"
using namespace std;

LRUCache::Node::Node(int key, int val) {
    this->key = key;
    this->val = val;
    this->pre = NULL;
    this->next = NULL;
}

LRUCache::Node::~Node() {
    
}

LRUCache::LRUCache(int capacity) {
    this->capacity = capacity;
    this->head = new Node(-1, -1);
    this->tail = new Node(-1, -1);
    
    head->next = tail;
    tail->pre = head;
}

LRUCache::~LRUCache() {
    
}

void LRUCache::addToHead(Node* n) {
    if(n->pre && n->next) {
        n->pre->next = n->next;
        n->next->pre = n->pre;
    }
    
    n->next = head->next;
    n->pre = head;
    head->next->pre = n;
    head->next = n;
}

void LRUCache::removeFromTail() {
    if(tail->pre != head) {
        Node* n = tail->pre;
        n->pre->next = tail;
        tail->pre = n->pre;
        delete(n);
    }
}


int LRUCache::get(int key) {
        
        if(myMap.find(key) == myMap.end()) {
            return -1;
        }
        
        Node* node = myMap[key];
        addToHead(node);
        
        return node->val;
}

void LRUCache::set(int key, int val) {
    Node* node;
    
    if(myMap.find(key) != myMap.end()) {
        node = myMap[key];
        node->val = val;
    } else {
        if(myMap.size() >= capacity) {
            Node* dlt = tail->pre;
            
            myMap.erase(myMap.find(dlt->key));
            removeFromTail();
        }
        node = new Node(key, val);
        myMap[key] = node;
    }
    
    addToHead(node);
}

