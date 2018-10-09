#pragma once
#include <cstdio>
#include <cstdlib>

class Myinbody {
	
public :
	Myinbody() {}
	~Myinbody() {}

	int choiceMenu() {
		int choice;

		printf("1. InBody 정보입력하기\n");
		printf("2. 나의 Status 한 눈에 보기\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ 메뉴를 선택해주세요 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

		scanf_s("%d", &choice);
		return choice;
	}

	void drawGraph(int x, int y) {
		system("cls");
		printf("지방 : *\t");
		printf("단백질 : &\t");
		printf("탄수화물 : @\n");
		printf("       ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		for (int i = 25; i > 0; i--) {
			for (int j = 102; j > 0; j--) {


				if (j == 102 && i % 5 == 0) printf("- %.3d", i * 4);
				else if (j == 101 && i % 5 == 0) printf(" |");
				else if (j == 101 && i % 5 != 0) printf("     |");
				else if (j == 1) printf("|");
				else if (j == x && i <= y) printf("&");

				else printf(" ");

			}
			printf("\n");
		}

		printf("       ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		for (int i = 6; i < 13; i++)
			printf("         %d월   ", i);
		printf("\n");
	}



};


