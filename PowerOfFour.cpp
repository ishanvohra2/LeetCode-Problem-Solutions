#include <iostream>

using namespace std;

bool isPowerOfFour(int num);

int main(){


    return 0;
}

bool isPowerOfFour(int num) {
    if(num == 0) 
        return false; 
    while(num != 1) 
    {  
        if(num % 4 != 0) 
            return 0; 
        num = num / 4;  
    } 
    return true; 
}