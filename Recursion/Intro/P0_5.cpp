
// 200325
/*
    Factorial(N) : Functional recursion. => where the function itself returns the value.
*/

#include <iostream>
using namespace std;

int recFact(int num) {
    if(num < 0)
        return -1;

    if(num == 0 || num == 1) {
        return 1;
    }
    return num * recFact(num-1);
}

int main(void) {
    int n;
    cout << "Enter \'n\' : ";
    cin >> n;

    int fact = recFact(n);
    if(fact < 0) {
        cout << "Factorial Error!\n";
    }
    cout << "\n" << n << "! = " << fact << endl;
    return 0;
}