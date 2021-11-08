/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/5/searching/codingAssignment/SMALLNUM
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    unordered_map<int, int> map;
    vector<int> keys;

    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i]) == map.end())
            map[arr[i]] = 1;

        else
            map[arr[i]]++;
    }

    for (auto i : map)
    {
        cout <<i.first <<" " <<i.second <<endl;
        if (i.second == k)
            keys.push_back(i.first);
    }

    sort(keys.begin(), keys.end());

    cout << keys[0] << endl;

    return 0;
}