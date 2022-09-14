#include <stdio.h>

/**
 * main - Entry point
 * ch - character
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	/* using for loop */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

/* using while loop               */
/* char                           */
/* while (ch <= 'z')              */
/* {                              */
/*    if (ch == 'e' || ch == 'q') */
/*     {                          */
/*         ch++;                  */
/*         continue               */
/*     }                          */
/*     putchar(ch;                */
/*            ch++;               */
/* }                              */
