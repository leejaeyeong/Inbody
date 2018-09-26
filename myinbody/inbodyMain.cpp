#include <stdio.h>
#include "inbodyClass.h"
int main() {

	Myinbody object;

	int x = 0, y = 0;
	int selectMenu = object.choiceMenu();

	if (selectMenu == 1) {
		printf("x값 입력 :");
		scanf_s("%d", &x);
		printf("y값 입력 :");
		scanf_s("%d", &y);
		system("cls");
		object.choiceMenu();

	}
	else if (selectMenu == 2) {
		object.drawGraph(x, y);
	}

	object.drawGraph(x, y);
	// 그래프 한 눈에 보기 







}