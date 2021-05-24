# 3번 Bank Database 만들기

은행의 운영에 필요한 작은 데이터베이스를 다음과 같이 만든다.   

1.	계좌번호 (accountID)를 저장하는 `accountID[20]` 과 잔고를 나타내는 `balance[20]` 을 각각 int type 배열로 생성한다.       
 > accountID값 생성시 `rand( )`를 사용한다.    
  *** 주의사항 : `#include <stdlib.h>` 를 포함시켜야 함.**

2.	계좌번호는 6자리 숫자로, 맨 앞자리 숫자는 1이나 2이다.     
> 1은 보통예금계좌를, 2는 정기예금계좌를 의미한다.     
 *** 주의사항 : accountID값 생성시 같은 값이 이미 존재하는지 체크해야함.**      

3.	할당을 이용하여 처음 5개의 계좌와 잔고를 아래와 같이 채운다.     
    > ex ) `accountID[0] = 112036;`  `balance[0] = 300000;`       

  >**balance는 동일한 index를 가진 account의 잔고이다.**       
  위의 예에서, `accountID[0]`의 계좌번호 `112036` 의 잔고는 `300000`이므로 `112036`이 `accountID[5]`로 이동하면 그 잔고인 `300000`도 `balance[5]`로 이동된다.     

4.	`scanf()`를 이용하여 계좌와 잔고를 3개씩 더 생성한다.    
(`accountID[5]` - `account[7]`)      

5.	다음과 같은 기능을 추가한다.    

  1)	잔고가 제일 많은 계좌를 찾는 기능.      
  2)	잔고가 제일 적은 계좌를 찾는 기능.     
  3)	잔고의 평균을 구하는 기능.     
  4)	accountID값을 입력 받아 그 계좌의 잔고를 출력하는 기능.     
     > ex ) `112036`이 입력되면 계좌잔고인 `300000`을 출력한다.   
      만약 입력된 accountID 값이 존재하지 않으면 해당하는 account가 없다고 출력한다.    

  5)	모든 계좌를 보이는 기능     
  6)	프로그램을 끝내는 기능      