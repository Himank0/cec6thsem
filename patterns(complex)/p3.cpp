#include<iostream>
using namespace std;
int main()
{
    int n=5, num;
    for(int i=0; i<n; i++) {
        int num=1;
        for(int j=0; j<=i; j++) {
            cout << num << " ";
            num = num*(i-j)/(j+1);
        }
        cout << endl;
    }
    return 0;
}