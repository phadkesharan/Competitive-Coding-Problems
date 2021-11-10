#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";
    cout <<endl;
}

void insertionSort(int arr[], int n)
{
    int v, j;
    for(int i=1;i<n;i++)
    {
        v = arr[i];
        j = i;

        while(arr[j-1] > v && j>=1)
        {
            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = v;
    }
}

int main()
{
    int arr[6] = {4, 3, 5};

    printArray(arr, 3);
    insertionSort(arr, 3);
    printArray(arr, 3);
}  