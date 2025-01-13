#include<iostream>
using namespace std;
int main() {
    int n,sum=0,sum1=0;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++) {
        cin>>arr[i] ;
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                swap(arr[i],arr[j]) ;
            }
         }

    }
    for(int i=0;i<n;i++) {
       if(i==0 || i%2==0 ) {
         sum = sum+arr[i] ;
       }
       else {
        sum1= sum1 + arr[i] ;
       }
    }
    cout << sum << " " << sum1 ;
    cout << endl ;
    return 0 ;
}