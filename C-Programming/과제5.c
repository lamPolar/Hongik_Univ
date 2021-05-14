#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void init();
int selectMenu();
int accountID[20];
int balance[20];
int full;
void OpenAccount();
void CloseAccount();
void MakeAccount();
void Remain();
void Getout();
void Sort();
void Maxbal();
void Minbal();
void Averagebal();
void Printbal();
void PrintAll();
void main() {
	int selection = 0;
	srand((unsigned)time(NULL));
	OpenAccount();
	while (selection != -100)
	{
		selection = selectMenu();
	}
}
void init() {
	int accountID[20] = { 0 };
	int balance[20] = {0};
	int full = 0;
}
int selectMenu() {
	int selection = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("아래 메뉴에서 번호를 고르세요.\n");
	printf("1: 잔고가 제일 많은 구좌 찾기.\n");
	printf("2: 잔고가 제일 적은 구좌 찾기.\n");
	printf("3: 잔고들의 평균 구하기.\n");
	printf("4: 잔고 알아보기.\n");
	printf("5: 모든 구좌의 정보보기.\n");
	printf("6: 새로운 구좌열기.\n");
	printf("7: 구좌닫기.\n");
	printf("8: 입금하기.\n");
	printf("9: 출금하기.\n");
	printf("0: 정렬하기.\n");
	printf("-100: 프로그램 끝내기. \n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("메뉴를 선택하세요 : ");
	scanf_s("%d", &selection);

	switch (selection) {
	case 1:
		if (full != 0)   Maxbal();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 2:
		if (full != 0)   Minbal();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 3:
		if (full != 0)   Averagebal();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 4:
		if (full != 0)   Printbal();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 5:
		if (full != 0)   PrintAll();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 6:
		if (full >= 19)
			printf("모든 구좌가 차있습니다. 구좌삭제를 한뒤 진행해주세요.");
		else {
			full++;
			MakeAccount();
		}
		break;
	case 7:
		if (full != 0)   CloseAccount();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 8:
		if (full != 0)   Remain();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 9:
		if (full != 0)   Getout();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case 0:
		if (full != 0)   Sort();
		else printf("아직 구좌가 없습니다.구좌를 만들어주세요.\n");
		break;
	case -100:
		printf("프로그램을 종료합니다. 감사합니다.\n");
		break;
	default:
		printf("메뉴가 없습니다. 번호를 다시 입력해주세요.\n");
		break;
	}

	return selection;
}
void OpenAccount() {
	int i, j, type, bal;
	int exist = 0;
	for (i = 0; i < 20; i++) {
		printf("%d 번째 구좌를 생성합니다.\n구좌 종류를 입력하세요.( 1:보통예금 구좌, 2:정기예금 구좌 ) : ", i + 1);
		scanf_s("%d", &type);
		while (type < 1 || type>2) {
			printf("구좌종류를 다시 입력하세요.( 1:보통예금 구좌, 2:정기예금 구좌 ) : ");
			scanf_s("%d", &type);
		}
		printf("입금액을 입력하세요 : ");
		scanf_s("%d", &bal);
		while (bal <= 0) {
			printf("1원 이상의 입금액을 다시 입력하세요 : ");
			scanf_s("%d", &bal);
		}
		accountID[i] = (rand() % 100000) + 100000;
		if (type == 2) accountID[i] += 100000;
		balance[i] = bal;
		full++;
		for (j = 0; j < i; j++) {
			if (accountID[j] == accountID[i]) {
				exist = 1;
				break;
			}
		}
		if (i!=0&& exist == 1) {
			printf("해당 계좌가 이미 존재합니다.\n\n");
			i--;
			full--;
		}
		printf("구좌번호:%d 잔액:%d 인 구좌가 생성되었습니다.\n\n", accountID[i], balance[i]);
	}
}

void CloseAccount() {
	int account, i;
	int exist = 0;
	printf("닫을 구좌의 구좌번호를 입력하세요 : ");
	scanf_s("%d", &account);
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("해당 구좌가 없습니다.\n\n");
	else {
		balance[i] = balance[full];
		accountID[i] = accountID[full];
		full--;
		balance[full] = 0;
		accountID[full] = 0;
	}
	printf("구좌를 성공적으로 닫았습니다.\n\n");
	
}

void MakeAccount() {
	int i, j, type, bal, exist;
	printf("%d번째 구좌를 생성합니다. 구좌 종류를 입력하세요.( 1:보통예금 구좌, 2:정기예금 구좌 ) : ", full);
	scanf_s("%d", &type);
	while (type < 1 || type>2) {
		printf("구좌 종류를 다시 입력하세요.( 1: 보통예금 구좌, 2: 정기예금 구좌 ) : ");
		scanf_s("%d", &type);
	}
	printf("입금액을 입력하세요 : ");
	scanf_s("%d", &bal);
	while (bal <=0) {
	printf("1원 이상의 입금액을 다시 입력하세요:");
	scanf_s("%d", &bal);
	}
	i = full;
	accountID[i] = (rand() % 100000) + 100000;
	if (type == 2) accountID[i] += 100000;
	balance[i] = bal;
	for (j = 0; j < i; j++) {
		if (accountID[j] == accountID[i]) {
			exist = 1;
			break;
		}
	}
	if (i != 0 || exist == 1) {
		printf("해당 계좌가 이미 존재합니다.\n\n");
	}
	printf("%d번째 구좌: 구좌번호:%d, 잔액:%d인 구좌가 생성되었습니다.\n\n",full+1,accountID[full],balance[full]);
}
void Remain() {
	int plus_balance = 0;
	int account = 0;
	int i;
	int exist = 0;
	printf("구좌 번호를 입력하세요 : ");
	scanf_s("%d", &account);
	printf("입금액을 입력하세요 : ");
	scanf_s("%d", &plus_balance);
	while(plus_balance <= 0) {
		printf("1원 이상의 입금액을 다시 입력하세요: ");
		scanf_s("%d", &plus_balance);
	}
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("해당 구좌가 없습니다.\n\n");
	else {
		balance[i] += plus_balance;
		printf("%d원이 입금되었습니다.\n\n",plus_balance);
	}
}
void Getout() {
	int minus_balance = 0;
	int account = 0;
	int i, temp=0;
	int exist = 0;
	printf("구좌 번호를 입력하세요 : ");
	scanf_s("%d", &account);
	printf("출금액을 입력하세요 : ");
	scanf_s("%d", &minus_balance);
	while (minus_balance <= 0) {
		printf("1원 이상의 출금액을 다시 입력하세요:");
		scanf_s("%d", &minus_balance);
	}
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			exist = 1;
			temp = i;
			break;
		}
	}
	if (exist == 0) 
		printf("해당 구좌가 없습니다.\n\n");
	else if (minus_balance < balance[temp]) {
		printf("원하시는 출금액 %d가 잔액보다 많습니다.\n", minus_balance);
		while (minus_balance > balance[temp]) {
			printf("1원 이상의 출금액을 다시 입력하세요: ");
			scanf_s("%d", &minus_balance);
		}
		balance[temp] -= minus_balance;
		printf("%d원이 출금되었습니다.\n\n",minus_balance);
	}
	else {
		balance[temp] -= minus_balance;
		printf("%d원이 출금되었습니다.\n\n",minus_balance);
	}

	
}
void Sort() {
	int j, time = 1, copy;
	int temp1, temp2;
	int temp_account[20];
	int temp_bal[20];
	int select;
	printf("정렬 방식을 고르세요 : (오름차순 : 1, 내림차순 : 2) : ");
	scanf_s("%d", &select);
	while (select < 1 || select>2) {
		printf("정렬방식을 다시고르세요 (1: 오름차순, 2: 내림차순) : ");
		scanf_s("%d", &select);
	}
	for (copy = 0; copy < full+1; copy++) {
		temp_account[copy] = accountID[copy];
		temp_bal[copy] = balance[copy];
	}
	if (select == 1) {
		while (time>0) {
			time = 0;
			for (j = 0; j < full; j++) {
				if (temp_bal[j] > temp_bal[j + 1]) {
					time++;
					temp1 = temp_account[j];
					temp2 = temp_bal[j];
					temp_account[j] = temp_account[j + 1];
					temp_bal[j] = temp_bal[j + 1];
					temp_account[j + 1] = temp1;
					temp_bal[j + 1] = temp2;

				}
			}
		}
		printf("오름차순으로 정리가 끝났습니다.\n 모든구좌의 정보보기 메뉴를 통해 확인해주세요.\n\n");
	}

	else if (select == 2) {
		while (time>0) {
			time = 0;
			for (j = 0; j < 19; j++) {
				if (balance[j] < balance[j + 1]) {
					time++;
					temp1 = temp_account[j];
					temp2 = temp_bal[j];
					temp_account[j] = temp_account[j + 1];
					temp_bal[j] = temp_bal[j + 1];
					temp_account[j + 1] = temp1;
					temp_bal[j + 1] = temp2;
				}
			}
		}
		printf("내림차순으로 정리가 끝났습니다.\n 모든구좌의 정보보기 메뉴를 통해 확인해주세요.\n\n");
	}
}
void Maxbal() {
	int i, max = balance[0], p = 0;
	for (i = 1; i < 20; i++) {
		if (balance[i] > max){
			max = balance[i];
			p = i;
		}
	}
	printf("잔고가 제일 많은 구좌는 %d 로, 잔고는 %d입니다.\n\n", accountID[p], max);
}
void Minbal() {
	int i, min = balance[0], p = 0;
	for (i = 1; i < 20; i++) {
		if (balance[i] < min) {
			min = balance[i];
			p = i;
		}
	}
	printf("잔고가 제일 적은 구좌는 %d 로, 잔고는 %d입니다.\n\n", accountID[p], min);
}
void Averagebal() {
	int i, sum = 0;
	for (i = 0; i < 20; i++) {
		sum += balance[i];
	}
	printf("잔고들의 평균은 %f입니다.\n\n", (double)(sum / full+1));
}
void Printbal() {
	int account = 0, i = 0;
	int exist = 0;
	printf("찾고싶은 구좌의 번호를 입력하세요:");
	scanf_s("%d", &account);
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			printf("해당 구좌번호 %d의 잔고는 %d입니다.\n\n",accountID[i], balance[i]);
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("해당 구좌가 없습니다.\n\n");
}
void PrintAll() {
	int i;
	printf("구좌내역\n");
	printf("-------------------------------------------\n");
	for (i = 0; i < 20; i++) {
		if (accountID[i] != 0) {
			printf("구좌 : %d ", accountID[i]);
			printf("잔고 : %d\n", balance[i]);
		}
	}
	printf("-------------------------------------------\n\n");
}