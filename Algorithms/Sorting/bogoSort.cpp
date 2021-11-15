#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]> arr[i+1])
            return false;
    }

    return true;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void shuffle(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[i], arr[rand()%n]);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout <<arr[i] <<" ";

    cout <<endl;
}

void bogoSort(int arr[], int n)
{
    long long int i=0;
    while(!isSorted(arr, n))
    {
        ++i;
        printArray(arr, n);
        shuffle(arr, n);
    }
}

int main()
{
    int n = 7;
    int arr[n] = {5, 4, 3, 2, 1, 1, 2};
    printArray(arr, n);
    bogoSort(arr, n);
    printArray(arr, n);

}