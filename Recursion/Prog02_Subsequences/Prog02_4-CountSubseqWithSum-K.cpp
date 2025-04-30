
// 24032519__
/*
    Prog02_2 : Program to COUNT no of subsequences of having sum equal to 'k'.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 
        int countSubseq(vector<int>& arr, int ind, int k, int& currSum){
            // Optimization. => applicable only when array has only positives.
            if(currSum > k)
                return 0;

            if(ind >= arr.size()){
                if(currSum == k){
                    return 1;
                }
                else return 0;
            }
            
            currSum += arr[ind];
            int l = countSubseq(arr, ind+1, k, currSum);

            currSum -= arr[ind];
            int r = countSubseq(arr, ind+1, k, currSum);
            return l+r;
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
    // cout << "\nEnter the " << n << " array elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int currSum = 0;
    cout << "Count of sub-seqs having sum " << k << " : ";
    int countSubseq = Solution().countSubseq(arr, 0, k, currSum);
    cout << countSubseq << endl;
    
    return 0;
}

/*
    TCs:
    1) IP : 3 3
            1 2 1
       OP : [1 2], [2 1].
*/