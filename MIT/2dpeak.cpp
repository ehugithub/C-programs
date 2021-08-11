#include <bits/stdc++.h>
#define MAX 10

using namespace std;

pair<int, int>findpeak(int [][MAX], int, int);
int peak1d(int [][MAX], int, int, int);

int main() {
	int arr[][MAX] = {{10, 8, 10, 10},
					  {14, 13, 12, 11}, 
					  {15, 9, 11, 21}, 
					  {16, 17, 19, 20 }};

	cout << "The index of a peak is at (" << findpeak(arr, 0, MAX).first << ", " << findpeak(arr, 0, MAX).second << ")." << endl;	
	return 0;
}

int peak1d(int ar[][MAX], int n1, int n2, int j) {
	int m = (n1 + n2) / 2;
	if(ar[m - 1][j] > ar[m][j])
		return peak1d(ar, 0, m - 1, j);
	else if(ar[m + 1][j] > ar[m][j])
		return peak1d(ar, m, MAX, j);
	else
		return m;

}


pair<int, int>findpeak(int ar[][MAX], int n1, int n2) {
	int i, j = (n1 + n2) / 2;
	i = peak1d(ar, 0, MAX, j);
	if(ar[i][j - 1] > ar[i][j])
		findpeak(ar, 0, j - 1); 
	else if(ar[i][j + 1] > ar[i][j])
		findpeak(ar, j, MAX);
	else
		return make_pair(i, j);
}
