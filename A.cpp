#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define str string

const ll mod = 1e9 + 7;
const ll oo = 1e18;
const ll N = 1e5;
const ll AI = 1e6;

str s;

ll check(ll i) {
    if (s[i + 1] == 'D') {
        if (s[i + 2] == 'D') {
            return 2;
        }
        return 1;
    }
    return 0;
}

void solve() {
    ll i = 0;
    cin >> s;
    while (i < s.size()) {
        if (s[i] == 'F') {
            if (check(i) == 0) {
                i++;
            }
            else if (check(i) == 1) {
                i += 2;
            }
            else if (check(i) == 2) {
                i += 3;
            }
        }
        else {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("A.inp", "r", stdin);
    freopen("A.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tcase = 1;
    cin >> tcase;
    while (tcase--) solve();
}
