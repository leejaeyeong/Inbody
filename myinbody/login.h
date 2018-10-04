#pragma once
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "MenuButton.h"
#include "Display.h"

#define MAXUSER 10		// MAX ȸ�� 10��

class Display;

class login {
	
public:
	login() {}
	~login() {}

	
	MenuButton button;
	Display *display;
	
	
	void checkAccount(char *id, char *passward) {
		
		char a[MAXUSER][15];
		char b[MAXUSER][15];

		FILE *check;
		fopen_s(&check, "userList.txt", "r");
		
	
		int idcount = 0;
		for (int i = 0; i < 10; i++) {
			fscanf_s(check, "%s %s \n", a[i], 15, b[i], 15); // fscanf_s ���� ���ڿ��� ���� ��� ���ڿ��� �ִ� ũ�⸦ �˷�����Ѵ�.

			if (!strcmp(id, a[i]) && !strcmp(passward, b[i])) {
				printf("�α��� �Ǿ����ϴ�.\n");
			}
			else if (!strcmp(id, a[i]) && strcmp(passward, b[i])) {
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");
			}
			else if (strcmp(id, a[i])) {
				idcount++;
			}
		
		} 
		fclose(check);

		if (idcount == 10) {
			int selectMenu;
			printf("\n						* ã�� ���̵� �����ϴ�. *\n\n");
			/*ȭ�� ��鸮�鼭 ������ �߻� */
			
			button.addButton("1. �ٽ� �õ�");
			button.addButton("2. ȸ�� ����");
			scanf_s("%d", &selectMenu);
			
			//if (selectMenu == 1) 
				//display->newAccountDisplay();
				// https://m.blog.naver.com/PostView.nhn?blogId=hyungjungkim&logNo=60202456568&proxyReferer=https%3A%2F%2Fwww.google.co.kr%2F
		}
		
	}

	void newAccount(char *id, char *passward) {

		FILE *check;
		fopen_s(&check, "userList.txt", "a+");
		fputs(id, check);
		fputs(" ", check);
		fputs(passward, check);
		fputs("\n", check);
		fclose(check);
	}
};