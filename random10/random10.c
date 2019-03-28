#include<stdio.h>

int main() {
	int randArr[10];
	int count = 0;

	while (1)
	{
		int num = rand() % 100;
		randArr[count++] = num;

		for (int i = 0; i < count - 1; i++)
		{
			if (randArr[i] == randArr[count - 1])
			{
				count--;
				break;
			}
		}
		if (count == 10)
			break;
	}
	for (int i = 0; i < count - 1; i++)
	{
		printf("%d\n", randArr[i]);
	}

}