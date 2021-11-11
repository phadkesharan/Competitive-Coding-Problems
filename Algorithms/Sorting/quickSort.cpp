#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";
    cout <<endl;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;

    for(int j=l;j<=h-1;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[h]);
    return i+1;

}

void quickSort(int arr[], int l, int h)
{
    if(l>=h)
        return;

    int pivot = partition(arr, l, h);

    quickSort(arr, l, pivot-1);
    quickSort(arr, pivot+1, h);
}

int main()
{
    int arr[7] = {1, 7, 6 ,8, 0, 4, 5};

    printArray(arr, 7);
    quickSort(arr, 0, 6);
    printArray(arr, 7);
}