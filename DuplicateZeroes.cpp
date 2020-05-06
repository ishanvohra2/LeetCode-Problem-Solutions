#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void duplicateZeros(vector<int>& arr);

int main(){
    vector<int> nums {0,0,0,0,0,0,0};
    duplicateZeros(nums);

    for(int x : nums) cout<<x<<" ";

    return 0;
}

void duplicateZeros(vector<int>& arr){
    vector<int> res;
    int lastIndex = arr.size() - 1;
    int i = 0;
    while(i <= lastIndex){
        if(arr[i] == 0){
            res.push_back(0);
            lastIndex -= 1;
        }
        if(arr.size() == res.size()) break;
        res.push_back(arr[i]);
        i++;
    }
    arr = res;
}