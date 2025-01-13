#include<iostream>
using namespace std;
int main() {
    int n,count1 = 0,count2=0;
    cin>>n;
    char arr[n][n] ;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j] ;
        }
    }
    for(int i=0;i<n;i++) {
        
        for(int j=0;j<n;j++) {
            for(int k=j+1;k<n;k++) {
            if((arr[i][j]==arr[i][k] && arr[i][j]=='C' ) ) {
                count1 = count1 + 1 ;
            }
        }

    }
    }
    for(int j=0;j<n;j++) {
        for(int i=0;i<n;i++) {
            for(int k=i+1;k<n;k++) {
                if((arr[i][j]==arr[k][j] && arr[i][j]=='C' )  ) {
                count1 = count1 + 1 ;
            }
            }
        }
    }

   cout << count1 << endl ;
    
    
    
    }
    
    
