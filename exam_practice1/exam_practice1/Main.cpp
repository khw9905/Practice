#include<stdio.h>


int main(void)
{
	int width, high, thick;

	while (true)
	{
		printf("�ʺ� �Է��Ͻÿ�. ");
		scanf("%d", &width);
		if (width > 0 && width < 21)
			break;
	}

	while (true)
	{
		printf("���̸� �Է��Ͻÿ�. ");
		scanf("%d", &high);
		if (high > 0 && high < 21)
			break;
	}

	while (true)
	{
		printf("�β��� �Է��Ͻÿ�. ");
		scanf("%d", &thick);
		if ((width / 2) >= thick && (high / 2) >= thick)
			break;
	}

	for (int i = 0; i < high; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			if (j < thick || (width - thick) <= j || i < thick || (high - thick) <= i)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}