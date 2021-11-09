/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/c++/week/4/recursion/codingAssignment/BINARY1
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i];

    cout << endl;
}

void printSequence(int arr[], int n, int k)
{
    if (k == n)
    {
        printArray(arr, n);
        return;
    }

    if (arr[k - 1] == 0)
    {
        arr[k] = 0;
        printSequence(arr, n, k + 1);

        arr[k] = 1;
        printSequence(arr, n, k + 1);
    }

    else
    {
        arr[k] = 0;
        printSequence(arr, n, k + 1);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        arr[0] = 0;
        printSequence(arr, n, 1);

        arr[0] = 1;
        printSequence(arr, n, 1);
    }
}