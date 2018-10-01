#pragma once
#include <cstdio>
#include <cstring>
class MenuButton {											
public:
	MenuButton() {}
	~MenuButton() {}
		
	void addButton(char *text) {					// 콘솔 화면에 메뉴 선택 버튼 생성
		unsigned char base = 0xa6;
		unsigned char symbol[7];
		int length = strlen(text);
	

		for (int i = 1; i < 7; i++)
			symbol[i] = 0xa0 + i;
		printf("						");
		printf("%c%c", base, symbol[3]);
		for (int i = 0; i<20; i++)
			printf("%c%c", base, symbol[1]);

		printf("%c%c\n", base, symbol[4]);

		printf("						");
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				if(length == 9)
					printf("%c%c     %s      ", base, symbol[2], text);
				else if(length == 12)
					printf("%c%c    %s    ", base, symbol[2],text);
			}

			else printf("%c%c\n", base, symbol[2]);
		}

		printf("						");
		printf("%c%c", base, symbol[6]);
		for (int i = 0; i<20; i++)
			printf("%c%c", base, symbol[1]);
		printf("%c%c\n", base, symbol[5]);


	}
};