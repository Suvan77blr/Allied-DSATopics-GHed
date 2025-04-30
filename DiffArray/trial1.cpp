
// 140325
/*
    Difference Array - YT Video.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> queryTransform(vector<int>& arr, vector< vector<int> >& queries)
        {
            int n = arr.size(), q = queries.size();
            for(int i=0; i<q; i++) {
                for(int j=queries[i][0]; j<=queries[i][1]; j++) {
                    arr[j] += queries[i][2];
                }
            }
            return arr;
        }

        vector<int> diffArrayTech(vector<int>& arr, vector< vector<int> >& queries)
        {
            int n = arr.size(), q = queries.size();
            vector<int> diff(n, 0);
            int l, r, val;
            for(int i=0; i<q; i++)
            {
                l = queries[i][0];
                r = queries[i][1];
                val = queries[i][2];
                diff[l] += val;

                if(r+1 < n) diff[r+1] -= val;
            }
            
            cout << "arr : [ ";
            for(const int ele : arr){
                cout << ele << " ";
            }
            cout << "]\n";

            cout << "diff : [ ";
            for(const int ele : diff){
                cout << ele << " ";
            }
            cout << "]\n";

            arr[0] = diff[0];
            for(int i = 1; i<n; i++) {
                arr[i] = diff[i] + arr[i-1];
            }
            return arr;
        }
};

int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int q;
    cin >> q;

    vector< vector<int> > queries (q, vector<int> (3));
    for(int i=0; i<q; i++){
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    // vector<int> result = Solution().queryTransform(arr, queries);
    vector<int> result = Solution().diffArrayTech(arr, queries);
    cout << "Result : [ ";
    for(const int ele : result){
        cout << ele << " ";
    }
    cout << "]\n";
    return 0;
}