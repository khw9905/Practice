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



	/*
	while (true)
	{
		system("cls");

		int iWidth, iHeight, iCount = 0;
		int t = 0;	// �� �β�

		while (true)
		{
			switch (iCount)
			{
			case 0:
				printf_s("�ʺ�  �Է��Ͻÿ�. ");
				scanf_s("%d", &iWidth);

				if (iWidth > 0 && iWidth < 21)
					iCount++;
				break;
			case 1:
				printf_s("���̸�  �Է��Ͻÿ�. ");
				scanf_s("%d", &iHeight);

				if (iHeight > 0 && iHeight < 21)
					iCount++;
				break;
			case 2:
				printf_s("�β���  �Է��Ͻÿ�. ");
				scanf_s("%d", &t);

				if ((iWidth / 2) >= t && (iHeight / 2) >= t)
					iCount++;
				break;
			}
			if (iCount >= 3)
				break;
		}

		//** �Է��� ���� ����ŭ �ݺ�
		for (int i = 0; i < iHeight; i++)
		{
			//** �Է��� �� ��ŭ �ݺ�
			for (int j = 0; j < iWidth; j++)
			{
				//** ����
				if (i < t ||	//** ���� ���̰� ���β����� �۴ٸ�

					//** (�ִ���� - �β�) ������ ������̰� Ŭ��
					i >= iHeight - t ||

					j < t || 	//** ���� ���� ���β����� �۴ٸ�

					//** (�ִ��� - �β�) ������ �������� Ŭ��
					j >= iWidth - t)
					//** �� ������ �ϳ��� �����Ѵٸ�
					printf_s("*");	//** ����
				else //** �ƴϸ�
					printf_s(" "); //** ������ ���
			}
			printf_s("\n");
		}
		system("pause");
		return 0;
	}
	*/