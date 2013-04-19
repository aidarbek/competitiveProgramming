// Kim Vyacheslav Karaganda KTL
// 2011
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string s[2000];
int n, i, mx, l, sz;
int main ()
{
    while (getline(cin, s[n]))
        mx = max(mx, (int)s[n++].size());
    cout << string(mx + 2, '*');
    for (i = 0; i < n; i++)
    {
        sz = s[i].size();
        cout << "\n*";
        if((mx&1)^(1&(int)sz))
        {
            cout << string((mx - sz + l) / 2, ' ')
                 << s[i]
                 << string((mx - sz + !l) / 2, ' ');
            l ^= 1;
        }
        else cout << string((mx - sz) / 2, ' ')
                  << s[i]
                  << string((mx - sz) / 2, ' ');
        cout << "*";
    }
    cout << "\n" << string(mx + 2, '*') << "\n";

    return 0;
}
/*
******
*     *
*     *
*     *
******


*/




// lang: GNU C++
// memory: 2400 KB
// author: imslavko
// submit_date: Feb 18, 2011 7:28:01 PM
// contest: 5
// link: /contest/5/submission/287292
// time: 270 ms
// verdict: Accepted
// problem: 5B - Center Alignment
// ID: 287292
// downloaded by very stupid script
