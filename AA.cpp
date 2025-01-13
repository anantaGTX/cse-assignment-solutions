#include<iostream>
#include<string.h>
using namespace std;
void sortDig(char dig[],int length) {
    for(int i=0;i<length-1;i++) {
        for(int j=i+1;j<length;j++) {
            if(dig[i]>dig[j]) {
                int temp = dig[i] ;
                dig[i] = dig[j] ;
                dig[j]=temp;
            }
        }
    }
}
int main() {
    char s[101] ,digits[101] ;
    scanf("%s",s) ;
    int digCount = 0;
    for(int i=0;i<strlen(s);i++) {
        if(s[i]>='1'&&s[i]<='3') {
            digits[digCount] = s[i] ;
            digCount++ ;
        }
    }
    sortDig(digits,digCount) ;
    for(int i=0;i<digCount;i++) {
        if(i>0) {
            cout << "+" ;
        }
        cout << digits[i] ;
    }
    cout << endl ;


}