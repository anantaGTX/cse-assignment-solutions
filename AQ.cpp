#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n] ;
    int len = sizeof(arr)/sizeof(int) ;
    for(int i=0;i<len;i++) {
        cin>> arr[i] ;
    }
    std::sort(arr,arr+len) ;
    for(int i=0;i<len;i++) {
        cout << arr[i] << " " ;
    }
    
}