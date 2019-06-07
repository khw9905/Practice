#include<stdio.h>


int main(void)
{
	int x, y, k, iHeight;

	printf_s("ют╥б : ");
	scanf_s("%d", &iHeight);

	k = iHeight - 2;

	for (y = 0; y < iHeight; y++)
	{
		int i = 0;

		for (x = 0; x < iHeight + y; x++)
		{
			if (x > k)
			{
				printf_s("%c", (i + 65));

				if ((iHeight - 1) <= x)
					i--;
				else
					i++;
			}
			else
				printf_s(" ");
		}
		k--;
		printf_s("\n");
	}

	return 0;
}