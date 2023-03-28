#include<iostream>
#include<string>
using namespace std;

string s1, s2;
int n1[10000], n2[10000];
int ans[10001];

int main()
{
    cin >> s1;
    cin >> s2;
    int l = s1.length() + s2.length() + 1;
    for (int i = 0; i < s1.length(); i++)
    {
        n1[i] = s1[s1.length() - i - 1] - '0';
    }
    for (int i = 0; i < s2.length(); i++)
    {
        n2[i] = s2[s2.length() - i - 1] - '0';
    }
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            int k = i + j;
            ans[k] += n1[i] * n2[j];
            if (ans[k] > 9)
            {
                ans[k + 1] += ans[k] / 10;
                ans[k] %= 10;
            }
        }
    }
    while (ans[l] > 0)l++;
    while (ans[l] == 0 && l > 0)l--;
    for (int i = l; i >= 0; i--)
    {
        printf("%d", ans[i]);
    }
    return 0;
}