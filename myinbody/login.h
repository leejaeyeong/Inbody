#pragma once
#include <cstdio>
#include <cstring>
class Login {

	char userId[15];
	char userPass[15];

public:
	Login() {}
	~Login() {}
	void loginDisplay() {
		// �ƽ�Ű ��Ʈ�� �ιٵ� �߰��ϱ� .
		printf(" __       __                    __            __                        __           \n");
		printf("/  \\     /  |                  /  |          /  |                      /  |          \n");
		printf("$$  \\   /$$ | __    __         $$/  _______  $$ |____    ______    ____$$ | __    __ \n");
		printf("$$$  \\ /$$$ |/  |  /  |        /  |/       \\ $$      \\  /      \\  /    $$ |/  |  /  |\n");
		printf("$$$$  /$$$$ |$$ |  $$ |        $$ |$$$$$$$  |$$$$$$$  |/$$$$$$  |/$$$$$$$ |$$ |  $$ |\n");
		printf("$$ $$ $$/$$ |$$ |  $$ |        $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |\n");
		printf("$$ |$$$/ $$ |$$ \\__$$ |        $$ |$$ |  $$ |$$ |__$$ |$$ \\__$$ |$$ \\__$$ |$$ \\__$$ |\n");
		printf("$$ | $/  $$ |$$    $$ | ______ $$ |$$ |  $$ |$$    $$/ $$    $$/ $$    $$ |$$    $$ |\n");
		printf("$$/      $$/  $$$$$$$ |/      |$$/ $$/   $$/ $$$$$$$/   $$$$$$/   $$$$$$$/  $$$$$$$ |\n");
		printf("             /  \\__$$ | $$$$$$/                                             /  \\__$$|\n");
		printf("             $$    $$/                                                     $$    $$/ \n");
		printf("              $$$$$$/                                                       $$$$$$/  \n");

		printf("*************************************\n*     �α��� ������ �Է����ּ���    *\n");
		printf("*************************************\n");
		printf("[ID] : ");
		gets_s(userId, sizeof(userId));
		printf("[PW] : ");
		gets_s(userPass, sizeof(userPass));

		checkAccount(userId);
	}

	void checkAccount(char *userID) {
		FILE *check;

		fopen_s(&check, "userList.txt", "r");

		if (check == NULL)
			printf("��ϵ� user ������ �����ϴ�\n");

		//userList ���Ͽ��� �Ű������� ���� userID�� ��ġ�ϴ� �׸��� �ִ��� Ȯ���ϴ� �ڵ� �ۼ� 
		//exit(1);
	}
};