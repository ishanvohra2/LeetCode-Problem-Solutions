#include <iostream>

using namespace std;

int main(){
    detectCapitalUse("USA");
    
    detectCapitalUse("FlAg");

    return 0;
}

bool detectCapitalUse(string word) {
        int flag {};
        if(isupper(word[0])){
            for(auto i : word){
                if(isupper(i)){
                    flag += 1;
                }
            }
            return (flag == word.length() || flag == 1 ? true : false);
        } else {
            for(auto i : word){
                if(isupper(i)){
                    break;
                } else {
                    flag++;
                }
            }
            return (flag == word.length() ? true : false);
}