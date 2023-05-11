//#define _CRT_SECURE_NO_WperRNINGS
//#include<bits/stdc++.h>
//using namespace std;
//
//typedef long long int ll;
//typedef double dou;
//
//struct per
//{
//	int per_time, num;
//};
//bool cmp(per x, per y)
//{
//	return x.per_time < y.per_time;
//}
//int main()
//{
//	struct per per[1010] = {};
//	int n, i, j;
//	double time = 0;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> per[i].per_time;
//		per[i].num = i;
//	}
//	sort(per + 1, per + n + 1, cmp);
//	for (i = 1; i <= n; i++)
//	{
//		cout << per[i].num << " ";
//	}
//	cout << endl;
//	for (j = n - 1; j >= 1; j--)
//	{
//		i = n - j;
//		time += per[i].per_time * j;
//	}
//	printf("%.2lf", time / n);
//	return 0;
//}