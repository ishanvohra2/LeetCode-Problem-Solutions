#include <iostream>
#include <bits/stdc++.h>

using namespace std;

static auto speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class CombinationIterator {
    
    vector<string> res;
    int index;
    
public:
    CombinationIterator(string characters, int combinationLength) {
        index = 0;
        construct(characters, combinationLength, 0, "");
        
    }
    
    void construct(string characters,int combinationLength, int index, string current){
        if(current.size() == combinationLength){
            res.push_back(current);
        }else{
            for(int i = index; i < characters.size(); i++){
                current.push_back(characters[i]);
                construct(characters, combinationLength, i+1, current);
                current.pop_back();
            }
        }
    }
    
    string next() {
        return res[index++];
    }
    
    bool hasNext() {
        return index < res.size();
    }
};


int main(){

    return 0;
}
