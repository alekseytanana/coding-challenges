#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	map<string, string> phoneBook;
	int n;
	string s, buf;
	vector<string> line;
	
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i != n; ++i) {
		//cin >> s;
		getline(cin, s);
		stringstream ss(s);
		while (ss >> buf)
			line.push_back(buf);

		if ( line.size() >= 2 )
			phoneBook.insert(pair<string, string>(line[0], line[1]));
		line.clear();
	}
	
	while (cin >> s) {
		//getline(cin, s);

		if (phoneBook.find(s) != phoneBook.end())
			cout << s << "=" << phoneBook[s] << endl;
		else
			cout << "Not found" << endl;
	}


	return 0;
}