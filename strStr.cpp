#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle);

int main(){

    cout<<strStr("aaaaa", "baa");

    return 0;
}

int strStr(string haystack, string needle){

    if(haystack.empty() && needle.empty()) return 0;

    for(int i = 0; i<haystack.size(); i++){
        string s = haystack.substr(i, needle.size());
        if(s.compare(needle) == 0){
            return i;
        }
    }

    return -1;
}