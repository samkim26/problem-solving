/**
 * @file 11052.cpp
 * @brief 카드 구매하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[n] : 카드 n개를 구입할 때 금액의 최댓값
 */

#include <iostream>
#include <algorithm>

using namespace std;

int d[1001];
int p[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            d[i] = max(d[i], d[i - j] + p[j]);
        }
    }

    cout << d[n] << '\n';

    return 0;
}