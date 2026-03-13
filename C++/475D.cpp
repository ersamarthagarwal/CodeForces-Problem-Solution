#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<long long, long long> current, result;

    for (int i = 0; i < n; i++) {
        map<long long, long long> next;
        // Extending previous subarrays
        for (auto &p : current) {
            long long g = gcd(p.first, arr[i]);
            next[g] += p.second;
        }

        // Adding single element subarray
        next[arr[i]]++;

        // Updating result with counts from current position
        for (auto &p : next) {
            result[p.first] += p.second;
        }

        // Moving to next position
        current = move(next);
    }

    // Answering queries
    int q;
    cin >> q;

    while (q--) {
        long long x;
        cin >> x;
        cout << result[x] << endl;
    }
    return 0;
}