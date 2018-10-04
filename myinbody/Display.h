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
		printf("			My_inbody는 inbody 측정 데이터를 기반으로 내 몸의 변화를 한 눈에 \n");
		printf("			확인 할 수 있는 프로그램입니다.  Ver.1.0 (Beta) \n\n");
		printf("			- 회원 관리 시스템 구현 181001 \n");
		printf("			- function display 구현중 181001 \n");
		printf("		*************************************************************************************\n\n");


		button.addButton("1. 로그인");
		button.addButton("2. 회원 가입");

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
		printf("					   [회원 ID와 PASSWARD를 입력해주세요] \n\n");
		printf("			  ※계정이 없을 경우 회원 가입을 통해 새로운 계정을 만들어주세요 \n\n");
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
		printf("					   [회원 ID와 PASSWARD를 생성해주세요] \n\n");
		printf("					   ※ID와 PASSWARD는 최대 15자 입니다. \n\n");
		printf("		*************************************************************************************\n\n");


		/*입력 값 받아서 계쩡 만드는 부분 생성 */

		char userId[15];
		char userPass[15];
		printf("						[ID] : ");
		gets_s(userId, sizeof(userId));
		printf("						[PW] : ");
		gets_s(userPass, sizeof(userPass));

		button.addButton("1. 계정 생성");
		button.addButton("2. 초기화");

		char selectMenu[2];
		//scanf_s("%d", &selectMenu);
		gets_s(selectMenu, sizeof(selectMenu));

		if (atoi(selectMenu) == 1) {
			printf("				* 계정이 생성되었습니다. 로그인 페이지로 이동합니다.*");
			Sleep(2500);
			user->newAccount(userId, userPass);
			loginDisplay();
		}
		else if (atoi(selectMenu) == 2) {
			newAccountDisplay();
		}
	}

};
