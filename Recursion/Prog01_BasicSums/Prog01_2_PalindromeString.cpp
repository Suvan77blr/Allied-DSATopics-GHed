
// 200325
/*
    P01_2 : Checking for palindrome string.
        > 2Ptrs : left & right.
        > Single-Ptr : 'i' & 'n-i-1'.
*/

#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str, int left, int n) {
    if(str[left] != str[n-left-1])
        return false;
    
    if(left >= (n/2))
        return true;

    return checkPalindrome(str, left+1, n);
}

int main(void) {
    string str;
    cout << "Enter the string to check : ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = false;

    if(n == 1)
        isPalindrome = true;
    else
        isPalindrome = checkPalindrome(str, 0, n);

    cout << "\nPalindrome string? : ";
    if(isPalindrome)
        cout << "True!\n";
    else cout << "False!\n";

    return 0;
}
