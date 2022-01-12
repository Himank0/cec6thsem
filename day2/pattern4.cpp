#include<iostream>
#include<cmath>
using namespace std;
void printPattern1(int n) {
    if (n < 0) return;
    if (n==0) {
        cout << "1"; 
        return;
    }
    printPattern1(n-1);
    cout << " + 1/" << pow(2,n);
}
void printPattern2(int n) {
     if (n==0) {
        cout << '1';
        return;
    }
    printPattern2(n-1);
    cout << " + " << 2*n;
}
void printPattern3(int n) {
 if (n < 0) return;
    if (n==0) {
        cout << "1"; 
        return;
    }
    printPattern3(n-1);
    cout << " + " << pow(3,n);
}
void printPattern4(int n) {
    if (n < 0) return;
    if (n==0) {
        cout << "1"; 
        return;
    }
    printPattern4(n-1);
    cout << " + 1/" << pow(3,n);
}
void printPattern5(int n) {
    if (n < 0) return;
    if (n==1) {
        cout << "1^1"; 
        return;
    }
    printPattern5(n-1);
    cout << " + 1^" << n;
}
int main()
{
    int n=5;
    printPattern1(n-1);
    cout << endl;
    printPattern2(n-1);
    cout << endl;
    printPattern3(n-1);
    cout << endl;
    printPattern4(n-1);
    cout << endl;
    printPattern5(n);
    return 0;
}