// Sum_of_even_number_odd_number.c.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
	int Sum1 = 0;
	int Sum2 = 0;
	int EvenNum1=0;  //짝수
	int OddNum1 = 1; //홀수
	for (EvenNum1; EvenNum1<=10; EvenNum1) 
	{
		Sum1 = Sum1 + EvenNum1;
		EvenNum1 = EvenNum1 + 2;
	}

	for (OddNum1; OddNum1 <= 10; OddNum1) 
	{
		Sum2 = Sum2 + OddNum1;
		OddNum1 = OddNum1 + 2;
	}

	printf("for문을 이용한 1에서 10까지의 정수중 짝수의 합: %d \n", Sum1);
	printf("for문을 이용한 1에서 10까지의 정수중 홀수의 합: %d \n" , Sum2);

	int EvenNum2 = 0;
	int OddNum2 = 1;
	int Sum3 = 0;
	int Sum4 = 0;
	while (EvenNum2 <= 10) 
	{
		Sum3 = Sum3 + EvenNum2;
		EvenNum2 = EvenNum2 + 2;
	}

	while (OddNum2 <= 10) 
	{
		Sum4 = Sum4 + OddNum2;
		OddNum2 = OddNum2 + 2;
	}
 
	printf("while문을 이용한 1에서 10까지의 정수중 짝수의 합: %d \n", Sum3);
	printf("while문을 이용한 1에서 10까지의 정수중 홀수의 합: %d \n", Sum4);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
