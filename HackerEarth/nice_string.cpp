// hackerEarth Problem
// problem link : https://www.hackerearth.com/practice/codemonk/
// Concepts used : 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s[n];

    for(int i=0;i<n;i++){
        string temp;
        cin >>temp;
        s[i] = temp;
    }


    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(s[j] < s[i])
                count++;
        }
        cout <<count <<endl;
    }

    return 0;

}
