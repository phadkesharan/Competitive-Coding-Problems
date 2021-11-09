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

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}

int main()
{
    int arr[6] = {4, 3, 5, 1, 2, 0};

    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, 6);
    bubbleSort(arr, 3);
    printArray(arr, 6);
}   