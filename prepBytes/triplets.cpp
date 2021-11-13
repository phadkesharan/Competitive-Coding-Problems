/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/6/sorting/codingAssignment/TRIPLET
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];

    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + j + 1];

    int i, j, k;
    i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int binarySearch(int arr[], int i, int j, int elem)
{
    if (i > j)
        return -1;

    int mid = i + (j - i) / 2;

    if (arr[mid] == elem)
        return mid;

    else if (arr[mid] > elem)
        return binarySearch(arr, i, mid - 1, elem);

    return binarySearch(arr, mid + 1, j, elem);
}

int main()
{
    //write your code here

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        mergeSort(arr, 0, n - 1);
        bool flag = false;

        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {   
                // cout <<"i : " <<i <<" j : " <<j <<endl;
                // cout <<"arr i : " <<arr[i] <<" arr j : " <<arr[j] <<endl;
                int temp = arr[i] - arr[j];

                int index = binarySearch(arr, j+1, i-1, temp);
                // cout <<"index ; " <<index <<endl;

                if (index != -1)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[index];
                    flag = true;
                    break;
                }
            }

            if (flag)
                break;
        }

        if (!flag)
            cout << -1;

        cout << endl;
    }

    return 0;
}
