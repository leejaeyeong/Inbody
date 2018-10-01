#pragma once
#include <cstdio>
#include <cstring>
#define MAXUSER 10
class Login {

	char userId[15];
	char userPass[15];

public:
	Login() {}
	~Login() {}
	void loginDisplay() {
		// 아스키 아트로 인바디 추가하기 .
		

		printf("*************************************\n*     로그인 정보를 입력해주세요    *\n");
		printf("*************************************\n");
		printf("[ID] : ");
		gets_s(userId, sizeof(userId));
		printf("[PW] : ");
		gets_s(userPass, sizeof(userPass));

		checkAccount(userId,userPass);
	}

	void checkAccount(char *id, char *passward) {
		FILE *check;
		char a[MAXUSER][15];
		char b[MAXUSER][15];

		fopen_s(&check, "userList.txt", "a+");

		if (check == NULL)
			printf("등록된 user 정보가 없습니다\n");

		
		
		for (int i = 0; i < 10; i++) {
			fscanf_s(check, "%s %s \n", a[i], 15, b[i], 15); // fscanf_s 에서 문자열을 받을 경우 문자열의 최대 크기를 알려줘야한다.

			if (!strcmp(id, a[i]) && !strcmp(passward, b[i])) {
				printf("로그인 되었습니다.\n");
			}
			else if (!strcmp(id, a[i]) && strcmp(passward, b[i])) {
				printf("비밀번호가 틀렸습니다.");
			}
		
		}
		//fclose(check);
		//fopen_s(&check, "userList.txt", "a+");
		fputs(id ,check);
		fputs(" ", check);
		fputs(passward, check);
		fputs("\n", check);
		fclose(check);


		//printf("%s %s \n", a, b);
		//exit(1);
	}
};