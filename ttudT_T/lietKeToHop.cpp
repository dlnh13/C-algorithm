#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
bool check[20];
void solution(int n, int x[])
{
    for (int i = 0; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
void Try(int k, int n, int x[])
{
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == true)
        {
            continue;
        }
        x[k] = i;
        check[i] = true;
        if (k == n-1)
            solution(k, x);
        else
            Try(k + 1, n, x);
        check[i] = false;
    }
}
int main()
{
    int n;
    int x[n];
    cin >> n;
    Try(0, n, x);
}