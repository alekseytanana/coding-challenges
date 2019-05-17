#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int d, m, y;
	int d_due, m_due, y_due;
	int fine=0;
	int d_fee = 15, m_fee = 500, y_fee = 10000;

	cin >> d >> m >> y;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin >> d_due >> m_due >> y_due;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (y > y_due)
		fine = y_fee;
	else if ((m > m_due) && (y == y_due))
		fine = (m - m_due) * m_fee;
	else if ((d > d_due) && (m == m_due) && (y == y_due))
		fine = (d - d_due) * d_fee;

	cout << fine;

	return 0;
}