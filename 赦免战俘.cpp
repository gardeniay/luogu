#include<stdio.h>
using namespace std;
int n;
int main() {
	scanf_s("%d", &n);
	for (int i = 0; i < (1 << n); i++) {
		for (int j = 0; j < (1 << n); j++) {
			printf("%d ", (i | j) != ((1 << n) - 1) ? 0 : 1);
		}
		printf("\n");
	}
	return 0;
}