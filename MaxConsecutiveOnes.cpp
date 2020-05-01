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
    int count1 = 0, count2 = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i; j<nums.size(); j++){
            if(nums[j] == 1) count1 += 1;
            else break;
        }
        if(count1 > count2){
            count2 = count1;
        }
        count1 = 0;
    }

    return count2;
}