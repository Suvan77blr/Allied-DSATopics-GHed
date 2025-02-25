
// 2502251526
// Hashing-P01 : To check the freq of elements in an array.
//		- Max element possible : 12.

#include <iostream>
#include <vector>
#define max_ele 12
using namespace std;

class Solution {
	public: 
		int max_element;
		vector<int> hashArr;

		Solution(int max_element, vector<int>& arr);

		void precompute(vector<int>& arr);

		int getCount(int numberQuery)
		{
			return hashArr[numberQuery];
		}
};

Solution::Solution(int max_element, vector<int>& arr)
{
	this->max_element = max_element;
	this->hashArr = vector<int>(max_element+1, 0);
	// int hashArr[max_ele+1] = {0};
	this->precompute(arr);
}

// Precomputation of the Hash Array.
void Solution :: precompute(vector<int>& arr) 
{
	for(const int& ele : arr)
	{
		this->hashArr[ele]++;
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

	/*
	vector<int> hashArr ( max_ele+1, 0);
	for(int i=0/ i<n; i++) 
	{
		if(arr[i] > max_ele)
			continue;

		hashArr[arr[i]]++;
	}
	*/

	Solution solnObj = Solution(max_ele, arr);

	int q;
	do{
		cout << "Enter the number to query its count (-1 to stop querying) : ";
		cin >> q;
		if(q == -1) {
			cout << "EXITING Query section ... !" << endl;
			break;
		}
	
		int result;
		if(q > max_ele)
			result = 0;
		else
			result = solnObj.getCount(q);

		cout << "\'" << q << "\' -> " << result << " times.\n";
	}while(true);

	cout << "\nEOP!n";
}

