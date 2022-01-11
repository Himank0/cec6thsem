#include<iostream>
using namespace std;
int main()
{
    int n=5, temp=n-1;
    for(int i=0; i<n-1; i++) {
       for(int j=0; j<=i; j++) {
           cout << j+1;
       }
       for(int j=0; j<(2*temp-1); j++) {
           cout << " ";
       }
       for(int j=0; j<=i; j++) {
           cout <<((2*n-1)-i+j);
       }
       temp = temp-1;
       cout << endl;
    }
    for(int i=0; i<2*n-1; i++) {
        cout << i+1;
    }
    cout << endl;
    temp = 1;
    for(int i=n-2; i>=0; i--) {
        for(int j=0; j<=i; j++) {
           cout << j+1;
       }
       for(int j=0; j<(2*temp-1); j++) {
           cout << " ";
       }
       for(int j=0; j<=i; j++) {
           cout <<((2*n-1)-i+j);
       }
       temp = temp+1;
        cout << endl;
    }
    return 0;
}