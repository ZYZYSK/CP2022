#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
using vd = vector<double>;
using vs = vector<string>;
using vb = vector<bool>;
using mll = map<ll, ll>;
using mld = map<ll, double>;
using mls = map<ll, string>;
using mlb = map<ll, bool>;
using sl = set<ll>;
using sd = set<double>;
using ss = set<string>;
using pll = pair<ll, ll>;
using pls = pair<ll, string>;
using pld = pair<ll, double>;
using plb = pair<ll, bool>;
template <class T>
using pque = priority_queue<T>;
const ll INFTY = 1L << 62L;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;
    if (abs(a % 10 - b % 10) == 1 || abs(a - b) == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}