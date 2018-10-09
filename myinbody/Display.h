#pragma once
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "MenuButton.h"
#include "login.h"
#include "windows.h"

class login;

class Display {


public:
	MenuButton button;
	login *user;

	Display() {}
	~Display() {}

	void logo() {
		printf("		 __       __                    __            __                        __           \n");
		printf("		/  \\     /  |                  /  |          /  |                      /  |          \n");
		printf("		$$  \\   /$$ | __    __         $$/  _______  $$ |____    ______    ____$$ | __    __ \n");
		printf("		$$$  \\ /$$$ |/  |  /  |        /  |/       \\ $$      \\  /      \\  /    $$ |/  |  /  |\n");
		printf("		$$$$  /$$$$ |$$ |  $$ |        $$ |$$$$$$$  |$$$$$$$  |/$$$$$$  |/$$$$$$$ |$$ |  $$ |\n");
		printf("		$$ $$ $$/$$ |$$ |  $$ |        $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |\n");
		printf("		$$ |$$$/ $$ |$$ \\__$$ |        $$ |$$ |  $$ |$$ |__$$ |$$ \\__$$ |$$ \\__$$ |$$ \\__$$ |\n");
		printf("		$$ | $/  $$ |$$    $$ | ______ $$ |$$ |  $$ |$$    $$/ $$    $$/ $$    $$ |$$    $$ |\n");
		printf("		$$/      $$/  $$$$$$$ |/      |$$/ $$/   $$/ $$$$$$$/   $$$$$$/   $$$$$$$/  $$$$$$$ |\n");
		printf("		             /  \\__$$ |$$$$$$/                                             /  \\__$$|\n");
		printf("		             $$    $$/                                                     $$    $$/ \n");
		printf("		              $$$$$$/                                                       $$$$$$/  \n\n\n");
	}
	void mainDisplay() {

		logo();
		printf("		*************************************************************************************\n");
		printf("			My_inbody�� inbody ���� �����͸� ������� �� ���� ��ȭ�� �� ���� \n");
		printf("			Ȯ�� �� �� �ִ� ���α׷��Դϴ�.  Ver.1.0 (Beta) \n\n");
		printf("			- ȸ�� ���� �ý��� ���� 181001 \n");
		printf("			- function display ������ 181001 \n");
		printf("		*************************************************************************************\n\n");


		button.addButton("1. �α���");
		button.addButton("2. ȸ�� ����");

		char select[2];
		gets_s(select, 2);

		if (atoi(select) == 1)
			loginDisplay();
		else if (atoi(select) == 2)
		{
			newAccountDisplay();
		}


	}

	void loginDisplay() {
		system("cls");
		logo();

		printf("		*************************************************************************************\n\n");
		printf("					   [ȸ�� ID�� PASSWARD�� �Է����ּ���] \n\n");
		printf("			  �ذ����� ���� ��� ȸ�� ������ ���� ���ο� ������ ������ּ��� \n\n");
		printf("		*************************************************************************************\n\n");


		char userId[15];
		char userPass[15];
		printf("						[ID] : ");
		gets_s(userId, sizeof(userId));
		printf("						[PW] : ");
		gets_s(userPass, sizeof(userPass));

		user->checkAccount(userId, userPass);


	}

	void newAccountDisplay() {
		system("cls");
		logo();
		printf("		*************************************************************************************\n\n");
		printf("					   [ȸ�� ID�� PASSWARD�� �������ּ���] \n\n");
		printf("					   ��ID�� PASSWARD�� �ִ� 15�� �Դϴ�. \n\n");
		printf("		*************************************************************************************\n\n");


		/*�Է� �� �޾Ƽ� ���� ����� �κ� ���� */

		char userId[15];
		char userPass[15];
		printf("						[ID] : ");
		gets_s(userId, sizeof(userId));
		printf("						[PW] : ");
		gets_s(userPass, sizeof(userPass));

		button.addButton("1. ���� ����");
		button.addButton("2. �ʱ�ȭ");

		char selectMenu[2];
		//scanf_s("%d", &selectMenu);
		gets_s(selectMenu, sizeof(selectMenu));

		if (atoi(selectMenu) == 1) {
			printf("				* ������ �����Ǿ����ϴ�. �α��� �������� �̵��մϴ�.*");
			Sleep(2500);
			user->newAccount(userId, userPass);
			loginDisplay();
		}
		else if (atoi(selectMenu) == 2) {
			newAccountDisplay();
		}
	}

};
