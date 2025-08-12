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
	
int list[] = { 1, 2, 3, 4, 5};
int size = sizeof(list) / sizeof(list[0]);

srand(time(NULL));

printf("shuffle 전\n");
for (int i = 0; i < size; i++)
{
	printf("%d\n", list[i]);
}

printf("\n");

shuffle(list, size);

printf("shuffle 후\n");
for (int i = 0; i < size; i++)
{
	printf("%d\n", list[i]);
}

#pragma endregion

return 0;
}