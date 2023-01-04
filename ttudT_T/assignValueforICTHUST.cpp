#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
bool assign[10];
int result = 0;
void solution()
{
    result++;
}
bool check(int x[], int N)
{
    if (x[0] * 100 + x[1] * 10 + x[2] - x[3] * 100 - 62 + x[4] * 1000 + x[5] * 100 + x[6] * 10 + x[2] == N)
        return true;
    return false;
}
void Try(int k, int N, int x[])
{
    for (int i = 1; i <= 9; i++)
    {
        if (assign[i] == false)
        {
            x[k] = i;
            assign[i] = true;

            if (k == 6)
            {
                if (check(x, N) == true)
                {
                    solution();
                }
            }
            else
            {
                Try(k + 1, N, x);
            }
            assign[i] = false;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    int x[7];
    Try(0, N, x);
    cout << result;
}