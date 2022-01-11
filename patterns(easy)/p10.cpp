#include<iostream>
using namespace std;
int main() 
{
    int n=5;
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << n-i;
        int k=0;
        for(int j=0; j < 2*i-1; j++, k++) {
            cout << " ";
        }
        if (k == 2*i-1)
            cout << n-i;
        cout << endl;
    }
    for(int i=1; i<n; i++) {
        for(int j=n-i-1; j>0; j--) {
            cout << " ";
        }
        cout << n-i;
        int k=0;
        for(int j=0; j<2*i-1; j++, k++) {
            cout << " ";
        }
        if (k == 2*i-1)
            cout << n-i;
        cout << endl;
    }
    return 0;
}