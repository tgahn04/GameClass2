#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void move(int x, int y)
{
	// x와 y축을 설정하는 구조체입니다.
	COORD position = { x, y };
	
	// 콘솔 커서의 좌표를 설정하는 함수입니다.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{	
	int x = 0, y = 0;
	char key;

	 while (1)
	 {
	 key = _getch();
	 
	 	switch (key)
	 	{
		case UP: y--;
			break;

		case LEFT: x -= 2;
			break;

		case RIGHT: x += 2;
			break;

		case DOWN: y++;
			break;

		default: 
			if (0)
			printf("exception");
			break;
	 	}
		if (x < 0) x = 0;
		if (y < 0) y = 0;
		if (x > 78) x = 78;
		if (x > 100) x = 100;

		system("cls");
		move(x, y);
		printf("★");
	 }

return 0;
}