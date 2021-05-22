///함수 호출을 이용

#include <stdio.h>
int max(int,int,int);
int min(int,int,int);


int main(void)
{
	int n1,n2,n3;
	printf("type 3 integers (separated by space)");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("minimum number : %d\nmaximum number: %d\n",min(n1,n2,n3),max(n1,n2,n3));
}

int min(int a,int b,int c){
	if (a<b && a<c){return a;}
	if (b<a && b<c){return b;}
	return c;
}
int max(int a,int b,int c){
	if (a>b && a>c){return a;}
	if (b>a && b>c){return b;}
	return c;
}
