/*

print All Binary String sequence of length n

*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";

    cout <<endl;
}

void generateBinary(int arr[], int n, int i)
{
    if(i == n)
    {
        printArray(arr, n);
        return;
    }

    arr[i] = 0;
    generateBinary(arr, n, i+1);

    arr[i] = 1;
    generateBinary(arr, n, i+1);
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >>n;

        int arr[n];

        generateBinary(arr, n, 0);

    }
}