
// 200325
/*
    Prog to print N to 1. 
        => Using Pseudo-backtracking.
*/

#include <iostream>
using namespace std;

void printLinearSeq(int i, int n)
{
    if(i > n)
        return ;
    printLinearSeq(i+1, n);
    cout << i << " - ";
    return;
}

int main(void) {    
    int n;
    // cout << "\nEnter \'n\' : ";
    cin >> n;

    printLinearSeq(1, n);
    cout << "|\nEOP!\n";
    return 0;
}