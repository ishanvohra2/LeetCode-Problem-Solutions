#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findNumbers(vector<int>& nums);

int main(){

    vector<int> nums{555,901,4823,1771};

    cout<<findNumbers(nums);

    return 0;
}

int findNumbers(vector<int>& nums){
        int count=0;
        for(auto i : nums)
        {
            if(i>=10 && i<100) count ++;
            if (i>=1000&&i<10000) count ++;
            if (i ==100000) count++;
        } 
        return count;
}