/*
CodeChef Problem
Problem Code : CARVANS
Problem Link : https://www.codechef.com/LRNDSA01/problems/CARVANS
Concepts used : sorting
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    int t;
    cin >>t;

    while(t--){
        int n;
        cin >>n;

        int speeds[n];
        for(int i=0;i<n;i++)
            cin >>speeds[i];

        int count  = 1;

        if(n!=1){
            int min_speed = speeds[0];

            for(int i=1;i<n;i++){
                if(min_speed > speeds[i]){
                    min_speed = speeds[i];
                    count++;
                }
            }
        }

        cout <<count <<endl;

    }
}