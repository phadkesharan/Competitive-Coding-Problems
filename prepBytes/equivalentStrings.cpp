/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/c++/week/4/recursion/codingAssignment/EQSTNG
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

bool isEquivalent(string a, string b)
{
    _sleep(500);

    if(a == b)
        return true;

    int n = a.length();

    cout <<"a : " <<a <<endl;
    cout <<"b : " <<b <<endl;
    cout <<"length : " <<n <<endl;

    if(n == 1 || n%2 == 1)
        return false;

    int mid = n/2;

    string a1 = a.substr(0, mid);
    string a2 = a.substr(mid, mid);

    string b1 = b.substr(0, mid);
    string b2 = b.substr(mid, mid);

    cout <<"a1 : " <<a1 <<endl;
    cout <<"a2 : " <<a2 <<endl;
    cout <<"b1 : " <<b1 <<endl;
    cout <<"b2 : " <<b2 <<endl;

    if(isEquivalent(a1, b1) && isEquivalent(a2, b2))
        return true;

    if(isEquivalent(a1, b2) && isEquivalent(a2, b1))
        return true;

    return false;
}

int main()
{
    string a, b;
    cin >>a >>b;

    bool ans = isEquivalent(a, b);

    if(ans)
        cout <<"YES";
    else
        cout <<"NO";
    cout <<endl;

    return 0;
}