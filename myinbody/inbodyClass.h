#pragma once
#include <cstdio>
#include <cstdlib>

class Myinbody {
	
public :
	Myinbody() {}
	~Myinbody() {}

	int choiceMenu() {
		int choice;

		printf("1. InBody �����Է��ϱ�\n");
		printf("2. ���� Status �� ���� ����\n");
		printf("�ѤѤѤѤѤѤѤѤѤѤѤѤ� �޴��� �������ּ��� �ѤѤѤѤѤѤѤѤѤѤѤѤ�\n");

		scanf_s("%d", &choice);
		return choice;
	}

	void drawGraph(int x, int y) {
		system("cls");
		printf("���� : *\t");
		printf("�ܹ��� : &\t");
		printf("ź��ȭ�� : @\n");
		printf("       �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
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

		printf("       �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		for (int i = 6; i < 13; i++)
			printf("         %d��   ", i);
		printf("\n");
	}



};


