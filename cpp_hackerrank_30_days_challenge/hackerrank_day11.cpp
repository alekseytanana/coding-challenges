#include <iostream>
#include <vector>

using namespace std;



int main()
{
	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int sum[16] = {};
	int n = 0, max;

	for (int k = 0; k < 4; ++k) 
		for (int l = 0; l < 4; ++l) {
			sum[n] = arr[0 + k][0 + l] +
				arr[0 + k][1 + l] +
				arr[0 + k][2 + l] +
				arr[1 + k][1 + l] +
				arr[2 + k][0 + l] +
				arr[2 + k][1 + l] +
				arr[2 + k][2 + l];
			n++;
		}

	max = sum[0];
	for (int i = 1; i < 16; ++i)
		if (sum[i] > max)
			max = sum[i];
	cout << max;

	return 0;
}
