#include <stdio.h>
#include "inbodyClass.h"
#include "login.h"
#include "Display.h"

int main() {

	Login user;
	Myinbody object;
	Display display;

	display.mainDisplay();

	int x = 0, y = 0;
	user.loginDisplay();
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