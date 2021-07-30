#include <bits/stdc++.h>
using namespace std;

int findpeak(int [], int, int, int);


int main () {
	int list[] = {10, 20, 15, 2, 23, 90, 67};
	int s = sizeof(list) / sizeof(list[0]);
	cout << "Index of a peak is" << findpeak(list, 0, s - 1, s);

	return 0;
}

int findpeak(int list[], int n1, int n2, int s) {
	int m = (n1 + n2) / 2;
	if (list[m - 1] > list[m])
		return findpeak(list, 0, m - 1, s);
	else if (list[m + 1] > list[m])
		return findpeak(list, m, s - 1, s);
	else
		return m;
}
