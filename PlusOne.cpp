#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int>& digits);

int main(){

    vector<int> nums {9,9,1};

    vector<int> res = plusOne(nums);

    for(auto x : res) cout<<x<<" ";

    return 0;
}

vector<int> plusOne(vector<int>& digits){
    vector<int> ans;
    int carry = 1;

    while(digits.size()>0){
        int digit = digits.back();
        digits.pop_back();
        digit += carry;
        ans.insert(ans.begin(), digit%10);
        carry = digit/10;
    }

    if(carry > 0){
        ans.insert(ans.begin(), carry);
    }

    return ans;
}