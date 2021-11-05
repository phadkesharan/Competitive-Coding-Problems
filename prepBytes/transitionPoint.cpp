#include <bits/stdc++.h>
using namespace std;

long int getOne(int arr[], long int l, long int h)
{

    if (l > h)
        return -1;

    long int mid = l + (h - l) / 2;

    if (arr[mid] == 1)
    {
        if (arr[mid - 1] == 0 && mid != 0)
            return mid;

        else
            return getOne(arr, l, mid - 1);
    }
    else
    {
        if (arr[mid + 1] == 1 && mid < h)
            return mid + 1;
        else
            return getOne(arr, mid + 1, h);
    }
}

long int transitionPoint(int arr[], int n)
{
    // code here

    if (arr[0] == 1)
        return 0;
    long int ans = getOne(arr, 0, n - 1);

    return ans;
}

int main()
{
    //write your code here
    int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;
        int arr[n];

        for (long int i = 0; i < n; i++)
            cin >> arr[i];

        long int index = getOne(arr, 0, n - 1);
        cout << index << endl;
    }

    return 0;
}