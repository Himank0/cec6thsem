#include<iostream>
using namespace std;
int main()
{
    int n=11;
    for(int i=0; i<=n/2; i++) {
        if (i == 0) {
            for(int j=0; j<n; j++) {
                cout << "*";
            }
        } else {
            for(int j=0; j<n; j++) {
                 if (j == 0 || j == n-1) {
                    cout << "*";
                } else if (i == j || j == n-i-1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
       cout << endl;
    }
    for (int i=(n/2)+1; i<n; i++) {
        if (i == n-1) {
            for(int j=0; j<n; j++) {
                cout << "*";
            }
        } else {
            for(int j=0; j<n; j++) {
                 if (j == 0 || j == n-1) {
                    cout << "*";
                } else if (i == j || j == n-i-1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
       cout << endl;
    }
    return 0;
}