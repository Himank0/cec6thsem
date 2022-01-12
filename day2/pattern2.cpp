#include<iostream>
using namespace std;
void printEven(int n) {
    static int i = 0;
    if (n==0) 
        return;
    cout << i << " ";
    i += 2;
    printEven(n-1);
}
void printOdd(int n) {
    static int i = 1;
    if (n==0) 
        return;
    cout << i << " ";
    i += 2;
    printOdd(n-1);
}
int main()
{
    int n=5;
    printEven(n);
    cout << endl;
    printOdd(n);
    return 0;
}