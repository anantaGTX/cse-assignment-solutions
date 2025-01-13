#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long x,y ;
        cin >> x >> y;
        long long d=x-y ;
        if(d>=2) {
            cout << "YES" << endl ;
            
        } 
        else {
            cout << "NO" << endl ;
        }
    }
}