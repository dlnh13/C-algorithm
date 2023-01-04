#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int result = 0;
int n, M;
int a[100];
int x[100];
int fx = 0;
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + a[i] * x[i];
    }
    if (sum == M)
        return true;
    return false;
}
void Try(int k, int gioihan)
{
    for (int i = 1; i <= gioihan; i++)
    {
        x[k] = i;
        fx = fx + a[k]*x[k];
        if (k == n)
        {
            if (check() == true)
            {
                result++;
            }
        }
        else
            Try(k + 1, M - fx);
            fx = fx - a[k]*x[k];
    }
}
int main()
{
    cin >> n;
    cin >> M;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    Try(1,M);
    cout << result;
    return 0;
}