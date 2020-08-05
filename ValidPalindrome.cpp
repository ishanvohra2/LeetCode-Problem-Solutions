#include <iostream>

using namespace std;

bool isPalindrome(string);

int main(){

    return 0;
}

    bool isPalindrome(string s) {
    if(s.empty()) return true;
		int start=0;
		int end=s.size()-1;
		while(start<end){
			while((!('0'<=s[start] && s[start]<='9')) && (!('a'<=s[start] && s[start]<='z')) && (!('A'<=s[start]&& s[start]<='Z'))){
				start++;
				if(start>=s.size()) break;
			}

			while(!('0'<=s[end] && s[end]<='9') && !('a'<=s[end] && s[end]<='z') && !('A'<=s[end] && s[end]<='Z')){
				end--;
				if(end<0) break;
			}

			if(start>end){
				break;
			}
			if(s[start]!=s[end] && tolower(s[start])!=tolower(s[end]))return false;
			start++;
			end--;
		}
		return true;
    }