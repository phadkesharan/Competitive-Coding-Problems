/*
CodeChef Problem
Problem Code : STFOOD
Problem Link : https://www.codechef.com/LRNDSA01/problems/STFOOD
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_profit = 0;
        while(n--){
            int s,v,p;
            cin>>s>>p>>v;
            long int profit = (floor(p/(s+1)))*v;
            if(profit>max_profit){
                max_profit= profit;
            }
        }
        cout<<max_profit<<endl;
    }

	return 0;
}