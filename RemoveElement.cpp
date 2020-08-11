#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val);

int main(){

    vector<int> nums {3,2,2,3};

    cout<<removeElement(nums, 3);

    return 0;
}

int removeElement(vector<int>& nums, int val) {

    if(nums.empty())
        return 0;

    int start = 0;
    int end = nums.size()-1;

    while(start < end){
        if(nums[start] != val)
            start++;
        if(nums[end] == val)
            end--;
        if(nums[start] == val and nums[end] != val){
            if(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
            }
        }
    }

    if(nums[start] == val)
        return start;
    else
        return start+1;
}