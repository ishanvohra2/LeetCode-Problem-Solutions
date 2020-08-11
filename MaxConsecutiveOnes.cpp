#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums);

int main(){

    vector<int> nums{1,1,0,1,0};

    cout<<findMaxConsecutiveOnes(nums);

    return 0;
}

int findMaxConsecutiveOnes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if(nums.empty())
            return 0;
        
        int count = 0;
        int finalCount = 0;
        for(int i = 0; i < nums.size(); i++, count++)
        {
            if(i == nums.size()-1 || nums[i] == 0)
            {
                if(nums[i] == 1) count++;
                if(count > finalCount) finalCount = count;
                count = -1;
            }
        }
        return finalCount;
}