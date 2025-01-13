#include<iostream>
using namespace std ;
int main() {
    int n,count = 0;
    cin>>n ;
    int arr[n] ;
    for(int i=0;i<n;i++) {
       cin >> arr[i] ;
    }
    int maxlength = 1;
    int present = 1;
    for(int i=1;i<n;i++) {
        if(arr[i]>=arr[i-1]) {
            present++ ;
        }
        else {
            if(present>maxlength) {
                maxlength = present ;
            }
            present = 1;
        }
    }   

    maxlength = max(maxlength,present) ;
    cout << maxlength << endl ;



    }