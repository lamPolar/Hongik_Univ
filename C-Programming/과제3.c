#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int accountID[20];
	int balance[20];

	int selection, sum, i, k,p;
	int accountid, money;
	int max, min;
	max = 0, min = 0;
	selection = 1;
	sum = 0;
	i = 0; k = 5; p = 0;
	accountid = 0; money = 0;

	for (i = 0; i < 20; i++){
		accountID[i] = rand()%200000 + 100000;
		balance[i] = accountID[i];
		}

	while (k<8) {
		printf(" ���¸� �����ϼ���.\n ���¹�ȣ ������ �������� �˷��帳�ϴ�.\n���¹�ȣ�� ��� 6�ڸ� �����̸�, �� ���ڸ� ���ڰ� 1�̸� ���뿹�ݱ����̰�, 2�̸� ���⿹�� �����Դϴ�. \n���Ͻô� ���¹�ȣ�� �Է��ϼ���: ");
		scanf_s("%d", &accountid);
		while (i < 20)
		{
			if (accountid != accountID[i])
				i++;
			else{
				printf("�Է��Ͻ� ���¹�ȣ�� ���� ������ �����մϴ�.\n �ٸ���ȣ�� �Է����ּ���: ");
				scanf_s("%d", &accountid);
				i = 0;
			}
		}
		accountID[k] = accountid;
		printf("�Է��Ͻ� ���¹�ȣ�� ���¸� �����߽��ϴ�. �Ա��Ͻ� �ݾ��� �Է����ּ���: ");
		scanf_s("%d", &money);
		balance[k] = money;
		printf("���� �����Ϸ�\n���¹�ȣ:%d, �ܰ�:%d\n", accountID[k], balance[k]);
		k++;
		i = 0;
	}
	while (selection < 6 && selection >0)
	{
		printf("�Ʒ� �־��� �޴����� ���ÿ�.\n");
		printf("1: �ܰ� ���� ���� ���� ã��.\n");
		printf("2: �ܰ� ���� ���� ���� ã��.\n");
		printf("3: �ܰ���� ��� ���ϱ�.\n");
		printf("4: �ܰ� �˾ƺ���.\n");
		printf("5: ��� ������ ������ ���̱�.\n");
		printf("6: ���α׷� ������. \n");

		scanf_s("%d", &selection);

		switch (selection) {
		case 1:
			printf("1: �ܰ� ���� ���� ���� ã��\n");
			i = 0; p = 0;
			max = balance[0];
			while (i < 20) {
				if (balance[i] > max) {
					max = balance[i];
					p=i;
					i++;
				}
				else
				i++;
			}
			printf("�ܰ� ���� ���� ���´� %d ��, �ܰ�� %d�Դϴ�.\n", accountID[p], max);
			break;
		case 2:
			printf("2: �ܰ� ���� ���� ���� ã��\n");
			i = 0;
			p = 0;
			min = balance[0];
			while (i < 20) {
				if (balance[i] < min) {
					min = balance[i];
					p = i;
					i++;
				}
				else
				i++;
			}
			printf("�ܰ� ���� ���� ���´� %d ��, �ܰ�� %d�Դϴ�.\n", accountID[p], min);
			break;
		case 3:
			i = 0;
			while (i < 20)
			{
				sum += balance[i];
				i++;
			}
			printf("�ܰ���� ����� %f�̴�.", sum /20.0);
			break;
		case 4:
			printf(" ã����� ������ ��ȣ�� �Է��Ͻÿ�\n");
			scanf_s("%d", &accountid);
			i = 0;
			while (i < 20)
			{
				if (accountid != accountID[i])
					i++;
				else
				{
					printf("ã���ô� ������ �ܰ�� %d �Դϴ�.\n", balance[i]);
					i = 21;
				}
			}
			if (i == 20)
				printf("ã���ô� ���°� �����ϴ�.\n");
			break;
		case 5:
			printf("��� ������ ����\n");
			printf("���¹�ȣ                            �ܰ�\n");
			i = 0;
			for (i = 0; i<20; i++)
				printf("%d                           %d\n", accountID[i], balance[i]);
			break;
		case 6:
			return 0;
			break;
		default:
			printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.\n");
			break;
		}

	}


	return 0;






}