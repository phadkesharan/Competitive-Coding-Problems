/*
PrepBytes Problem
Problem Link : https://mycode.prepbytes.com/problems/divide-and-conquer/PAINTPART
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int mid, int n, int p)
{
    int _sum = 0, painters = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + _sum <= mid)
        {
            _sum += arr[i];
        }

        else
        {
            painters++;
            if(arr[i] <= mid)
                _sum = arr[i];

            else
                return false;
        }
    }

    cout <<"mid : " <<mid <<" painters ; " <<painters <<endl; 

    return painters <= p;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, p;
        cin >> n >> p;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int minTime = 0;
        int _max = INT_MIN;
        int _sum = 0;

        for (int i = 0; i < n; i++)
        {
            _sum += arr[i];
            if (arr[i] > _max)
                _max = arr[i];
        }

        if (p >= n)
        {
            minTime = _max;
        }

        else
        {
            int l = 0, h = _sum, mid;
            int lastAns=0;
            while (l <= h)
            {
                if(l == h)
                {
                    if(isPossible(arr, l, n, p))
                        mid = l;
                    else
                        mid = lastAns;
                    break;
                }

                mid = l + ((h - l) / 2);

                cout <<"mid : " <<mid <<endl;
                cout <<"l : " <<l <<endl;
                cout <<"h : " <<h <<endl;

                if (isPossible(arr, mid, n, p))
                {
                    lastAns = mid;
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            minTime = mid;
        }

        cout << minTime << endl;
    }

    return 0;
}
