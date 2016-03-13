//
//  TrieTree.cpp
//  MyHashMap
//
//  Created by Lu Li on 2/18/16.
//  Copyright © 2016 Grace. All rights reserved.
//

#include "TrieTree.hpp"
#include <string>
#include <map>
using namespace std;

TrieTree::TrieNode::TrieNode(char c) {
    this->c = c;
    this->isLeaf = false;
    this->children = new map<char, TrieNode*>();
}

TrieTree::TrieNode::~TrieNode() {
    
}

TrieTree::TrieTree(){
    this->root = new TrieNode(' ');
}

TrieTree::~TrieTree(){
}

void TrieTree::insert(string word) {
    TrieNode* n = root;
    
    for(int i = 0; i < word.size(); ++i) {
        char c = word[i];
        map<char, TrieNode*>* curM = n->children;
        if(curM->find(c) != curM->end()) {
            n = (*curM)[c];
        } else {
            n = new TrieNode(c);
            curM->insert(pair<char, TrieNode*>(c, n));
        }
        if(i == word.size()-1) n->isLeaf = true;
    }
}

bool TrieTree::search(string word) {
    TrieNode* n = searchNode(word);
    
    return n != NULL && n->isLeaf;
}

bool TrieTree::startsWith(string prefix) {
    TrieNode* n = searchNode(prefix);
    
    return n != NULL;
}

TrieTree::TrieNode* TrieTree::searchNode(string word) {
    TrieNode* n = root;
    
    for(int i = 0; i < word.size(); ++i) {
        char c = word[i];
        map<char, TrieNode*>* curM = n->children;
        if(curM->find(c) == curM->end()) {
            return NULL;
        } else {
            n = (*curM)[c];
        }
    }
    return n;
}
