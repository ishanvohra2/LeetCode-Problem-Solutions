#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

int main(){

    vector<int> nums1 {1,2,3,0,0,0};
    vector<int> nums2 {2,5,6};

    merge(nums1, nums1.size(), nums2, nums2.size());

    for(auto x : nums1) cout<<x<<" ";
    
    return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m; i < m + n; i++){
            nums1[i] = nums2[i - m];
        }
        sort(nums1.begin(), nums1.end());
}