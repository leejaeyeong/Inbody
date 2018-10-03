#pragma once
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "MenuButton.h"

#define MAXUSER 10		// MAX 회원 10명

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
			fscanf_s(check, "%s %s \n", a[i], 15, b[i], 15); // fscanf_s 에서 문자열을 받을 경우 문자열의 최대 크기를 알려줘야한다.

			if (!strcmp(id, a[i]) && !strcmp(passward, b[i])) {
				printf("로그인 되었습니다.\n");
			}
			else if (!strcmp(id, a[i]) && strcmp(passward, b[i])) {
				printf("비밀번호가 틀렸습니다.");
			}
			else if (strcmp(id, a[i])) {
				idcount++;
			}
		
		} 
		if (idcount == 10) {
			int select;
			printf("찾는 아이디가 없습니다.\n");
			/*화면 흔들리면서 비프음 발생 */
			
			button.addButton("1. 회원 가입");
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