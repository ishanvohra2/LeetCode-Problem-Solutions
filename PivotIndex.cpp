#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>&);

int main(){

    vector<int> nums {1, 2, 3};

    cout<<pivotIndex(nums);

    return 0;
}

int pivotIndex(vector<int>& nums){
    int sum = 0;

    for(auto x : nums) sum += x;

    int leftSum = 0;

    for(int i = 0; i<nums.size(); i++){
        if(leftSum == sum - nums[i] - leftSum)
            return i;
        leftSum += nums[i];    
    }

    return -1;
}