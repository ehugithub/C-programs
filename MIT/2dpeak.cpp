#include <bits/stdc++.h>
#define MAX 4

using namespace std;

pair<int, int>findpeak(int [][MAX], int, int);
int peak1d(int [][MAX], int, int, int);

int main() {
	int arr[][MAX] = {{10, 8, 10, 10},
					  {14, 13, 12, 15}, 
					  {15, 1293, 11, 17}, 
					  {13, 17, 19, 20 }};
	
	cout << "The index of a peak is at (" << findpeak(arr, 0, MAX).first << ", " << findpeak(arr, 0, MAX).second << ")." << endl;	
	//findpeak(arr, 0, MAX);
	return 0;
}

int peak1d(int ar[][MAX], int n1, int n2, int j) {
	int m = (n1 + n2) / 2;
	if (m == 0 || m == MAX - 1)
		return m;
	else if(ar[m - 1][j] > ar[m][j])
		return peak1d(ar, 0, m - 1, j);
	else if(ar[m + 1][j] > ar[m][j])
		return peak1d(ar, m, MAX, j);
	else
		return m;

}


pair<int, int>findpeak(int ar[][MAX], int n1, int n2) {
	int i, j = (n1 + n2) / 2;
	i = peak1d(ar, 0, MAX - 1, j);
	//cout << i << " " << j << endl;

	if(j == 0 || j == MAX - 1)
		return make_pair(i, j); 
	if(ar[i][j - 1] > ar[i][j])
		findpeak(ar, 0, j - 1); 
	if(ar[i][j + 1] > ar[i][j])
		findpeak(ar, j, MAX);
	else
		return make_pair(i, j);
}
