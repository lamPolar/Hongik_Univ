#include <stdio.h>
///if 와 else를 이용, min과 max를 한곳에서 함께 할당

int main(void){
	int n1,n2,n3;
	int min, max;
	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d",&n1,&n2, &n3);
	if (n1<n2){
		if (n2<n3){
			min = n1;
			max = n3;
		}
		else if (n1<n3){
			min = n1;
			max = n2;
		}
		else{
			min = n3;
			max = n2;
		}
	}
	else {
		if (n1<n3){
			min = n2;
			max = n3;
		}
		else if(n2<n3){
			min = n2;
			max = n1;
		}
		else{
			min = n3;
			max = n1;
		}
	}
	printf("가장 작은값 : %d \n가장 큰 값: %d\n",min,max);
}
