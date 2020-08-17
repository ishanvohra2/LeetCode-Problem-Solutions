#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int thirdMax(vector<int>&);

int main(){

    return 0;
}

int nextMax(vector<int>& nums, int upper_limit){
    int ans = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>ans && nums[i]<upper_limit){
            ans = nums[i];
        }
    }

    return ans;
}

int thirdMax(vector<int>& nums){
    int firstLargest = nextMax(nums, INT_MAX);

    if(nums.size() <= 2){
        return firstLargest;
    } 
    else{
        int secondLargest = nextMax(nums, firstLargest);
        int thirdLargest = nextMax(nums, secondLargest);
        
        if(secondLargest == firstLargest || secondLargest == thirdLargest){
            return firstLargest;
        }

        for(int i = 0; i<nums.size();i++){
            if(thirdLargest == nums[i])
                return thirdLargest;
        }
    }

    return firstLargest;
}