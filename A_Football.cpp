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
    // its time for main function to work
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<string, int> mp;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        mp[str]++;
    }
    int mx = 0;
    for (auto &it : mp)
    {
        if (it.S > mx)
            mx = it.S;
    }
    for (auto &it : mp)
    {
        if (mx == it.S)
            cout << it.F << endl;
    }
    return 0;
}