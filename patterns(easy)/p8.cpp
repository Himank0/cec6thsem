#include<iostream>
using namespace std;
int main() 
{
    int n=5;
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>0; j--) {
            cout << " ";
        }
        cout << i+1;
        int k=0;
        for(int j=0; j<2*i-1; j++, k++) {
            cout << " ";
        }
        if (k == 2*i-1)
            cout << i+1;
        cout << endl;
    }
    for(int i=n-2; i>=0; i--) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << i+1;
        int k=0;
        for(int j=0; j < 2*i-1; j++, k++) {
            cout << " ";
        }
        if (k == 2*i-1)
            cout << i+1;
        cout << endl;
    }
    return 0;
}