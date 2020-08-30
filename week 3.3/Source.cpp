#include<stdio.h>
int main()
{
	int sum = 0, i, n, x[10000];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
		sum = sum + x[i];
	}
	printf("%d", sum / n);
	return 0;
}