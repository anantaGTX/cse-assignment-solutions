#include<iostream>
using namespace std ;
int main() {
	int n ;
	cin >> n; 
	for(int i=1;i<=n;i++) {
		if(n%i==0) {
			int temp = i ;
			bool isLucku = 1;
			while(temp>0) {
				if(temp%10!=4 && temp%10!=7) {
					isLucku = false ;
					break;
				}
				temp = temp/10 ;
			}
			if(isLucku) {
				cout << "YES" << endl ;
				return 0;

			}
		}
	}
	cout << "NO" << endl ;
}