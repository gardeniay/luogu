#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a, k[5], sum;
int main() {
	cin >> a;
	if (a > 4 && a <= 12) sum++;
	if (a % 2 == 0) sum++;
	if (sum == 2) k[1] = 1;
	if (sum == 1 || sum == 2) k[2] = 1;
	if (sum == 1) k[3] = 1;
	if (sum == 0) k[4] = 1;
	for (int i = 1; i <= 4; i++) {
		cout << k[i] << " ";
	}
	return 0;
}