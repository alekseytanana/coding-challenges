#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
struct Calculator {

	int power(int n, int p) {

		int pow = 1;

		if ((n < 0) || (p < 0))
			throw invalid_argument("n and p should be non-negative");
				
		if (p == 0)
			return 1;

		while (p-- > 0)
			pow *= n;

		return pow;
	}
};




int main()
{
	Calculator myCalculator = Calculator();
	int T, n, p;
	cin >> T;
	while (T-- > 0) {
		if (scanf_s("%d %d", &n, &p) == 2) {
			try {
				int ans = myCalculator.power(n, p);
				cout << ans << endl;
			}
			catch (exception & e) {
				cout << e.what() << endl;
			}
		}
	}

}