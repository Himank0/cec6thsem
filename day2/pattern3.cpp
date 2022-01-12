#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n, int div) {
    if (n % div == 0)
        return false;
    if (div >= sqrt(n)) 
        return true;
    return isPrime(n, div+1);
}
void printPrime(int n) {
    int i=1, count=0;
    while(count < n) {
        if (isPrime(i, 2)) {
            cout << i << " ";
            count++;
        }
        i++;
    }
}
int main()
{
    int n=5;
    printPrime(n);
    return 0;
}