#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int p1, p2, p3;
string s;
vector<char>ans(500);

int isi(char c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	else return 0;
}
int ichr(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return -1;
	}
	else return 0;
}
void unfold(int a)
{
	if (a == 0)return;
	int cnt=0;
	char b=ans[a-1], e=ans[a+1];
	if (b < e)
	{
		if (p3 == 1)
		{
			if (p1 == 1)
			{
				if ((ichr(b) == 1 && ichr(e) == 1) || isi(b) == 1 && isi(e) == 1)
				{
					ans.erase(ans.begin() + a);
					for (char i = b + 1; i < e; i++)
					{
						ans.insert(ans.begin() + a + p2 * (i - b - 1), p2, i);
					}
				}
			}
			else if (p1 == 2)
			{
				if (ichr(b)==1&&ichr(e)==1)
				{
					ans.erase(ans.begin() + a);
					for (char i = b + 1-32; i < e-32; i++)
					{
						ans.insert(ans.begin() + a + p2 * (i - b - 1+32), p2, i);
					}
				}
				else if(isi(b)==1&&isi(e)==1)
				{
					ans.erase(ans.begin() + a);
					for (char i = b + 1; i < e; i++)
					{
						ans.insert(ans.begin() + a + p2 * (i - b - 1), p2, i);
					}
				}
			}
			else
			{
				if ((ichr(b) == 1 && ichr(e) == 1)||isi(b)==1&&isi(e)==1)
				{
					ans.erase(ans.begin() + a);
					cnt = e - b - 1;
					for (int i = 0; i < cnt; i++)
					{
						ans.insert(ans.begin() + a, p2, '*');
					}
				}
			}
		}
		else if (p3 == 2)
		{
			if (p1 == 1)
			{
				if ((ichr(b) == 1 && ichr(e) == 1) || isi(b) == 1 && isi(e) == 1)
				{
					ans.erase(ans.begin() + a);
					for (char i = e - 1; i > b; i--)
					{
						ans.insert(ans.begin() + a + p2 * (e - 1 - i), p2, i);
					}
				}
			}
			else if (p1 == 2)
			{
				if (ichr(b)==1&&ichr(e)==1)
				{
					ans.erase(ans.begin() + a);
					for (char i = e - 1-32; i > b-32; i--)
					{
						ans.insert(ans.begin() + a + p2 * (e - 1-32-i), p2, i);
					}
				}
				else if(isi(b)==1&&isi(e)==1)
				{
					ans.erase(ans.begin() + a);
					for (char i = e - 1; i > b; i--)
					{
						ans.insert(ans.begin() + a + p2 * (e - 1-i), p2, i);
					}
				}
			}
			else
			{
				if ((ichr(b) == 1 && ichr(e) == 1) || isi(b) == 1 && isi(e) == 1)
				{
					ans.erase(ans.begin() + a);
					cnt = e - b - 1;
					for (int i = 0; i < cnt; i++)
					{
						ans.insert(ans.begin() + a, p2, '*');
					}
				}
			}
		}
		return;
	}
	else if(ans[a-1]>=ans[a+1])
	{
		return;
	}
}

int main()
{
	
	scanf("%d %d %d", &p1, &p2, &p3);
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		ans[i] = s[i];
	}
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i] == '-')
		{
			unfold(i);
		}
	}
	for (auto i = ans.begin(); i != ans.end(); i++)
	{
		printf("%c", *i);
	}
}