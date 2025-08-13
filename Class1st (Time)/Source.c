#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int list[], int size)
{
	int temp;
	int seed;

	for (int i = 0; i < size; i++)
	{
		seed = rand() % size;
		temp = list[i];
		list[i] = list[seed];
		list[seed] = temp;
	}
}

struct LIFE
{
	int	heart;
};

void update_health(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("♥");
	}
	printf("\n");
}

int main()
{
#pragma region Rand Function
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.

	// srand(time(NULL));

	// for (int i = 0; i < 5; i++)
	// {
	// 	int random = rand() % 10 + 1;
	// 
	// 	printf("rand(%d)의 값 = %d\n", i, random);
	// }



#pragma endregion

#pragma region Shuffle Function

// int list[] = { 1, 2, 3, 4, 5};
// int size = sizeof(list) / sizeof(list[0]);

// srand(time(NULL));

// shuffle(list, size);

// printf("Shuffle\n");
// for (int i = 0; i < size; i++)
// {
// 	printf("%d\n", list[i]);
// }

#pragma endregion

#pragma region Game
//	struct LIFE player;
//	player.heart = 5;
//
//	int answer;
//	int guess;
//
//	srand(time(NULL));
//	answer = rand() % 50 + 1;
//
//	printf("UP - DOWN GAME\n");
//	printf("목숨은 5개입니다!\n\n");
//
//	while (player.heart > 0)
//	{
//		printf("숫자를 입력하세요(1 ~ 50)\n\n");
//		scanf_s("%d", &guess);
//
//		if (answer > guess)
//		{
//			printf("\nUP!\n\n");
//			player.heart--;
//		}
//		else if (answer < guess)
//		{
//			printf("\nDOWN!\n\n");
//			player.heart--;
//		}
//		else
//		{
//			printf("\nV I C T O R Y\n\n");
//			break;
//		}
//		
//		for (int i = 0; i < player.heart; i++)
//		{
//			printf("♥", player.heart);
//		}
//		printf("\n\n");
//
//		if (player.heart == 0)
//		{
//			printf("G A M E O V E R\n\n");
//			printf("정답은 %d입니다!\n", answer);
//		}
//	}
#pragma endregion

	return 0;
}