
// 2403251903
/*
    Prog02_2 : Program to print all the subsequences of having sum equal to 'k'.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 
        void displayArr(vector<int>& arr) {
            cout << "[ ";
            for(const int ele : arr) {
                cout << ele << " ";
            } cout << "]\n";
        }

        void printSubseq(vector<int>& temp, vector<int>& arr, int ind, int k, int& currSum){
            if(ind >= arr.size()){
                // displayArr(temp);
                if(currSum == k){
                    displayArr(temp);
                }
                return;
            }
    
            temp.push_back(arr[ind]);
            currSum += arr[ind];
            printSubseq(temp, arr, ind+1, k, currSum);

            currSum -= arr[ind];
            temp.pop_back();
            printSubseq(temp, arr, ind+1, k, currSum);
        }
};

int main(void) {
    int n;
    // cout << "\nEnter the array size : ";
    cin >> n;

    int k;
    // cout << "Enter the sum to check \'k\' : ";
    cin >> k;

    vector<int> arr (n);
    vector<int> temp;
    // cout << "\nEnter the " << n << " array elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int currSum = 0;
    cout << "Printing all the Subsequences of the array having sum as " << k << " :-\n";
    Solution().printSubseq(temp, arr, 0, k, currSum);
    
    return 0;
}

/*
    TCs:
    1) IP : 3 3
            1 2 1
       OP : [1 2], [2 1].
*/