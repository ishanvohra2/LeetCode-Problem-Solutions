#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int heightChecker(vector<int>&);

int main(){
    return 0;
}

int heightChecker(vector<int>& heights){
        int size = heights.size();
        vector<int> res = heights;
        
        int count = 0;
        
        sort(heights.begin(), heights.end());
        
        for(int i=0; i<size; i++){
            if(heights[i] != res[i])
                count++;
        }
        
        return count;
}