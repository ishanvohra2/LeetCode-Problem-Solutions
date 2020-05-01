#include <iostream>
#include <bits/stdc++.h>

int arrayPairSum(vector<int>& nums);

using namespace std;

int main(){

    vector<int> nums{1,4,3,2};

    cout<<arrayPairSum(nums);

    return 0;
}

int arrayPairSum(vector<int>& nums) {
    int sum=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i+=2)
        sum+=nums[i];
    return sum;
}