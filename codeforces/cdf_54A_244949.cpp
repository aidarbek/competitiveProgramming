#include <iostream>
using namespace std;

int n, k, ans, t;
bool a[500];

int main ()
{
    cin >> n >> k >> ans;
    for (int i = 1; i <= ans; i++)
    {
        cin >> t;
        a[t] = 1;
    }
    a[0] = 1;
    for (int i = 0; i <= n; i++)
    {
        if (!a[i])
            a[i] = 1;
        for (int j = 1; j<= k; j++)
            if (a[i + j])
            {
                i += j - 1;
                goto endcyc;
            }
        a[i + k] = 1;
        i += k - 1;
        goto endcyc;

        endcyc:;
    }

    ans = -1;
    for (int i = 0; i <= n; i++)
        ans += a[i];

    cout << ans;

    return 0;
}





// lang: GNU C++
// memory: 1300 KB
// author: imslavko
// submit_date: Jan 11, 2011 11:36:29 AM
// contest: 54
// link: /contest/54/submission/244949
// time: 30 ms
// verdict: Accepted
// problem: 54A - Presents
// ID: 244949
// downloaded by very stupid script
