
// 2602250107
// Hashing-P04 : Character Freq w/ Unordered-Map
//		- All Characters.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
	public: 
		unordered_map<char, int> ump;

		Solution(string str);
		void precompute(string str);

		int getCount(char charQuery)
		{
			return ump[charQuery];
		}
};

Solution::Solution(string str)
{
	this->precompute(str);
}

// Precomputation of the Hash Array.
void Solution :: precompute(string str) 
{
	for(const char& ch : str) {
		this->ump[ch]++;
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

