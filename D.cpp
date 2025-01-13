#include<iostream>
using namespace std;

int comp(int x) {
    if(x<=3) return 0;
    for(int p=2;p*p<=x;p++) {
        if(x%p==0) return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int b=4;
    for(;;) {
        int a= b+n;
        if(comp(a)&&comp(b)) {
            cout << a <<" " << b << endl ;
            break;


        }
        b++ ;
    }
    return 0;
}