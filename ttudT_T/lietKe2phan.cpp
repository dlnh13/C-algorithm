#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void solution(int n, int x[])
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

void Try(int k, int n, int x[])
{
    for (int i = 0; i <= 1; i++)
    {
        x[k] = i;
        if (k == n - 1)
        {
            solution(n, x);
        }
        else
        {
            Try(k + 1, n, x);
        }
    }
}

int main()
{
    int n;
    int x[21];
    cin >> n;
    Try(0, n, x);
}
