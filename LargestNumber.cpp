#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int dominantIndex(vector<int>&);

int main(){

    vector<int> nums {1,2,3,4};

    cout<<dominantIndex(nums);

    return 0;
}

int dominantIndex(vector<int>& nums){
    int max = nums[0];
    int index = 0;

    if(nums.size() == 1) return 0;

    for(int i = 1; i<nums.size(); i++){
        if(max < nums[i]){
            max = nums[i];
            index = i;
        }
    }

    for(int i = 0; i<nums.size(); i++){
        if(i==index) continue;
        
        if(max < 2*nums[i]) return -1;
    }

    return index;
}
