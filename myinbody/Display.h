#pragma once
#include <cstdio>
#include <cstring>

class Display {
public:
	Display() {}
	~Display() {}

	void mainDisplay() {
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
		
		printf("		*************************************************************************************\n");
		printf("			My_inbody는 inbody 측정 데이터를 기반으로 내 몸의 변화를 한 눈에 \n");
		printf("			확인 할 수 있는 프로그램입니다.  Ver.1.0 (Beta) \n\n");
		printf("			- 회원 관리 시스템 구현 181001 \n");
		printf("			- function display 구현중 181001 \n");
		printf("		*************************************************************************************\n\n");
		
		/*
		  ㅡ 1
		  |  2

		  */
		
		unsigned char base = 0xa6;
		unsigned char symbol[7];
		for (int i = 1; i < 7; i++)
			symbol[i] = 0xa0 + i;
		printf("						");
		printf("%c%c", base, symbol[3]);
		for(int i = 0; i<20; i++)
		printf("%c%c", base, symbol[1]);

		printf("%c%c\n", base, symbol[4]);

		printf("						");
		for (int i = 0; i < 2; i++) {
				if(i ==0)
				 printf("%c%c    1. 회원 가입    ", base, symbol[2]);
				else printf("%c%c\n", base, symbol[2]);
			}

		printf("						");
		printf("%c%c", base, symbol[6]);
		for (int i = 0; i<20; i++)
		printf("%c%c", base, symbol[1]);
		printf("%c%c\n", base, symbol[5]);


		////////////////
		for (int i = 1; i < 7; i++)
			symbol[i] = 0xa0 + i;
		printf("						");
		printf("%c%c", base, symbol[3]);
		for (int i = 0; i<20; i++)
			printf("%c%c", base, symbol[1]);

		printf("%c%c\n", base, symbol[4]);

		printf("						");
		for (int i = 0; i < 2; i++) {
			if (i == 0)
				printf("%c%c     2. 로그인      ", base, symbol[2]);
			else printf("%c%c\n", base, symbol[2]);
		}

		printf("						");
		printf("%c%c", base, symbol[6]);
		for (int i = 0; i<20; i++)
			printf("%c%c", base, symbol[1]);
		printf("%c%c\n", base, symbol[5]);
	}

};
