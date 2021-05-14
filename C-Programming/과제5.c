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
	printf("�Ʒ� �޴����� ��ȣ�� ������.\n");
	printf("1: �ܰ� ���� ���� ���� ã��.\n");
	printf("2: �ܰ� ���� ���� ���� ã��.\n");
	printf("3: �ܰ���� ��� ���ϱ�.\n");
	printf("4: �ܰ� �˾ƺ���.\n");
	printf("5: ��� ������ ��������.\n");
	printf("6: ���ο� ���¿���.\n");
	printf("7: ���´ݱ�.\n");
	printf("8: �Ա��ϱ�.\n");
	printf("9: ����ϱ�.\n");
	printf("0: �����ϱ�.\n");
	printf("-100: ���α׷� ������. \n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("�޴��� �����ϼ��� : ");
	scanf_s("%d", &selection);

	switch (selection) {
	case 1:
		if (full != 0)   Maxbal();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 2:
		if (full != 0)   Minbal();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 3:
		if (full != 0)   Averagebal();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 4:
		if (full != 0)   Printbal();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 5:
		if (full != 0)   PrintAll();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 6:
		if (full >= 19)
			printf("��� ���°� ���ֽ��ϴ�. ���»����� �ѵ� �������ּ���.");
		else {
			full++;
			MakeAccount();
		}
		break;
	case 7:
		if (full != 0)   CloseAccount();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 8:
		if (full != 0)   Remain();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 9:
		if (full != 0)   Getout();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case 0:
		if (full != 0)   Sort();
		else printf("���� ���°� �����ϴ�.���¸� ������ּ���.\n");
		break;
	case -100:
		printf("���α׷��� �����մϴ�. �����մϴ�.\n");
		break;
	default:
		printf("�޴��� �����ϴ�. ��ȣ�� �ٽ� �Է����ּ���.\n");
		break;
	}

	return selection;
}
void OpenAccount() {
	int i, j, type, bal;
	int exist = 0;
	for (i = 0; i < 20; i++) {
		printf("%d ��° ���¸� �����մϴ�.\n���� ������ �Է��ϼ���.( 1:���뿹�� ����, 2:���⿹�� ���� ) : ", i + 1);
		scanf_s("%d", &type);
		while (type < 1 || type>2) {
			printf("���������� �ٽ� �Է��ϼ���.( 1:���뿹�� ����, 2:���⿹�� ���� ) : ");
			scanf_s("%d", &type);
		}
		printf("�Աݾ��� �Է��ϼ��� : ");
		scanf_s("%d", &bal);
		while (bal <= 0) {
			printf("1�� �̻��� �Աݾ��� �ٽ� �Է��ϼ��� : ");
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
			printf("�ش� ���°� �̹� �����մϴ�.\n\n");
			i--;
			full--;
		}
		printf("���¹�ȣ:%d �ܾ�:%d �� ���°� �����Ǿ����ϴ�.\n\n", accountID[i], balance[i]);
	}
}

void CloseAccount() {
	int account, i;
	int exist = 0;
	printf("���� ������ ���¹�ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &account);
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("�ش� ���°� �����ϴ�.\n\n");
	else {
		balance[i] = balance[full];
		accountID[i] = accountID[full];
		full--;
		balance[full] = 0;
		accountID[full] = 0;
	}
	printf("���¸� ���������� �ݾҽ��ϴ�.\n\n");
	
}

void MakeAccount() {
	int i, j, type, bal, exist;
	printf("%d��° ���¸� �����մϴ�. ���� ������ �Է��ϼ���.( 1:���뿹�� ����, 2:���⿹�� ���� ) : ", full);
	scanf_s("%d", &type);
	while (type < 1 || type>2) {
		printf("���� ������ �ٽ� �Է��ϼ���.( 1: ���뿹�� ����, 2: ���⿹�� ���� ) : ");
		scanf_s("%d", &type);
	}
	printf("�Աݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &bal);
	while (bal <=0) {
	printf("1�� �̻��� �Աݾ��� �ٽ� �Է��ϼ���:");
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
		printf("�ش� ���°� �̹� �����մϴ�.\n\n");
	}
	printf("%d��° ����: ���¹�ȣ:%d, �ܾ�:%d�� ���°� �����Ǿ����ϴ�.\n\n",full+1,accountID[full],balance[full]);
}
void Remain() {
	int plus_balance = 0;
	int account = 0;
	int i;
	int exist = 0;
	printf("���� ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &account);
	printf("�Աݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &plus_balance);
	while(plus_balance <= 0) {
		printf("1�� �̻��� �Աݾ��� �ٽ� �Է��ϼ���: ");
		scanf_s("%d", &plus_balance);
	}
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("�ش� ���°� �����ϴ�.\n\n");
	else {
		balance[i] += plus_balance;
		printf("%d���� �ԱݵǾ����ϴ�.\n\n",plus_balance);
	}
}
void Getout() {
	int minus_balance = 0;
	int account = 0;
	int i, temp=0;
	int exist = 0;
	printf("���� ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &account);
	printf("��ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &minus_balance);
	while (minus_balance <= 0) {
		printf("1�� �̻��� ��ݾ��� �ٽ� �Է��ϼ���:");
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
		printf("�ش� ���°� �����ϴ�.\n\n");
	else if (minus_balance < balance[temp]) {
		printf("���Ͻô� ��ݾ� %d�� �ܾ׺��� �����ϴ�.\n", minus_balance);
		while (minus_balance > balance[temp]) {
			printf("1�� �̻��� ��ݾ��� �ٽ� �Է��ϼ���: ");
			scanf_s("%d", &minus_balance);
		}
		balance[temp] -= minus_balance;
		printf("%d���� ��ݵǾ����ϴ�.\n\n",minus_balance);
	}
	else {
		balance[temp] -= minus_balance;
		printf("%d���� ��ݵǾ����ϴ�.\n\n",minus_balance);
	}

	
}
void Sort() {
	int j, time = 1, copy;
	int temp1, temp2;
	int temp_account[20];
	int temp_bal[20];
	int select;
	printf("���� ����� ������ : (�������� : 1, �������� : 2) : ");
	scanf_s("%d", &select);
	while (select < 1 || select>2) {
		printf("���Ĺ���� �ٽð����� (1: ��������, 2: ��������) : ");
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
		printf("������������ ������ �������ϴ�.\n ��籸���� �������� �޴��� ���� Ȯ�����ּ���.\n\n");
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
		printf("������������ ������ �������ϴ�.\n ��籸���� �������� �޴��� ���� Ȯ�����ּ���.\n\n");
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
	printf("�ܰ� ���� ���� ���´� %d ��, �ܰ�� %d�Դϴ�.\n\n", accountID[p], max);
}
void Minbal() {
	int i, min = balance[0], p = 0;
	for (i = 1; i < 20; i++) {
		if (balance[i] < min) {
			min = balance[i];
			p = i;
		}
	}
	printf("�ܰ� ���� ���� ���´� %d ��, �ܰ�� %d�Դϴ�.\n\n", accountID[p], min);
}
void Averagebal() {
	int i, sum = 0;
	for (i = 0; i < 20; i++) {
		sum += balance[i];
	}
	printf("�ܰ���� ����� %f�Դϴ�.\n\n", (double)(sum / full+1));
}
void Printbal() {
	int account = 0, i = 0;
	int exist = 0;
	printf("ã����� ������ ��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &account);
	for (i = 0; i < 20; i++) {
		if (accountID[i] == account) {
			printf("�ش� ���¹�ȣ %d�� �ܰ�� %d�Դϴ�.\n\n",accountID[i], balance[i]);
			exist = 1;
			break;
		}
	}
	if (exist == 0) printf("�ش� ���°� �����ϴ�.\n\n");
}
void PrintAll() {
	int i;
	printf("���³���\n");
	printf("-------------------------------------------\n");
	for (i = 0; i < 20; i++) {
		if (accountID[i] != 0) {
			printf("���� : %d ", accountID[i]);
			printf("�ܰ� : %d\n", balance[i]);
		}
	}
	printf("-------------------------------------------\n\n");
}