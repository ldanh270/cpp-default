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

// Sàn nguyên tố 1 -> n

ll primes[N + 100];

ll sieve(ll n) {
    ll d = 0;
    ll result[N + 100] = { 0 };
    primes[0] = primes[1] = 1;

    for (int i = 2; i * i <= n; i++) {
        if (primes[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = 1;
            }
        }
    }

    for (ll i = 2; i <= n; i++)
        if (primes[i] == 0) result[++d] = i;
}

// Sàn nguyên tố L -> R

void sang(ll L, ll  R) {
    ll prime[R - L + 1] = { 0 }, result[N + 100];
    ll d = 0;


    for (ll i = 2; i * i <= R; i++) {
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            prime[j - L] = 1;
        }
    }
    for (ll i = max(2ll, L); i <= R; i++) {
        if (prime[i - L]) {
            result[++d] = i;
        }
    }
}

// Phân tích số n thành thừa số nguyên tố

void primeFactorization(ll n) {
// Out function
    vector <ll> primes, amount;
    ll d = 0;

// In function
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primes.push_back(i);
            ll j = 0;
            while (n % i == 0) {
                n /= i;
                j++;
            }
            amount.push_back(j);
        }
    }
    if (n > 1) {
        primes.push_back(n);
        amount.push_back(1);
    }
}


int main() {

}
