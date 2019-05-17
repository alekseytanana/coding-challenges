#include <iostream>

using namespace std;



int main()
{
	int n, max;
	int a[20] = {};
	int counter[20] = {};
	int j = 0;

	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; n > 0; i++)
	{
		a[i] = n % 2;

		if (a[i] == 1)
			counter[j]++;
		else
			j++;

		n = n / 2;
	}

	max = counter[0];
	for (int i = 0; i <= j; ++i)
		if (counter[i] > max)
			max = counter[i];
	cout << max;
	
	return 0;
}
