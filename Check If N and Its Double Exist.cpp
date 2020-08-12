#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    return 0;
}

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        unordered_set<int> s;
        
        for(auto x : arr){
            if((s.count(2*x)) || (s.count(x/2) && x%2 == 0))
                return true;
            s.insert(x);
        }
        
        return false;
        
    }
};