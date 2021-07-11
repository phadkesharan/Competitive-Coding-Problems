// Code Chef Problem 
// Problem Code : MISSP
// Problem Link : https://www.codechef.com/problems/MISSP

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >>n;
        int ans = 0;
        
        for(int i=0;i<n;i++){
            int temp;
            cin >>temp;
            ans = ans ^ temp;
        }

        cout <<ans <<endl;
        
    }
}