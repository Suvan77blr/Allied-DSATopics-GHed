
// 200325
/*
    Prog to print 1 to N linearly. 
        => Recursion.
*/
#include <iostream>
using namespace std;

void printLinearSeq(int i, int n)
{
    if(i==n){
        cout << i << " ~|\n";
        return;
    }
    cout << i << " ";
    printLinearSeq(i+1, n);
}

int main(void) {    
    int n;
    // cout << "\nEnter \'n\' : ";
    cin >> n;

    printLinearSeq(1, n);
    cout << "\nEOP!\n";
    return 0;
}