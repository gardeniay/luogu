#include<stdio.h>
#include<malloc.h>
struct student
{
	char name[10];
	int Chinese;
	int Math;
	int English;
};
int main()
{
	int n;
	struct student* x;
	scanf_s("%d", &n);
	x = (struct student*)malloc(n * sizeof(struct student));
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s %d %d %d",&x[i].name,)
	}
}