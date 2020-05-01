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
    int count = 0;

    for(auto num : nums){
        string n = to_string(num);
        if(n.size() % 2 == 0) count += 1;
    }

    return count;
}