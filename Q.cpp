#include<iostream>
using namespace std;
int main() {
    int n;
    cin>> n ;
    if(n>=0) {
        cout << n << endl ;
    }
    else if(n<0) {
        int last_dig = n%10;
        n = n/10;
        int before_last = n%10 ;
        int n1 = (n/10)*10 + last_dig ;
        if(n>n1) {
            cout << n << endl;
        }
        else {
            cout << n1 << endl ;
        }
    }
}