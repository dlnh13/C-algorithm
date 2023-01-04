#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
bool check[21];
bool sum[1000];
void solution(int k, int x[])
{
    for (int i = 1; i <= k; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
void Try(int k, int n, int size, int x[])
{
    int temp = x[k - 1];
    for (int i = temp; i <= n; i++)
    {
        if (k <= size && check[i] == false)
        {
            x[k] = i;
            check[i] = true;
            if (k == size)
            {
                solution(size, x);
            }
            else
            {
                Try(k + 1, n, size, x);
            }
            check[i] = false;
        }
    }
}

int main()
{
    int x[21];
    x[0] = 1;
    int n;
    int size;
    cin >> size;
    cin >> n;
    Try(1, n, size, x);
}