#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e7+5;
int prime_count[MAX];

// Precomputing number of distint prime factors for each number
void precompute() {
    for (int i = 2; i < MAX; i++) {
        if (prime_count[i] == 0) {
            for (int j = i; j < MAX; j += i) {
                prime_count[j]++;
            }
        }
    }
}

long long solve(int c, int d, int x) {
    long long ans = 0;
    // Iterating through all devisors of x
    for (int i = 1; i * i <= x; i++) {
        if (x % i != 0) continue;
        if ((x / i + d) % c == 0) {
            int k = (x / i + d) / c;
            ans += 1LL << prime_count[k];
        }
        if (i != x / i) {
            int j = x / i;
            if((x / j + d) % c == 0) {
                int k = (x / j + d) / c;
                ans += 1LL << prime_count[k];
            }
        }
    }
    return ans;
}

int main(){
    precompute();
    int t;
    cin >> t;
    while (t--){
        int c, d, x;
        cin >> c >> d >> x;
        cout << solve(c, d, x) << endl;
    }
    return 0;    
}