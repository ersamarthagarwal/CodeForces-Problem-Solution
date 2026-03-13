#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        // For Maximum GCD we simply do n/2.
        cout << n/2 << endl;
    }
    return 0;
}