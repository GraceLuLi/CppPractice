//
//  TrieTree.hpp
//  MyHashMap
//
//  Created by Lu Li on 2/18/16.
//  Copyright © 2016 Grace. All rights reserved.
//

/*
 Implement a trie with insert, search, and startsWith methods.
 
 Note:
 You may assume that all inputs are consist of lowercase letters a-z.
 */
#ifndef TrieTree_hpp
#define TrieTree_hpp

#include <stdio.h>
#include <string>
#include <map>
using namespace std;

class TrieTree {
    
    public:
        class TrieNode {
            public:
                char c;
                bool isLeaf;
                map<char, TrieNode*>* children;
        
                TrieNode(char c);
                ~TrieNode();
        };
    
        TrieTree();
        ~TrieTree();
    
        void insert(string word);
        bool search(string word);
        bool startsWith(string prefix);
        TrieNode* searchNode(string word);
    
    private:
        TrieNode* root;
};

#endif /* TrieTree_hpp */
