#include<iostream>
using namespace std ;
int main() {
    int n,sum=0,final = 0;
    cin>>n ;
    if (n <= 0) { 
    return 0; 
    }
    int x,y;
    while(n--) {
        cin >> x >> y ;
        sum = x+y ;
        if(sum>final) {
            final = sum ;
        }

    }
    cout << final << endl ;
}