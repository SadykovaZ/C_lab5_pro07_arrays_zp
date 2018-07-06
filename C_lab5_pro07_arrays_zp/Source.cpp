#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
	start:
	cout << "Введите номер задания:" << " ";
	cin >> n;

	if (n == 1)
	{
		cout << "1. Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, после чего выводит количество ненулевых элементов. Перед вводом каждого элемента должна выводиться подсказка с номером элемента." << endl;

		int a[5];
		int count = 0;
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите a[" << i + 1 << "] число ->" << " ";
			cin >> a[i];
			if (a[i] != 0)
				count++;
		}
		cout << "В массиве " << count << " ненулевых элемента" << endl;

	}

	else if (n == 2)
	{
		cout << "2. Написать программу, которая выводит минимальный элемент введенного с клавиатуры массива целых чисел." << endl;

		int a[5];
		int min_v = INT_MAX;

		cout << endl;
		cout << "Введите в одной строке элементы массива (5 целых чисел) и нажмите <Enter> -> ";

		for (int i = 0; i < 5; i++)
		{

			cin >> a[i];

			if (a[i] < min_v)
				min_v = a[i];
		}

		cout << "Минимальный элемент массива:" << min_v << endl;
	}

	else if (n == 3)
	{
		cout << "3. Написать программу, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива целых чисел. Ниже приведен рекомендуемый вид экрана во время работы программы." << endl;
		int a[10];
		double average = 0;
		int count = 0;
		int sum = 0, sum1 = 0;

		cout << endl;
		cout << "Введите в одной строке элементы массива (10 целых чисел) и нажмите <Enter> -> ";

		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
			sum += a[i];
			if (a[i] != 0)
			{
				count++;
				sum1 += a[i];
				average = (double)sum1 / count;
			}
		}
		cout << "Сумма элементов массива:" << sum << endl;
		cout << "Количество ненулевых элементов:" << count << endl;
		cout << "Среднее арифметическое ненулевых элементов:" << average << endl;
	}

	else if (n == 4)
	{
		cout << "4. Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и максимального элементов массива. Ниже приведен рекомендуемый вид экрана во время работы программы." << endl;
		int a[10];
		double average = 0;
		int sum = 0;
		int count = 0;
		int min_v = INT_MAX;
		int max_v = INT_MIN;

		cout << endl;
		cout << "Введите в одной строке элементы массива (10 целых чисел) и нажмите <Enter> -> ";

		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
			if (a[i] > max_v)
				max_v = a[i];
			if (a[i] < min_v)
				min_v = a[i];
		}
		for (int i = 0; i < 10; i++)
		{
			if ((a[i] != max_v) && (a[i] != min_v))
			{
				count++;
				sum += a[i];
				average = (double)sum / count;
			}
		}

		cout << "Минимальный элемент: " << min_v << endl;
		cout << "Максимальный элемент: " << max_v << endl;
		cout << "Среднее арифм. без учета min и max значений:  " << average << endl;
	}

	else if (n == 5)
	{
		cout << "5. Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве. Массив должен вводиться во время работы программы." << endl;
		int a[10];
		int n = 0;
		bool b = false;

		cout << endl;
		cout << "Введите 10 чисел для массива: ";
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}

		cout << "Введите число для поиска: ";
		cin >> n;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == n)
			{
				b = true;
				break;
			}

		}
		if (b)
			cout << "Число находится в массиве" << endl;
		else
			cout << "Число не находится в массиве" << endl;
	}

	else if (n == 6)
	{
		cout << "6. Написать программу, которая вычисляет, сколько раз введенное с клавиатуры число встречается в массиве." << endl;
		int a[10];
		int n = 0;
		int count = 0;

		cout << endl;
		cout << "Введите 10 чисел для массива:";
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];

		}
		cout << "Введите число для подсчета:";
		cin >> n;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == n)
			{
				count++;
			}
		}
		cout << "Число " << n << " встречается " << count << " раз" << endl;
	}
	else if (n == 7)
	{
		cout << "7. Написать программу, которая проверяет, есть ли во введенном с клавиатуры массиве элементы с одинаковым значением" << endl;
		int a[10];
		bool b = false;

		cout << endl;
		cout << "Введите 10 чисел массива:";
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = (i + 1); j < 10; j++)
			{
				if (a[i] == a[j])
					b = true;
			}
		}
		if (b)
			cout << "Массив иммеет элементы с одинаковым значением." << endl;
		else
			cout << "Массив не иммеет элементы с одинаковым значением." << endl;

	}

	else if (n == 8)
	{
		cout << "Написать программу, которая определяет количество учеников в классе, чей рост превышает средний." << endl;
		int a[10];
		double average = 0;
		int count = 0;
		int sum = 0;
		int count1 = 0;

		cout << endl;
		cout << "*** Анализ роста учеников ***" << endl;
		cout << "Введите рост (см) и нажмите <Enter>. (максимально рост для 10 учеников)" << endl;
		cout << "Для завершения введите 0 и нажмите <Enter>" << endl;

		for (int i = 0; i < 10; i++)
		{
			cout << "->";
			cin >> a[i];
			if (a[i] == 0)
				break;
		}
		for (int i = 0; i < 10; i++)
		{
			if (a[i] != 0)
				count1++;
			sum += a[i];
			average = (double)sum / count1;
			if (a[i] == 0)
				break;
		}
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > average)
				count++;
		}
		cout << "Средний рост: " << average << endl;
		cout << "У " << count << " человек рост превышает средний." << endl;

	}

	else if (n == 9)
	{
		cout << "Написать программу, которая обрабатывает результаты экзамена. Для каждой оценки программа должна вычислить процент от общего количества оценок." << endl;
		cout << endl;

		int a[6];
		int sum = 0;
		double p[6];
		char *mes[6] = { "\0", "\0", "двоек-> \0","троек-> \0", "четверок-> \0","пятерок-> \0" };



		cout << endl;
		cout << "Обработка результатов экзамена." << endl;
		cout << "Введите исходные данные: " << endl;
		for (int i = 5; i >= 2; i--)
		{
			cout << mes[i];
			cin >> a[i];
			sum += a[i];
		}
		for (int i = 2; i < 6; i++)
		{
			p[i] = (double)a[i] / sum * 100;

		}
		cout << "Результаты экзамена." << endl;
		cout << "Всего оценок = " << sum << endl;
		for (int i = 5; i >= 2; i--)
		{
			cout << mes[i] << " " << a[i] << " " << " -> " << p[i] << "%" << endl;
		}
	}

	else if (n == 10)
	{
		cout << "Дан массив символов s1,..sn.Подсчитать сколько раз встречается в массиве символ К. " << endl;
		char string[10];
		char symbol = 'k';
		int count = 0;
		cout << endl;
		cout << "Введите 10 символов: ";
		for (char i = 0; i < 10; i++)
		{
			cin >> string[i];
			if (string[i] == symbol)
			{
				count++;
			}
		}
		cout << "Символ К встречается " << count << " раз" << endl;

	}

	else if (n == 11)
	{
		cout << "Дан массив символов S1,...,Sn. Распечатать все буквы, непосредственно перед которыми находится буква С." << endl;

		char string[10];
		char symbol = 'c';
		cout << endl;
		cout << "Введите 10 символов" << endl;
		for (char i = 0; i < 10; i++)
		{
			cin >> string[i];
			if (string[i - 1] == symbol)
			{
				cout << string[i] << endl;
			}
		}
	}

	else if (n == 12)
	{
		cout << "Даны действительные числа а1,..a16. Получить min(a1*a9,a2*a10,...,a8*a16)." << endl;
		cout << endl;
		int a[16];
		int b[8];
		int min_v = INT_MAX;

		for (int i = 0; i < 16; i++)
		{
			a[i] = rand() % 15;
			cout << "a [" << i + 1 << "] = " << a[i] << endl;
		}
		for (int i = 0; i < 8; i++)
		{
			b[i] = a[i] * a[i + 8];
			cout << "a [" << i + 1 << "] *" << " a [" << i + 9 << "] = " << b[i] << endl;

			if (b[i] < min_v)
			{
				min_v = b[i];
			}
		}
		cout << "Минимальное значение = " << min_v << endl;
	}

	goto start;
	system("pause");
	return 0;
}