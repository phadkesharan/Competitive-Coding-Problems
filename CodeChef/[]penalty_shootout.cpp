/*
CodeChef Problem
Problem Code : PSHOT
Problem Link : https://www.codechef.com/LRNDSA01/problems/PSHOT
*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;

        int a=0, b=0;
        int min_index = 0;
        for(int i=0;i<n;i+=2){
            if(s[i] == '1')
                a++;
            
            if(s[i+1] == '1')
                b++;

            int index=(i/2) + 1;
            
            if((a > (b + n-index)) || (b > (a + n-index))){
                min_index = index*2;
                break;
            }
        }
        if(!min_index)
            cout <<2*n;
        else
            cout <<min_index;

        cout <<endl;
    }
}