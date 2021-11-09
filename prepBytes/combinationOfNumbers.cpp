/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/c++/week/4/recursion/codingAssignment/COMBI
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";

    cout << endl;
}

void getSubsequence(int arr[], int ans[], int n, int k, int i, int j)
{
    if(j == k)
    {
        printArray(ans, k);
        return;
    }

    if(i == n)
        return;

    //include
    ans[j] = arr[i];
    getSubsequence(arr, ans, n, k, i+1, j+1);

    //exclude
    getSubsequence(arr, ans, n, k, i+1, j);

}

int main()
{
    int n;
    cin >>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >>arr[i];

    int k;

    cin >>k;

    int ans[k];

    getSubsequence(arr, ans, n, k, 0, 0);

}