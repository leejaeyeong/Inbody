#pragma once
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "MenuButton.h"

#define MAXUSER 10		// MAX ȸ�� 10��

class Display;

class login {
	FILE *check;
	MenuButton button;


	

	
public:
	login() {}
	~login() {}

	//Display* display;

	
	
	void checkAccount(char *id, char *passward) {
		
		char a[MAXUSER][15];
		char b[MAXUSER][15];

		fopen_s(&check, "userList.txt", "a+");

		

		
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
		if (idcount == 10) {
			int select;
			printf("ã�� ���̵� �����ϴ�.\n");
			/*ȭ�� ��鸮�鼭 ������ �߻� */
			
			button.addButton("1. ȸ�� ����");
			scanf_s("%d", &select);
			
				
		}

	}

	void newAccount(char *id, char *passward) {

		fputs(id, check);
		fputs(" ", check);
		fputs(passward, check);
		fputs("\n", check);
		fclose(check);

	}
};