#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    bool isBerelanse = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'n') {
            if (i == str.length() - 1 || 
                (str[i+1] != 'a' && str[i+1] != 'e' && str[i+1] != 'i' && str[i+1] != 'o' && str[i+1] != 'u')) {
                isBerelanse = false;
                break;
            }
        }
    }

    if (isBerelanse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
