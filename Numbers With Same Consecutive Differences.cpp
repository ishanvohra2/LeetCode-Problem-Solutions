#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    return 0;
}

class Solution {
public:
    
    int digits(int x) //To find digits in the current number
    {
        int count = 0;
        while(x)
        {
            count++;
            x = x/10;
        }
        
        return count;
    }
    
    void findNumbers(int curr, int n ,int k, vector<int> &result)
    {
        if(digits(curr) == n) //Base case
        {
            result.push_back(curr);
            return;
        }
        
        for(int i=0;i<10;i++) //Considering 0-9 digits 
        {
           int last_digit = curr % 10; //Extract last digit in the prev constructed number
            
           if(abs(last_digit - i) == k) //Check for the given condition
           {
               findNumbers((curr*10 + i), n, k, result); //Append the digit to 'curr' if it satisfies condition
           } 
        }
        
    }
    
    
    vector<int> numsSameConsecDiff(int N, int K) {
        
        vector<int> result; 
            
        if(N == 1) //Special Case where 0 can be included if given 'N' is 1
        {
            result.push_back(0);
        }
        
        for(int i=1;i<10;i++) //Generate All numbers starting from 1 to 9 which contain N digits and have difference between digits as K
        {
            findNumbers(i, N, K, result);    
        }
        
        
        return result;
        
        
    }
};