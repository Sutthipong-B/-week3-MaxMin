#include<stdio.h>
int main()
{
	int num, i, max, min, n = 0, p;
	int inp[1000] = {};
	printf("How many numbers: ");
	scanf_s("%d", &num);
	for (n = 0; n < num; n++)
	{
		printf("Number %d : ", n + 1);
		scanf_s("%d", &inp[n]);
	}
	max = inp[0];
	min = inp[0];
	for (i = 0; i < num; i++)
	{
		if (max < inp[i])
		{
			max = inp[i];
		}
	}
	for (p = 0; p < num; p++)
	{
		if (min > inp[p])
		{
			min = inp[p];
			printf("%d", min);
		}
	}
	printf("MAX : %d\n",max);
	printf("MIN : %d",min);
	return 0;
}