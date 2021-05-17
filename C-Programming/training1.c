//solving again
#include<stdio.h>

int main(void){
  int n;
  int *list;
  float avg1,avg2;
  printf("정수 6개를 입력하세요: ");
  for(int i=0;i<6;i++){
    scanf("%d",&n);
    list[i] = n;}
  //홀수번째 입력값
  avg1 = (list[0]+list[2]+list[4])/3;
  //짝수번째 입력값
  avg2 = (list[1]+list[3]+list[5])/3;
  printf("홀수번째 입력값들의 평균 : %f \n\
짝수번째 입력값들의 평균 : %f \n",avg1,avg2);
}
