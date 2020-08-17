#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>&);

int main(){
    return 0;
}

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if (nums.empty()) 
            return nums;
        
        int n = nums.size();
        vector<int> result;
        
        for (int num : nums) 
            while (nums[num-1] != num) 
                swap(num, nums[num-1]);
        
        for (int i=0; i<n; i++) 
            if (nums[i] != i+1) 
                result.push_back(i+1);
        
        return result;
    }