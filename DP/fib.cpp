#include <bits/stdc++.h>
using namespace std;

//memoization


int fib(int n) {
	if (n <= 2) return 1;
	return (fib(n - 1) + fib(n - 2));
}



int main () {
	int num;
	do {
		cout << "Enter input: ";
		cin >> num;
		cout << "fib(n) = " << fib(num) << endl;

	} while (num != -1); 

	return 0;
}
