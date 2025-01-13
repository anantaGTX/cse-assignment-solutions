#include<iostream>
using namespace std ;

int main() {
    int N;
cin >> N ;
int  W[N] ;
for(int i=0;i<N;i++) {
    cin >> W[i] ;
}
int Diff = 10000 ;
for(int T=1;T<N;T++) {
    int S1 = 0, S2= 0 ;

for(int i=0;i<T;i++) {
     
        S1 = S1 + W[i] ;
}
for(int i=T;i<N;i++) {
     
        S2 = S2 + W[i] ;
}

int diff = abs(S1-S2) ;
if(diff<Diff) {
    Diff = diff;
}
        
     
}
cout << Diff << endl;

}

