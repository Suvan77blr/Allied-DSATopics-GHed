
// 2502252335
// Hashing-P03 : To check the freq of elements in an array. => Using MAPS
//		- Caters to any number.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
	public: 
		map<int, int> mp;
		Solution(vector<int>& arr);

		void precompute(vector<int>& arr);

		int getCount(int numberQuery)
		{
			return mp[numberQuery];
		}
};

Solution::Solution(vector<int>& arr)
{
	this->precompute(arr);
}

// Precomputation of the Hash Map.
void Solution :: precompute(vector<int>& arr) 
{
	for(const int& ele : arr)
	{
		this->mp[ele]++;
	}
}

int main(void)
{
	int n;
	cout << "Enter the array size : ";
	cin >> n;

	vector<int> arr(n);
	cout << "Enter the array elements : ";
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	Solution solnObj = Solution(arr);

	int q;
	do{
		cout << "Enter the number to query its count (-1 to stop querying) : ";
		cin >> q;
		if(q == -1) {
			cout << "EXITING Query section ... !" << endl;
			break;
		}
	
		int result = solnObj.getCount(q);
		cout << "\'" << q << "\' -> " << result << " times.\n";
	}while(true);

	cout << "\nEOP!n";
}

