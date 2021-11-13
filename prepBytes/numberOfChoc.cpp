/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/5/searching/codingAssignment/NUMCHOC
Concepts used : 
*/
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int i, int j, int n)
{
    if(i>j)
        return i;

    int mid = i + (j-i)/2;

    if(arr[mid] <=n)
        return binarySearch(arr, mid+1, j, n);

    return binarySearch(arr, i, mid-1, n);

}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    int q;
    cin >>q;

    while(q--)
    {   
        int x;
        cin >>x;
        int count = binarySearch(arr, 0, n-1, x);

        cout <<count <<endl;
    }

    return 0;
}