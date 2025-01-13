#include<iostream>
using namespace std ;
int main() {
    int x,y,z;
    cin>>x>>y>>z ;
    int a,b,c;
    cin>>a>>b>>c;
    
    if(x<=a && (y<=(a-x+b) && (z<=((a+b+c)-(x+y))))) {
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
      
}
