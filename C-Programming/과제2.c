#include<stdio.h>

int main(void)
{
	int n1, n2, n3, max, min;
	printf("정수3개를 입력하시오:\n");
	scanf("%d %d %d\n", &n1, &n2, &n3);
	if (n1 >= n2&&n1 >= n3)
		max = n1;
	else
	{
		if (n2 <= n3)
			min = n2;
		else
			min = n3;
	}
	if (n2 >= n1&&n2 >= n3)
		max = n2;
	else
	{
		if (n1 <= n3)
			min = n1;
		else
			min = n3;
	}
	if (n3 >= n1&&n3 >= n2)
		max = n3;
	else
	{
		if (n1 <= n2)
			min = n1;
		else
			min = n2;
	}
	printf("입력하신세수중 가장큰수는 %d이고, 가장작은수는 %d입니다.", max, min);
	return 0;
}
