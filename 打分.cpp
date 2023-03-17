#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	int score[1001] = { 0 };
	float sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	sort(score, score + n);
	for (int j = 1; j < n-1; j++)
	{
		sum += score[j];
	}
	printf("%.2lf", sum / (n-2));
}