#include <bits/stdc++.h>
using namespace std;

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 2 4 4 0
// 0 0 0 2 0 0
// 0 0 1 2 4 0

int main(){
    vector <vector<int>> arr;

    arr = {{1, 1, 1, 0, 0, 0},
           {0, 1, 0, 0, 0, 0},
           {1, 1, 1, 0, 0, 0},
           {0, 0, 2, 4, 4, 0},
           {0, 0, 0, 2, 0, 0},
           {0, 0, 1, 2, 4, 0}};

    int sum = 0;
    int i=4, j=4;

    cout <<arr[i][j] <<endl;
    cout <<arr[i][j-1] <<endl;
    cout <<arr[i][j+1] <<endl;

    cout <<arr[i+1][j-1] <<endl;
    cout <<arr[i-1][j-1] <<endl;
    cout <<arr[i+1][j+1] <<endl;
    cout <<arr[i-1][j+1] <<endl;


    sum += arr[i][j] += arr[i][j-1] + arr[i][j+1];
    sum += arr[i-1][j-1] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i+1][j+1];

    cout <<"result : " <<sum <<endl;
}