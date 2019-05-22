#include <vector>
#include <cstring>
#include <iostream>
#include <regex>

using namespace std;

vector<string> split_string(string);

int main()
{
    int N=0;
    cin >> N;

    vector<string> names;
    regex re(".+@gmail\\.com$");

    for (int N_itr = 0; N_itr < N; N_itr++) {
		
        string firstName;
        string emailID;
		cin >> firstName >> emailID;

		if (regex_match(emailID, re))
			names.push_back(firstName);
	}

	sort(names.begin(), names.end());

	for (size_t i=0; i<names.size(); i++)
		cout << names[i] << endl;

	return 0;
}