#include<stdio.h>

int main(void)
{
	int n1, n2, n3, max, min;
	printf("����3���� �Է��Ͻÿ�:\n");
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
	printf("�Է��Ͻż����� ����ū���� %d�̰�, ������������ %d�Դϴ�.", max, min);
	return 0;
}
