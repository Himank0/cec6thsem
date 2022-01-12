#include<iostream>
using namespace std;
void TowerOfHanoi(int n, char A, char C, char B) {
    if (n == 0) return;
    TowerOfHanoi(n-1, A, B, C);
    cout << "moved disk " << n << " from " << A << " to " << B << endl;
    TowerOfHanoi(n-1, C, A, B);
}
int main()
{
    int n=3;
    TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}