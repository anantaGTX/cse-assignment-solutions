#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[100],index[100] ;
    
    for(int i=0;i<n;i++) {
        int sum=0;
        cin >> arr[i] ;
        index[i]=i+1;
        

    }
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1] = temp ;
                temp = index[j] ;
                index[j]=index[j+1] ;
                index[j+1]=temp ;
            }
            
        }
    }
    for(int i=0;i<n/2;i++) {
        cout << index[i] << " " << index[n-1-i] << endl ;
    }
}