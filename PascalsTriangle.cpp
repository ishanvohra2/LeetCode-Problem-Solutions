#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows);

int main(){

    vector<vector<int>> pasc = generate(5);

    for(int i = 0; i<pasc.size(); i++){
        for(auto x : pasc[i]) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}

vector<vector<int>> generate(int numRows){
    vector<vector<int>> res;
    if(!numRows) return res;

    vector<int> level;
    vector<int>top_level{1};
    res.push_back(top_level);

    for(int i = 1; i<numRows; i++){
        level.clear();
        level.push_back(1);
        for(int j = 0; j<i-1; j++) 
            level.push_back(top_level[j] + top_level[j+1]);
        level.push_back(1);
        res.push_back(level);
        top_level = level;
    }

    return res;
}

