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
#include "MyHashMap.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
   // insert code here...
    
    MyHashMap<int, int> myMap(10);
    MyHashMap<string, string> myMap2(10);
    
    myMap.put(1, 1);
    myMap.put(1, 2);
    
    myMap.resize(20);
    
    myMap2.put("1", "1");
    myMap2.put("1", "2");
    
    int res = myMap.get(1);
    string res2 = myMap2.get("1");
    cout << "hello world really?\n";
    cout << res;
    cout << res2;
    cout << "end\n";
    return 0;
}
