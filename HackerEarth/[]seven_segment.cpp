// hackerEarth Problem
// problem link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
// Concepts used : 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >>n;
        int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

        int sticks = arr[n];
        int largest = 0;
        for(int i=0;i<sticks/2;i++)
        {
            largest = 1 + largest*10;
        }
        cout <<largest <<endl;
    }
}