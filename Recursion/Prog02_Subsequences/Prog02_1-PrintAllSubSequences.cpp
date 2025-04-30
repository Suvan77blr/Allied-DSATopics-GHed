
// 2403251845
/*
    Prog02_1 : Program to print all the subsequences of an array.
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

        void printSubseq(vector<int>& temp, vector<int>& arr, int ind){
            if(ind >= arr.size()){
                displayArr(temp);
                return;
            }
            temp.push_back(arr[ind]);
            printSubseq(temp, arr, ind+1);

            temp.pop_back();
            printSubseq(temp, arr, ind+1);
        }
};

int main(void) {
    int n;
    // cout << "\nEnter the array size : ";
    cin >> n;

    vector<int> arr (n);
    vector<int> temp;
    // cout << "\nEnter the " << n << " array elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Printing all the Subsequences of the array :-\n";
    Solution().printSubseq(temp, arr, 0);
    
    return 0;
}