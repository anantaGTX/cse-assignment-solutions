#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long turns = n / k;

    if (turns % 2 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
