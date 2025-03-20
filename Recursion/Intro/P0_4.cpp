
// 200325
/*
    Sum of 'N' numbers : Parameterized recursion.
*/

#include <iostream>
using namespace std;

void recSum(int i, int sum) {
    if(i<1) {
        cout << "\nSum : " << sum;
        return;
    }
    recSum(i-1, sum+i);
}

int main(void) {
    int n;
    cout << "Enter \'n\' : ";
    cin >> n;

    recSum(n, 0);
    return 0;
}