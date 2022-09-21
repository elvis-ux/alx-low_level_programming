#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stopLimit 2645
#define asciiStop 127
#define asciiStart 32

/**
 * main - generate keygen (a random password)
 *
 * Return: Always 0
 */
int main(void)
{
	char passwd[100];

	int randValue, num = 0, i = 0;

	srand(time(NULL));

	while (num < stopLimit)
	{
		randValue = random() % asciiStop;

		if (randValue > asciistart)
		{
			passwd[i++] = randValue;
		}
	}
	passwd[i++] = (2772 - num);

	passwd[i] = '\0';

	printf("%s", passwd);

	return (0);
}
