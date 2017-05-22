/***********************************
**     볼링 점수 계산 프로그램       **
**      작성자 : 윤태석             **
**      작성일 : 2017년 5월 22일    ** 
***********************************/

#include<stdio.h>
int main() {
	int grade[10];
	int i, j, sum, tmp;
	float average;
	//성적 입력
	for (i = 0; i < 10; i++) {
		printf("%d번째 성력을 입력하세요 :", );
		scanf("%d", &grade[i]);
	}
	//평균계산
	for (i = sum = 0; i < 10; i++)
		sum += grade[i];
	average = sum / 10.0;
	printf("성적평균 :%f\n", average);
	//성적 정렬:병렬 정렬
	for(i=0;i<9;i++)
		for(j=9;j>i;j--)
			if (grade[j - 1] > grade[j]) {
				tmp = grade[j - 1];
				grade[j - 1] = grade[j];
				grade[j] = tmp;
			}
	//성적순으로 출력
	printf("성적순 : ");
	for (i = 0; i < 10; i++)
		printf("%d", grade[i]);
	printf("\n");
	return 0;
}
