#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";
    cout <<endl;
}

void countingSort(int arr[], int n, int k)
{
    int c[k+1], b[n];

    for(int i=0;i<k+1;i++)
        c[i] = 0;

    for(int i=0;i<n;i++)
        c[arr[i]]++;

    for(int i=1;i<k+1;i++)
        c[i] += c[i-1];

    
    
    for(int i=n-1;i>=0;i--)
    {
        b[c[arr[i]]-1] = arr[i];
        c[arr[i]]--;
    }

    printArray(b, n);

}



int main()
{
    int arr[5] = {2, 2, 1, 3, 6};

    printArray(arr, 5);
    countingSort(arr, 5, 6);
}