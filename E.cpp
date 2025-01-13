#include<iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    char arr[101] ;
    cin>> arr ;
   int count1 = 0 ;
    
    for(int i=0;i<n;i++) {
            if(arr[i]=='8') {
                count1++ ;
        }
    }
        
    count = min(count1, n / 11);
    cout << count << endl ;
}
