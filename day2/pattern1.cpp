#include<iostream>
using namespace std;
void printUptoN(int n) {
    if (n==0) return;
    printUptoN(n-1);
    cout << n << " ";
}
void printUptoN_reverse(int n) {
    if (n==0) return;
    cout << n << " ";
    printUptoN_reverse(n-1);
}
int main()
{
    int n=5;
    printUptoN(n);
    cout << endl;
    printUptoN_reverse(n);
    return 0;
}