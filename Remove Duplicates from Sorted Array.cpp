#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums);

int main(){

    return 0;
}

int removeDuplicates(vector<int>& nums){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    if(nums.empty()){
        return 0;
    }

    int j = 1;

    for(int i = 1; i<nums.size(); i++){
        if(nums[i] != nums[i-1])
            nums[j++] = nums[i];
    }

    return j;
}