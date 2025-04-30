
// 2403251931
/*
    Prog02_3 : Program to print  the FIRST subsequence having sum equal to 'k'.
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

        bool printSubseq(vector<int>& temp, vector<int>& arr, int ind, int k, int& currSum){
            if(ind >= arr.size()){
                // displayArr(temp);
                if(currSum == k){
                    displayArr(temp);
                    return true;
                }
                return false;
            }
    
            temp.push_back(arr[ind]);
            currSum += arr[ind];
            if(printSubseq(temp, arr, ind+1, k, currSum) == true)
                return true;

            currSum -= arr[ind];
            temp.pop_back();
            if(printSubseq(temp, arr, ind+1, k, currSum) == true)
                return true;
            return false;
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
       OP : [1 2].
*/