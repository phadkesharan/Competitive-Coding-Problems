// PrepBytes Problem
// problem link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/5/searching/codingAssignment/KEYROTATE
// Concepts used : Binary Search


#include <bits/stdc++.h>
using namespace std;

long int getPivot(long int arr[], long int low, long int high)
{
    if(low > high)
        return 0;

    long int mid = low + (high-low)/2;

    if(arr[mid] > arr[mid+1] && mid<high)
        return mid+1;

    if(arr[mid] < arr[mid-1] && mid>low)
        return mid;

    if(arr[low] < arr[mid])
        return getPivot(arr, mid+1, high);

    return getPivot(arr, low, mid-1);
}

long int binarySearch(long int arr[], long int l, long int h, long int k)
{
    if(l > h)
        return -1;

    long int mid = l + (h-l)/2;

    cout <<"mid : " <<mid <<endl;

    if(arr[mid] == k)
        return mid;

    else if(arr[mid] > k)
        return binarySearch(arr, l, mid-1, k);

    return binarySearch(arr, mid+1, h, k);
    
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        long int n;
        cin >>n;

        long int arr[n];

        for(long int i=0;i<n;i++)
            cin >>arr[i];

        long int elem;
        cin >>elem;

        long int pivot = getPivot(arr, 0, n-1);
        cout <<"pivot : " <<pivot <<endl;
        long int ans;
        if(pivot == 0)
            ans = binarySearch(arr, 0, n-1, elem);

        else if(arr[pivot] == elem)
            ans = pivot;

        else if(arr[0] < elem)
            ans = binarySearch(arr, 0, pivot-1, elem);

        else
            ans = binarySearch(arr, pivot+1, n-1, elem);


        cout <<ans <<endl;
    }
}