
// 2403251715
/* 
    Prog1 : Fibonacci Sequence using Recursion Technique.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int recFibo(int n)
        {
            if(n<=1) 
                return n;

            return recFibo(n-1)+recFibo(n-2);
        }
};

int main(void)
{   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int num;
    cout << "Enter the target number of the fibo seq : ";
    cin >> num;

    // We take the number input, but send the index value to the function.
    int result = Solution().recFibo(num-1);

    cout << endl << num << "th Fibo number = " << result << endl;
}


