#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>);

int main(){

    return 0;
}

bool validMountainArray(vector<int>& A){
    
    if(A.size() < 3)
        return false;

    int end = A.size();
    int i = 0;

    while(i < A.size()-1 && A[i]<A[i+1])
        i++;

    if(i == A.size() - 1 || i == 0)
        return false;

    while(i < A.size()-1 && A[i]>A[i+1])
        i++;

    return (i == A.size() - 1);     
}