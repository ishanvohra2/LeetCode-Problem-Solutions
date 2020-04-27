#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs);

int main(){
    vector<string> strs {"flower", "flow", ""};

    cout<<longestCommonPrefix(strs);

    return 0;
}

string longestCommonPrefix(vector<string>& strs){
    if(strs.size() == 0) return "";
    string res;
    int min = INT_MAX;

    for(int i = 0; i<strs.size(); i++){
        if(min > strs[i].size())
            min = strs[i].size();
    }

    for(int i = 0; i < min; i++){
        char ele = strs[0][i];
        bool flag = 0;
        for(int j = 0; j < strs.size(); j++){
            if(strs[j][i] != ele){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
        else{
            res += ele;
        }
    }

    return res;
}