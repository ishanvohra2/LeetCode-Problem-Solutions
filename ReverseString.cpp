#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseString(vector<char>& s);

int main(){

    vector<char> s{'h','e','l','l','o'};

    reverseString(s);

    return 0;
}

void reverseString(vector<char>& s){
    int i = 0;
    int j = s.size() - 1;

    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
}