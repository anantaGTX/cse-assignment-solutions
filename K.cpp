#include<iostream>
using namespace std;
int main() {
    int x1,x2,x3;
    int sum1=0,sum2=0 ;
    cin >> x1 >> x2 >> x3 ;
    if(x2>x1 && x2>x3) {
        sum1 = x2-x1 ;
        sum2 = x2-x3 ;
    }
    else if(x1>x2 && x1>x3) {
        sum1 = x1-x2 ;
        sum2 = x1 - x3 ;
    }
    else {
        sum1 = x3-x2;
        sum2 = x3-x1 ;
    }
    int final = max(sum1,sum2) ;
    cout << final << endl ;
}