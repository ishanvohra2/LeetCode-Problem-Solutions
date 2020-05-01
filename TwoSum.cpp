#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target);

int main(){

    vector<int> nums{2,3,7,11};

    vector<int> ans = twoSum(nums, 9);

    for(int x : ans) cout<<x<<" ";

    return 0;
}

vector<int> twoSum(vector<int>& numbers, int target){
    vector<int> res;

    int start = 0;
    int end = numbers.size()-1;

    while(start < end){
        int temp = numbers[start] + numbers[end];
        if(temp > target) 
            end--;
        else if(temp < target)
            start++;
        else {
            res.push_back(start + 1);
            res.push_back(end + 1);
            return res;
        }        
    }

    return res;
}