#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    long long m ;
    cin>>n>>m;
    long long a[n],b[n],save[n] ;
    long long total = 0;
    
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i];
        total = total + a[i] ;
        save[i] = a[i] - b[i];
    }
    if(total<=m) {
        cout << "0" << endl;
        return 0;
    }
    sort(save, save + n, greater<long long>()); 

    int compressedsong=0;
    for(int i=0;i<n && total>m;i++) {
        total -= save[i] ;
        compressedsong++;
    }
    
    if(total>m) {
        cout << "-1" << endl ;
    }
    else {
        cout << compressedsong << endl ;
    }
}