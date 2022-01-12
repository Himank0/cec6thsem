#include<iostream>
using namespace std;
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int printfibonacci(int n) {
    int sum=0, num;
    for(int i=1; i<n; i++) {
        num = fib(i);
        cout << num << " + " ;
        sum += num;
    }
    num = fib(n);
    cout << num << endl;
    return sum+num;
}
int main()
{
    int n=7;  
    cout << printfibonacci(n);
    return 0;
}