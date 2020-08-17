#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> distributeCandies(int, int);

int main(){
    return 0;
}

vector<int> distributeCandies(int candies, int num_people){
        vector<int> result(num_people,0);
        int count=1;
        int i=0;

        while(true){

            if(count<=candies){

                result[i]+=count;
                candies-=count;
                count++;

                if(i==result.size()-1){
                    i=0;
                }
                else{
                    i++;
                }
            }
            else{
                result[i]+=candies;
                break;
            }
        }

        return result;
}