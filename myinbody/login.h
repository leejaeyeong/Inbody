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
		// �ƽ�Ű ��Ʈ�� �ιٵ� �߰��ϱ� .
		

		printf("*************************************\n*     �α��� ������ �Է����ּ���    *\n");
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
			printf("��ϵ� user ������ �����ϴ�\n");

		
		
		for (int i = 0; i < 10; i++) {
			fscanf_s(check, "%s %s \n", a[i], 15, b[i], 15); // fscanf_s ���� ���ڿ��� ���� ��� ���ڿ��� �ִ� ũ�⸦ �˷�����Ѵ�.

			if (!strcmp(id, a[i]) && !strcmp(passward, b[i])) {
				printf("�α��� �Ǿ����ϴ�.\n");
			}
			else if (!strcmp(id, a[i]) && strcmp(passward, b[i])) {
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");
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