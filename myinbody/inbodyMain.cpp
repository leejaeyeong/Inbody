#include <stdio.h>
#include "inbodyClass.h"
int main() {

	Myinbody object;

	int x = 0, y = 0;
	int selectMenu = object.choiceMenu();

	if (selectMenu == 1) {
		printf("x�� �Է� :");
		scanf_s("%d", &x);
		printf("y�� �Է� :");
		scanf_s("%d", &y);
		system("cls");
		object.choiceMenu();

	}
	else if (selectMenu == 2) {
		object.drawGraph(x, y);
	}

	object.drawGraph(x, y);
	// �׷��� �� ���� ���� 







}