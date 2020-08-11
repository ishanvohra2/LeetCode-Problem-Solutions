#include <iostream>

class Solution {
public:
    int titleToNumber(string s) {
        unsigned int sum = 0;
        for (char ch : s)
            sum = sum * 26 + ch - 'A' + 1;
        return sum;
    }
};