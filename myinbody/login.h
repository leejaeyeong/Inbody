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
		// 아스키 아트로 인바디 추가하기 .
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

		printf("*************************************\n*     로그인 정보를 입력해주세요    *\n");
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
			printf("등록된 user 정보가 없습니다\n");

		//userList 파일에서 매개변수로 받은 userID와 일치하는 항목이 있는지 확인하는 코드 작성 
		//exit(1);
	}
};