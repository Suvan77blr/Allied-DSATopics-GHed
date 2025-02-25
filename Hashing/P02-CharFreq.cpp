
// 2502252317
// Hashing-P02 : To check the freq of characters in an array.
//		- Considering only Lowercase chars.

#include <iostream>
#include <vector>
#define ALPHABETS 26
using namespace std;

class Solution {
	public: 
		vector<int> hashArr;

		Solution(string str);
		void precompute(string str);

		int getCount(char charQuery)
		{
			return hashArr[charQuery - 'a'];
		}
};

Solution::Solution(string str)
{
	this->hashArr = vector<int>(ALPHABETS+1, 0);
	this->precompute(str);
}

// Precomputation of the Hash Array.
void Solution :: precompute(string str) 
{
	for(const char& ch : str) {
		this->hashArr[ch - 'a']++;
	}
}

int main(void)
{
	string str;
	cout << "\nEnter the string : ";
	cin >> str;

	Solution solnObj = Solution(str);

	char q;
	do{
		cout << "\nEnter character to query (! to stop querying) : ";
		cin >> q;
		if(q == '!') {
			cout << "EXITING Query section ... !" << endl;
			break;
		}
	
		int result = solnObj.getCount(q);

		cout << "\'" << q << "\' -> ";
		if(result == 0)
			cout << "NOT PRESENT!\n";
		else
			cout << result << " times.\n";
			
	}while(true);

	cout << "\nEOP!\n";
}

