#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& A);

int main(){
    vector<int> r {-7,-3,2,3,11};
    vector<int> nums = sortedSquares(r);

    for(int x : nums) cout<<x<<" ";

    return 0;
}

vector<int> sortedSquares(vector<int>& A){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    vector<int> res(A.size(), 0);

    int start = 0;
    int end = A.size()-1;
    int k = A.size()-1;

    while(start <= end){
        if(abs(A[start]) < abs(A[end])){
            res[k--] = A[end] * A[end];
            --end;
        }
        else{
            res[k--] = A[start] * A[start];
            ++start;
        }
    }
    
    return res; 
}