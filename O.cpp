#include<iostream>
using namespace std ;
int main() {
    int A,B,min=0;
    int fact = 1;
    cin >> A >> B ;
    if(A<B) {
        min = A ;
    }
    else {
        min = B ;
    }
    
    for(int i=1 ;i<=min;i++) {
        fact= fact*i ;
    }
    cout << fact << endl;
}