
// 200325
/*
    Prog to print name 5 times -> Recursion.
*/
#include <iostream>
#include <string>
using namespace std;

void printName(string s, int n)
{
    if(n<=0)
        return;
    cout << "Hai, " << s << "!\n";
    printName(s, n-1);
}

int main(void) {
    string s;
    cout << "\nEnter your name : ";
    cin >> s;
    
    int n;
    cout << "\nHow many times to repeat? : ";
    cin >> n;

    printName(s, n);
    cout << "\nEOP!\n";
    return 0;
}