#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T, c;
	int num[30];
	bool prime;


	cin >> T;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i=0; i<T; ++i)
	{
		cin >> num[i];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	for (int i = 0; i < T; i++) 
	{
		if (num[i] <= 1)
			cout << "Not prime" << endl;

		else {
			prime = true;

			int sq = sqrt(num[i]);
			for (int j = 2; j <= sq; j++) {
				if (num[i] % j == 0)
				{
					cout << "Not prime" << endl;
					prime = false;
					break;
				}
			}

			if (prime)
				cout << "Prime" << endl;
		}
	}
	return 0;
}
