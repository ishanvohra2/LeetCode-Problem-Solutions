//This is the question for question 3 of Leetcode's August Challenge 2020

#include <iostream>

using namespace std;

class MyHashSet {
public:
    /** Initialize your data structure here. */
    bool arr[1000000] {false};
    MyHashSet() {

    }
    
    void add(int key) {
        arr[key] = true;
    }
    
    void remove(int key) {
        arr[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return arr[key];
    }
};


int main(){
    
    return 0;
}