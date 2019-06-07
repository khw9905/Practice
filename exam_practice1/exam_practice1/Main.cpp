#include<stdio.h>


int main(void)
{
	int width, high, thick;

	while (true)
	{
		printf("너비를 입력하시오. ");
		scanf("%d", &width);
		if (width > 0 && width < 21)
			break;
	}

	while (true)
	{
		printf("높이를 입력하시오. ");
		scanf("%d", &high);
		if (high > 0 && high < 21)
			break;
	}

	while (true)
	{
		printf("두께를 입력하시오. ");
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



	/*
	while (true)
	{
		system("cls");

		int iWidth, iHeight, iCount = 0;
		int t = 0;	// 벽 두께

		while (true)
		{
			switch (iCount)
			{
			case 0:
				printf_s("너비를  입력하시오. ");
				scanf_s("%d", &iWidth);

				if (iWidth > 0 && iWidth < 21)
					iCount++;
				break;
			case 1:
				printf_s("높이를  입력하시오. ");
				scanf_s("%d", &iHeight);

				if (iHeight > 0 && iHeight < 21)
					iCount++;
				break;
			case 2:
				printf_s("두께를  입력하시오. ");
				scanf_s("%d", &t);

				if ((iWidth / 2) >= t && (iHeight / 2) >= t)
					iCount++;
				break;
			}
			if (iCount >= 3)
				break;
		}

		//** 입력한 높이 값만큼 반복
		for (int i = 0; i < iHeight; i++)
		{
			//** 입력한 폭 만큼 반복
			for (int j = 0; j < iWidth; j++)
			{
				//** 만약
				if (i < t ||	//** 현재 높이가 벽두께보다 작다면

					//** (최대높이 - 두께) 값보다 현재높이가 클때
					i >= iHeight - t ||

					j < t || 	//** 현재 폭이 벽두께보다 작다면

					//** (최대폭 - 두께) 값보다 현재폭이 클때
					j >= iWidth - t)
					//** 위 조건중 하나라도 만족한다면
					printf_s("*");	//** 별을
				else //** 아니면
					printf_s(" "); //** 공백을 출력
			}
			printf_s("\n");
		}
		system("pause");
		return 0;
	}
	*/