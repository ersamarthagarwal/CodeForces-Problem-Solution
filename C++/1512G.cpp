#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000000; // 10^7

int main() {
    // To store sum of divisors for each number
    vector<int> sum(MAX + 5, 0);

    // Sieve-like computation of divisor sums
    for (int i = 1; i <= MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            sum[j] += i;
        }
    }
    vector<int> ans(MAX + 5, 0);

    for (int i=1; i <= MAX; i++) {
        if (sum[i] <= MAX && ans[sum[i]] == 0) {
            ans[sum[i]] = i;
        }
    }

    int t;
    cin >> t;
    while(t--) {
        int c;
        cin >> c;
        if (ans[c] == 0) {
            cout << "-1" << endl;
        } else {
            cout << ans[c] << endl;
        }
    }
    return 0;
}