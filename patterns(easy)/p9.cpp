#include<iostream>
using namespace std;
int main() 
{
    int n=5;
    char ch = 'A';
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout <<(char)('A'+i);
        int k=0;
        for(int j=0; j < 2*i-1; j++, k++) {
            cout << " ";
        }
        if (k == 2*i-1)
            cout <<(char)('A'+i);
        cout << endl;
    }
    return 0;
}