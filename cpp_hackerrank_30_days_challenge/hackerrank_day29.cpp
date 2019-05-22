#include "pch.h"
#include <vector>
#include <cstring>
#include <iostream>
#include <regex>

using namespace std;

int main() {
	int t, res, n, k, max = 0;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		cin >> n >> k;
		for (int i = 1; i < n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				res = i & j;
				if (res > max && res < k) {
					max = res;
				}
			}
		}
		cout << max << endl;
		max = 0;
	}
	return 0;
}