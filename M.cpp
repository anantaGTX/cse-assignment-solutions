#include<iostream>
using namespace std ;
int main() {
    int N,L;
    int Max = 0 ,sum=0; 
    cin >> N ;
    int arr[N] ;
    int i ;
    for(i=0;i<N;i++) {
        cin >> arr[i] ;
        if(arr[i]>Max) {
            Max = arr[i] ;
        }

    }

    for(int i=0 ;i<N;i++) {
        sum = sum + arr[i] ;
    }
    int pic = sum - Max ;

    if(pic>Max) {
        cout << "Yes" << endl ;
    }
    else {
        cout << "No" << endl ;
    }
    
    
    
    
    
    
}