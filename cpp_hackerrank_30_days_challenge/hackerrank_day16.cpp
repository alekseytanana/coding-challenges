#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	string S;
	int i;

	cin >> S;

	try {
		i = stoi(S);
		cout << i;
	}
	catch (invalid_argument e) {
		cout << "Bad String" << endl;
	}

	//i = stoi(S);
	
	return 0;
}

