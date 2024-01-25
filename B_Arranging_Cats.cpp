/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Farhan Israk Shuvon
Leading Uninversity,Sylhet
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pop pop_back
#define mk make_pair
//   (__gcd(x, y))
//((x/gcd(x, y))*y)
#define F first
#define S second
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return a * (b / (gcd(a, b)));
}
void solve()
{
    int n;
    cin >> n;
    string str;
    string str1;
    cin >> str;
    cin >> str1;
    int cnt = 0;
    int one = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '1' && str[i] == '1')
        {
            continue;
        }
        if (str[i] == '1')
            one++;
        else if (str1[i] == '1')
            zero++;
    }
    cout << max(one, zero) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}