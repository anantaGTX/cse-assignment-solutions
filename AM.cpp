#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    double H,L;
    cin>>H>>L;
    double A = ((L*L)-(H*H))/(2*H) ;
    cout << fixed << A << setprecision(6) << endl;
}AA