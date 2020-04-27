#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix);

int main(){
    vector<vector<int>> matrix {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> nums = spiralOrder(matrix);

    for(auto x : nums) cout<<x<<" ";

    return 0;
}

vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> res;

    if(matrix.empty()) return res;

    int m = matrix.size();
    int n = matrix[0].size();
    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;

    while(res.size()<m*n){
        for(int i = left; i <= right && res.size() < m*n ; i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int j = top; j <= bottom && res.size() < m*n ; j++){
            res.push_back(matrix[j][right]);
        }
        right--;
        for(int i = right; i>=left && res.size() < m*n; i--){
            res.push_back(matrix[bottom][i]);
        }
        bottom--;
        for(int j = bottom; j>=top && res.size() < m*n; j--){
            res.push_back(matrix[j][left]);
        }
        left++;
    }

    return res;
}

