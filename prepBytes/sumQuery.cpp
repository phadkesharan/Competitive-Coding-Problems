/*
PrepBytes Problem
Problem Link : https://mycode.prepbytes.com/problems/sorting/SUMQUERY
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int h, int elem, bool binaryRight=false)
{
    if(l == h)
        return l;

    else if (l > h){
        if(binaryRight)
            return h;
        else
            return l;
    }

    int mid = l + (h - l) / 2;
    // cout <<"mid : " <<mid <<endl;
    // cout <<" L : h : " <<l <<" " << h <<endl;


    if (arr[mid] > elem)
        return binary(arr, l, mid - 1, elem);

    else if (arr[mid] < elem)
        return binary(arr, mid + 1, h, elem);

    return mid;
}

int main()
{
    int n;
    cin >> n;

    int arr[n], sum1[n], sum2[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    sum1[0] = arr[0];
    for (int i = 1; i < n; i++)
        sum1[i] = sum1[i - 1] + arr[i];

    sum2[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sum2[i] = sum2[i + 1] + arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y, x1, y1;
        cin >> x >> y;

        if (x <= arr[0])
            x1 = 0;
        else
            x1 = binary(arr, 0, n - 1, x, false);

        if (y >= arr[n - 1])
            y1 = 0;
        else
            y1 = binary(arr, 0, n - 1, y, true);

        // cout << "x1 : " << x1 << endl;
        // cout << "y1 : " << y1 << endl;

        // cout <<sum1[x1-1] <<endl;
        // cout <<sum2[y1+1] <<endl;
        int ans = sum1[x1-1] + sum2[y1+1];
        cout <<ans <<endl;
    }

    return 0;
}