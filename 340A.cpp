#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Functiun to calculate LCM
int lcm(int a, int b) {
    // Dividing first to avoid overflow
    return (a / gcd(a, b)) * b;
}

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    // Calculating LCM of x and y
    int l = lcm(x,y);

    // Counting multiples of l in range [a, b]
    int count = (b / l) - ((a-1) / l);

    cout << count << endl;
    return 0;
}