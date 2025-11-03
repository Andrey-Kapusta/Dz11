#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

int main()
{
	system("chcp 1251");
	setlocale(LC_CTYPE, "RUS");


	printf("Введите значения для переменных массива array (Два элемента должны обязательно быть 0)\n");
	int array[N];
	int cnt_0 = 0, proizv = 1, n0=0; // cnt_0 - счётчик нулей в массиве      n0 - переменная чтобы не считать значения после второго нуля
	for (int i = 0; i < N; i++)
	{
		int temp;
		printf("Введите значение переменной array[%d]\n", i);
		scanf("%d", &temp);
		array[i] = temp;
		if (temp == 0)
		{
			cnt_0 += 1;
		}
	}

	if (cnt_0 < 2)
	{
		printf("В массиве недостаточно элементов со значением 0\nПопробуйте с начала\n");
	}

	for (int i = 0; i < N; i++)
	{
		if (n0 == 0)
		{
			if (array[i] == 0)
			{
				n0 += 1;
				for (int j = i; j < N - 1; j++)
				{
					if (array[j + 1] != 0)
					{
						proizv = proizv * array[j + 1];
					}
					else
					{
						break;
					}
				}
			}
		}
		
	}
	printf("Произведение всех чисел между двумя нулевыми элементами равно: %d", proizv);
}