#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& matrix);

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans = findDiagonalOrder(matrix);

    for(auto x : ans) cout<<x<<" ";

    return 0;
}

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    
    if(matrix.empty()) return res;

    int m = matrix.size();
    int n = matrix[0].size();

    for(int i = 0; i<m+n-1; i++){
        vector<int> temp;
        int row = i < m ? i : m-1;
        int col = i < m ? 0 : i-m+1;
        while(row >= 0 && col < n){
            temp.push_back(matrix[row][col]);
            row--;
            col++;
        }
        if(i%2!=0){
            reverse(temp.begin(), temp.end());
        }

        for(auto x : temp) res.push_back(x);
    }

    return res;
}