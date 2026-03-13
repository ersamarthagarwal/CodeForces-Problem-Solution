#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    while(b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    // Checking if (2*n*m) is divisible by k
    if ((2 * n * m) % k != 0) {
        cout << "NO" << endl;
        return 0;
    }

    // Calculating area
    long long area = (2 * n * m) / k;
    long long a, b;

    a = n / gcd(n, k);
    b = area / a;

    if (b > m) {
        long long g = gcd(m, k);
        b = m / g;
        a = area / b;
    }

    if (a <= n && b <= m) {
        cout << "YES" << endl;
        cout << "00" << endl;
        cout << a << "0" << endl;
        cout << "0" << b << endl;
    } else {
        long long temp = a;
        a = b;
        b = temp;

        if (a <= n && b <= m) {
            cout << "YES" << endl;
            cout << "00" << endl;
            cout << a << "0" << endl;
            cout << "0" << b << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}