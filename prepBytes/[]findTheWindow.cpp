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

int main()
{
    //write your code here

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n], dup[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            dup[i] = arr[i];
        }
        int start, end;
        int startG, endG;

        mergeSort(arr, 0, n - 1);

        bool flag = false;
        int min = n;
        for (int i = 0; i < n; i++)
        {
            if (dup[i] != arr[i])
            {
                flag = true;
                start = i;
                continue;
            }

            if (flag && dup[i] == arr[i])
            {
                end = i;
                flag = false;

                if (min > end - start + 1)
                {
                    min = end - start + 1;
                    startG = start;
                    endG = end;
                }
            }
        }

        cout << start << " " << end << endl;
    }

    return 0;
}