#include <stdio.h>
#include <Windows.h>
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
	int key;

	while (1)
	{
		key = _getch();

		switch (key)
		{
			case UP:
			printf("↑ ");
			break;
			
			case LEFT:
			printf("← ");
			break; 
			
			case RIGHT:
			printf("→ ");
			break; 
			
			case DOWN:
			printf("↓ ");
			break; 
		}
	}

return 0;
}