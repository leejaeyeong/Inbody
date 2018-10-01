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
		printf("			My_inbody�� inbody ���� �����͸� ������� �� ���� ��ȭ�� �� ���� \n");
		printf("			Ȯ�� �� �� �ִ� ���α׷��Դϴ�.  Ver.1.0 (Beta) \n\n");
		printf("			- ȸ�� ���� �ý��� ���� 181001 \n");
		printf("			- function display ������ 181001 \n");
		printf("		*************************************************************************************\n\n");
		
		/*
		  �� 1
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
				 printf("%c%c    1. ȸ�� ����    ", base, symbol[2]);
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
				printf("%c%c     2. �α���      ", base, symbol[2]);
			else printf("%c%c\n", base, symbol[2]);
		}

		printf("						");
		printf("%c%c", base, symbol[6]);
		for (int i = 0; i<20; i++)
			printf("%c%c", base, symbol[1]);
		printf("%c%c\n", base, symbol[5]);
	}

};
