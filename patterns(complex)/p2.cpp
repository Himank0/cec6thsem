#include<iostream>
using namespace std;
int main()
{
    int n=6, temp;
    int a=0, b=1;
    for(int i=0; i<n-1; i++) {
       for(int j=0; j<=i; j++) {
           cout << b << " ";
           temp=a;
           a = b;
           b=temp+b;
       }
       cout << endl;
    }
    return 0;
}