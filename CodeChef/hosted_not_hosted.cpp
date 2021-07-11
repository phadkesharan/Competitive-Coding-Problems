// Code Chef Problem 
// Problem Code : SNCKYEAR
// Problem Link : https://www.codechef.com/problems/SNCKYEAR

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    int hosted_years[5] = {2010, 2015, 2016, 2017, 2019};

    while(t--){
        int year;
        cin >>year;
        bool hosted = false;

        for(int i=0;i<5;i++){
            if (year == hosted_years[i]){
                    hosted = true;
                    break;
            }
        }
        
        if (!hosted)
            cout <<"NOT HOSTED";
        else cout <<"HOSTED";
        
        cout <<endl;
    }
}