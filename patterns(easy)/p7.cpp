#include<iostream>
using namespace std;
int main() 
{
    int n=5;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=i; j++) {
            cout << n-j;
        }
        cout << endl;
    }
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n-i-1; j++) {
            cout << n-j;
        }
        cout << endl;
    }
    return 0;
}