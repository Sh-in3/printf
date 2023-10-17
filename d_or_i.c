#include "main.h"

int digi(void)
{
	int num_len = 0;

	if (num < 0)
	{
		/* Handle negative numbers */
		write(1, "-", 1);
		chara_print++;
		num = -num;
	}

	int temp = num;
	do
	{
		temp /= 10;
		num_len++;
	} while (temp > 0);

	if (num == 0)
	{
		write(1, "0", 1);
		chara_print++;
	}
	else
	{
		int divisor = 1;
		for (int i = 1; i < num_len; i++)
		{
			divisor *= 10;
		}
		temp = num;
		while (divisor > 0)
		{
			int digit = temp / divisor;
			char digit_char = '0' + digit;
			write(1, &digit_char, 1);
			chara_print++;
			temp = temp % divisor;
			divisor /= 10;
		}
	}
}

