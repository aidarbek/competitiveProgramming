#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

const int N = 100100;
int da[N], net[N], n, m, das, nets, canBe[N], cans, said[N];
char s[30];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> said[i];
		x = said[i];
		if (x < 0) {
			net[-x]++;
		}
		else {
			da[x]++;
			das++;
		}
	}
	nets = n - das;

	for (int i = 1; i <= n; i++) {
		int oks = da[i], bad = 0;
		bad += das - da[i]; bad += net[i];
		oks += nets - net[i];
		if (oks == m) {
			canBe[i] = 1, cans++;
		} //else
	}

	for (int i = 1; i <= n; i++) {
		int x = said[i];
		if (x < 0) {
			if (canBe[-x] && cans == 1) {
				cout << "Lie\n";
			} else 
				if (canBe[-x] && cans > 1) {
					cout << "Not defined\n";
				} else 
					if (!canBe[-x])
						cout << "Truth\n";
		} else {
			if (canBe[x] && cans == 1)
				cout << "Truth\n";
			else if (canBe[x] && cans > 0)
				cout << "Not defined\n";
			else if (!canBe[x])
				cout << "Lie\n";
		}
	}


	return 0;
}

