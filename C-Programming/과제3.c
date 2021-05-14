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
		printf(" 계좌를 생성하세요.\n 계좌번호 생성시 주의점을 알려드립니다.\n계좌번호는 모두 6자리 숫자이며, 맨 앞자리 숫자가 1이면 보통예금구좌이고, 2이면 정기예금 구좌입니다. \n원하시는 계좌번호를 입력하세요: ");
		scanf_s("%d", &accountid);
		while (i < 20)
		{
			if (accountid != accountID[i])
				i++;
			else{
				printf("입력하신 계좌번호를 쓰는 고객님이 존재합니다.\n 다른번호를 입력해주세요: ");
				scanf_s("%d", &accountid);
				i = 0;
			}
		}
		accountID[k] = accountid;
		printf("입력하신 계좌번호로 계좌를 생성했습니다. 입금하실 금액을 입력해주세요: ");
		scanf_s("%d", &money);
		balance[k] = money;
		printf("계좌 생성완료\n계좌번호:%d, 잔고:%d\n", accountID[k], balance[k]);
		k++;
		i = 0;
	}
	while (selection < 6 && selection >0)
	{
		printf("아래 주어진 메뉴에서 고르시요.\n");
		printf("1: 잔고가 제일 많은 구좌 찾기.\n");
		printf("2: 잔고가 제일 적은 구좌 찾기.\n");
		printf("3: 잔고들의 평균 구하기.\n");
		printf("4: 잔고 알아보기.\n");
		printf("5: 모든 구좌의 정보를 보이기.\n");
		printf("6: 프로그램 끝내기. \n");

		scanf_s("%d", &selection);

		switch (selection) {
		case 1:
			printf("1: 잔고가 제일 많은 구좌 찾기\n");
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
			printf("잔고가 제일 많은 구좌는 %d 로, 잔고는 %d입니다.\n", accountID[p], max);
			break;
		case 2:
			printf("2: 잔고가 제일 적은 구좌 찾기\n");
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
			printf("잔고가 제일 적은 구좌는 %d 로, 잔고는 %d입니다.\n", accountID[p], min);
			break;
		case 3:
			i = 0;
			while (i < 20)
			{
				sum += balance[i];
				i++;
			}
			printf("잔고들의 평균은 %f이다.", sum /20.0);
			break;
		case 4:
			printf(" 찾고싶은 계좌의 번호를 입력하시오\n");
			scanf_s("%d", &accountid);
			i = 0;
			while (i < 20)
			{
				if (accountid != accountID[i])
					i++;
				else
				{
					printf("찾으시는 계좌의 잔고는 %d 입니다.\n", balance[i]);
					i = 21;
				}
			}
			if (i == 20)
				printf("찾으시는 계좌가 없습니다.\n");
			break;
		case 5:
			printf("모든 구좌의 정보\n");
			printf("계좌번호                            잔고\n");
			i = 0;
			for (i = 0; i<20; i++)
				printf("%d                           %d\n", accountID[i], balance[i]);
			break;
		case 6:
			return 0;
			break;
		default:
			printf("잘못된 숫자를 입력하셨습니다.\n");
			break;
		}

	}


	return 0;






}