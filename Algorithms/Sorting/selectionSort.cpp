#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";
    cout <<endl;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        swap(arr[min], arr[i]);
    }
}

int main()
{
    int arr[6] = {4, 3, 5, 1, 2, 0};

    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, 6);
    selectionSort(arr, 6);
    printArray(arr, 6);
}   