#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void task_1()
{
	int counter = 0;

	// Вывод 8
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "8 ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод от 1 до 7
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод от 10 до 80
	for (int i = 10; i <= 80; i += 10)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод от 12 до 82
	for (int i = 12; i <= 82; i += 10)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод от 2 до 20
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j <= 20; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод от 15 до 3
	for (int i = 0; i < 4; i++)
	{
		for (int j = 15; j >= 3; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Вывод 0
	counter = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j >= counter; j--)
			cout << 0 << " ";
		counter++;
		cout << endl;
	}

	cout << endl;

	// Вывод от 8 до 1
	counter = 1;
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 8; j >= counter; j--)
			cout << j << " ";
		counter++;
		cout << endl;
	}

	cout << endl;

	// Вывод от 2 до 10
	counter = 2;
	for (int i = 0; i <= 7; i++)
	{
		for (int j = counter; j <= 10; j++)
			cout << j << " ";
		counter++;
		cout << endl;
	}

	cout << endl;

	// Вывод от 2 до 10
	counter = 2;
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 2; j <= counter; j++)
			cout << j << " ";
		counter++;
		cout << endl;
	}

	cout << endl;

	// Вывод от 3 до 6
	for (int i = 3; i <= 6; i++)
	{
		for (int j = 0; j < i; j++)
			cout << i << " ";
		cout << endl;
	}

	cout << endl;

	// Вывод от 21 до 25
	for (int i = 21; i <= 25; i++)
	{
		for (int j = 21; j <= i; j++)
			cout << i << " ";
		cout << endl;
	}

	cout << endl;

	// Вывод от 1 до 5
	counter = 8;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < counter; j++)
			cout << i << " ";
		counter--;
		cout << endl;
	}

	cout << endl;

	// Вывод от 10 до 50
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
			cout << i << 0 << " ";
		cout << endl;
	}

	cout << endl;

	// Вывод от 5 до 9
	counter = 5;
	for (int i = 5; i <= 9; i++)
	{
		for (int j = 0; j < counter; j++)
			cout << i << " ";
		counter--;
		cout << endl;
	}

	cout << endl;

	// Вывод от 5 до 25
	counter = 5;
	for (int i = 5; i <= 25; i += 5)
	{
		for (int j = 0; j < counter; j++)
			cout << i << " ";
		counter--;
		cout << endl;
	}

	cout << endl;

	// Вывод от 101 до 165
	for (int i = 0; i <= 6; i++)
	{
		for (int j = 1; j <= 5; j++)
			cout << 1 << i << j << " ";
		cout << endl;
	}

	cout << endl;

	// Вывод от 51 до 28
	for (int i = 5; i >= 2; i--)
	{
		for (int j = 1; j <= 8; j++)
			cout << i << j << " ";
		cout << endl;
	}
}

void task_2()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			cout << j << " + " << i << " = " << i + j << "\t";
		cout << endl;
	}
}

void task_3()
{
	int temp_input = 0;

	cout << "\t\tПредмет" << endl;
	cout << "Ученик\t1\t2\t3" << endl;

	for (int i = 1; i <= 12; i++)
	{
		cout << i;
		for (int j = 1; j < 4; j++)
			cin >> temp_input;
	}

	cout << endl << endl;

	cout << "Ученик" << endl;
	cout << "Предмет\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12" << endl;

	for (int i = 1; i < 4; i++)
	{
		cout << i;
		for (int j = 1; j <= 12; j++)
			cin >> temp_input;
	}

}

void task_4()
{
	int temp_input = 0, summ = 0, personal_summ = 0, summ_1 = 0, summ_2 = 0, summ_3 = 0;

	cout << "\t\tМесяц" << endl;
	cout << "Работники\t1\t2\t3\tСумма" << endl;

	for (int i = 1; i <= 12; i++)
	{
		personal_summ = 0;
		cout << i << "\t\t";
		for (int j = 1; j < 4; j++)
		{
			cin >> temp_input;

			if (j == 1)
				summ_1 += temp_input;
			else if (j == 2)
				summ_2 += temp_input;
			else
				summ_3 += temp_input;

			personal_summ += temp_input;
			summ += temp_input;
		}
		cout << "Работник №" << i << " заработал: " << personal_summ << endl;
	}
	cout << "\t\t" << summ_1 << "\t" << summ_2 << "\t" << summ_3 << endl;
	cout << "Общая сумма зарплаты всех работников: " << summ << endl;
}

void task_5()
{
	int temp_input = 0, summ = 0, personal_summ = 0, summ_1 = 0, summ_2 = 0, summ_3 = 0;

	cout << "\t\tПрограмма" << endl;
	cout << "Спортсмен\tОбязательная\tКороткая\tПроизвольная" << endl;

	for (int i = 1; i <= 15; i++)
	{
		personal_summ = 0;
		cout << i << "\t\t";
		for (int j = 1; j < 4; j++)
		{
			cin >> temp_input;

			if (j == 1)
				summ_1 += temp_input;
			else if (j == 2)
				summ_2 += temp_input;
			else
				summ_3 += temp_input;

			personal_summ += temp_input;
			summ += temp_input;
		}
		cout << "Спортсмен №" << i << " заработал: " << double(personal_summ) / 3 << endl;
	}
	cout << "\t\t" << double(summ_1) / 2 << "\t\t" << double(summ_2) / 2 << "\t\t" << double(summ_3) / 2 << endl;
}

void task_6()
{
	int temp_input = 0, counter_all_5 = 0, counter_presonal_3 = 0, counter_subject_2_1 = 0, counter_subject_2_2 = 0, counter_subject_2_3 = 0;

	cout << "\t\tПредмет" << endl;
	cout << "Ученик\t1\t2\t3" << endl;

	for (int i = 1; i <= 18; i++)
	{
		counter_presonal_3 = 0;
		cout << i << "\t";
		for (int j = 1; j < 4; j++)
		{
			cin >> temp_input;

			if (temp_input == 2 && j == 1)
				counter_subject_2_1++;
			else if (temp_input == 2 && j == 2)
				counter_subject_2_2++;
			else if (temp_input == 2 && j == 3)
				counter_subject_2_3++;
			else if (temp_input == 3)
				counter_presonal_3++;
			else if (temp_input == 5)
				counter_all_5++;
		}
		cout << "Ученик №" << i << " кол-во троек: " << counter_presonal_3 << endl;
	}
	cout << "\t" << counter_subject_2_1 << "\t" << counter_subject_2_2 << "\t" << counter_subject_2_3 << endl;
	cout << "Общее кол-во пятерок: " << counter_all_5 << endl;
}

void task_7()
{
	int temp_input = 0, max_parall = 1000, max_a = 1000, max_b = 1000, max_v = 1000, max_g = 1000;

	cout << "\t\tКласс" << endl;
	cout << "Параллель\tА\tБ\tВ\tГ" << endl;

	for (int i = 1; i <= 11; i++)
	{
		max_parall = 1000;
		cout << i << "\t\t";
		for (int j = 1; j < 5; j++)
		{
			cin >> temp_input;
			if (temp_input < max_parall)
				max_parall = temp_input;
			
			if (temp_input < max_a && j == 1)
				max_a = temp_input;
			if (temp_input < max_b && j == 2)
				max_b = temp_input;
			if (temp_input < max_v && j == 3)
				max_v = temp_input;
			if (temp_input < max_g && j == 4)
				max_g = temp_input;
		}
		cout << "В параллели #" << i << ": " << max_parall << endl;
	}
	cout << "\t\t" << max_a << "\t" << max_b << "\t" << max_v << "\t" << max_g << endl;
}

void task_8()
{
	int a = 0, temp_input = 0, personal_summ = 0, max_personal_summ = 0, 
		number_item = 0, summ = 0, summ_day_1 = 0, summ_day_2 = 0, summ_day_3 = 0, 
		summ_day_4 = 0, summ_day_5 = 0, summ_day_6 = 0, max_summ_day = 0, max_summ_day_iter = 0, counter = 0;

	cout << "\t\tДень" << endl;
	cout << "Вид товара\t1\t2\t3\t4\t5\t6" << endl;

	cin >> a;

	for (int i = 1; i <= 5; i++)
	{
		personal_summ = 0;
		cout << i << "\t\t";
		for (int j = 1; j < 6; j++)
		{
			cin >> temp_input;
			personal_summ += temp_input;

			if (j == 1)
				summ_day_1 += temp_input;
			if (j == 2)
				summ_day_2 += temp_input;
			if (j == 3)
				summ_day_3 += temp_input;
			if (j == 4)
				summ_day_4 += temp_input;
			if (j == 5)
				summ_day_5 += temp_input;
			if (j == 6)
				summ_day_6 += temp_input;

			summ += temp_input;
		}
		cout << "а) Общий доход " << i << " товара: " << personal_summ << endl;
		
		if (personal_summ > max_personal_summ)
		{
			max_personal_summ = personal_summ;
			number_item = i;
		}
	}

	if (summ_day_1 > max_summ_day)
	{
		max_summ_day = summ_day_1;
		max_summ_day_iter = 1;
	}
	if (summ_day_2 > max_summ_day)
	{
		max_summ_day = summ_day_2;
		max_summ_day_iter = 2;
	}
	if (summ_day_3 > max_summ_day)
	{
		max_summ_day = summ_day_3;
		max_summ_day_iter = 3;
	}
	if (summ_day_4 > max_summ_day)
	{
		max_summ_day = summ_day_4;
		max_summ_day_iter = 4;
	}
	if (summ_day_5 > max_summ_day)
	{
		max_summ_day = summ_day_5;
		max_summ_day_iter = 5;
	}
	if (summ_day_6 > max_summ_day)
	{
		max_summ_day = summ_day_6;
		max_summ_day_iter = 6;
	}

	if (summ_day_1 > a)
		counter++;
	if (summ_day_2 > a)
		counter++;
	if (summ_day_3 > a)
		counter++;
	if (summ_day_4 > a)
		counter++;
	if (summ_day_5 > a)
		counter++;
	if (summ_day_6 > a)
		counter++;


	cout << "б) Сумма \t" << summ_day_1 << "\t" << summ_day_2 << "\t" << summ_day_3 << "\t" << summ_day_4 << "\t" << summ_day_5 << "\t" << summ_day_6 << endl;
	cout << "в) Сумма дохода магазина за 6 дней: " << summ << endl;
	cout << "г) Максимальный доход за 6 дней по товару: " << number_item << endl;
	cout << "д) Максимальный общий доход по всем видам товара в день: " << max_summ_day_iter;
	cout << "е) " << counter;
	
}

void task_9()
{
	double summ_group = 0, summ_student = 0,summ_exam = 0, input = 0, iter = 0;
	for (int group = 1; group <= 3; group++)
	{
		for (int students = 1; students <= 2; students++)
		{
			summ_exam = 0;
			for (int exam = 1; exam <= 3; exam++)
			{
				cin >> input;

				summ_exam += input;
			}

			summ_student += summ_exam / 3;
		}

		if (summ_group < summ_student / 2)
		{
			summ_group = summ_student / 2;
			iter = group;
		}
	}

	cout << iter;
}

void task_10()
{
	int counter = 0;
	for (int i = 120; i <= 140; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}
		cout << i << " - " << counter << endl;
	}
}

void task_11()
{
	int counter = 0, n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		counter = 0;
		cout << i;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cout << "+";

		}
		cout << endl;
	}
}

void task_12()
{
	int counter = 0;
	for (int i = 1; i <= 300; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}

		if (counter == 5)
			cout << i << endl;
	}
}

void task_13()
{
	int counter = 0;
	for (int i = 200; i <= 500; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}

		if (counter == 6)
			cout << i << endl;
	}
}

void task_14()
{
	int counter = 0, a = 0, b = 0, k = 0;

	cin >> a >> b >> k;

	for (int i = a; i <= b; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}

		if (counter == k)
			cout << i << endl;
	}
}

void task_15()
{
	int a = 0, b = 0, max = 0, min = 1000, counter = 0;

	cin >> a >> b;

	if (a < 0)
		a = 1;

	for (int i = a; i <= b; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}
		if (counter > max)
			max = counter;
		if (counter < min)
			min = counter;
	}

	cout << "Максимальное: " << max << endl << "Минимальное: " << min;
}

void task_16()
{
	int counter = 0;

	for (int i = 100; i <= 999; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			cout << i << " ";
	}
}

void task_17()
{
	int counter = 0;

	for (int i = 2; i <= 100; i++)
	{
		counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			cout << i << " ";
	}
}

void task_18()
{
	int summ = 0;

	for (int i = 50; i <= 70; i++)
	{
		summ = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				summ += j;
		}
		cout << i << " - " << summ << endl;
	}
}

void task_19()
{
	int summ = 0;

	for (int i = 100; i <= 300; i++)
	{
		summ = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				summ += j;
		}
		if (summ == 50)
			cout << i << " - " << summ << endl;
	}
}

void task_20()
{
	int summ = 0;

	for (int i = 100; i <= 300; i++)
	{
		summ = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				summ += j;
		}
		if (summ % 10 == 0)
			cout << i << " - " << summ << endl;
	}
}

void task_21()
{
	int summ = 0;

	for (int i = 100; i <= 999; i++)
	{
		summ = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				summ += j;
		}
		if (summ == i)
			cout << i << " - " << summ << endl;
	}
}

void task_22()
{
	for (int x = 1; x <= 30; x++)
	{
		for (int y = 1; y <= 30; y++)
		{
			for (int k = 1; k <= 30; k++)
			{
				if (pow(x, 2) + pow(y, 2) == pow(k, 2))
					cout << x << " " << y << endl;
			}
		}
	}
}

void task_23()
{
	// m - число, n - степень
	int m = 0, n = 0, temp = 1, summ = 0;

	cin >> m >> n;

	for (int number = 1; number <= m; number++)
	{
		temp = 1;
		for (int degree = 1; degree <= n; degree++)
		{
			temp *= number;
		}
		summ += temp;
	}
	cout << summ;
}

void task_24()
{
	int n = 0;

	cin >> n;

	for (int hundreds = 1; hundreds <= 9; hundreds++)
	{
		for (int tens = 0; tens <= 9; tens++)
		{
			for (int units = 0; units <= 9; units++)
			{
				if (hundreds + tens + units == n)
					cout << hundreds << tens << units << endl;
			}
		}
	}
}

void task_25()
{
	vector<int> data{ 100, 200, 300, 500, 1000, 1200, 1400, 1500, 2000, 3000 };
	vector<int> combines;

	int counter = 0;
	int temp = 0;
	int v = 0;

	for (int a = 0; a < data.size(); a++)
	{
		for (int b = a + 1; b < data.size(); b++)
		{
			for (int c = b + 1; c < data.size(); c++)
			{
				for (int d = c + 1; d < data.size(); d++)
				{
					for (int e = d + 1; e < data.size(); e++)
					{
						for (int f = e + 1; f < data.size(); f++)
						{
							for (int g = f + 1; g < data.size(); g++)
							{
								for (int h = g + 1; h < data.size(); h++)
								{
									for (int i = h + 1; i < data.size(); i++)
									{
										for (int j = i + 1; j < data.size(); j++)
										{
											combines.push_back(data[a] + data[b] + data[c] + data[d] + data[e] + data[f] + data[g] + data[h] + data[i] + data[j]);
										}
										combines.push_back(data[a] + data[b] + data[c] + data[d] + data[e] + data[f] + data[g] + data[h] + data[i]);
									}
									combines.push_back(data[a] + data[b] + data[c] + data[d] + data[e] + data[f] + data[g] + data[h]);
								}
								combines.push_back(data[a] + data[b] + data[c] + data[d] + data[e] + data[f]);
							}
							combines.push_back(data[a] + data[b] + data[c] + data[d] + data[e]);
						}
						combines.push_back(data[a] + data[b] + data[c] + data[d]);
					}
					combines.push_back(data[a] + data[b] + data[c]);
				}
				combines.push_back(data[a] + data[b]);
			}
			combines.push_back(data[a]);
		}
	}

	cin >> v;

	cout << combines.size() << endl;

	for (int i = 0; i < combines.size(); i++)
		if (combines[i] == v)
			counter++;

	cout << counter;
}

// функиця проверки простого числа (для 26)
bool is_common_number(int number)
{
	int counter = 0;

	for (int i = 1; i <= number; i++)
		if (number % i == 0)
			counter++;

	if (counter == 2)
		return true;
	else
		return false;
}

void task_26()
{
	int number = 0;
	int current_divider = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_2();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cin >> number;

			cout << "Простые делители числа" << number << ": ";

			for (int divider = 2; divider <= number; divider++)
			{
				if (!is_common_number(divider))
					continue;
				else if (number == 1)
					break;
				else if (number % divider == 0)
				{
					number /= divider;

					if (divider != current_divider)
						cout << divider;

					current_divider = divider;

					divider = 1;
				}
			}

			cout << endl;
			break;

		case('2'):
			system("cls");

			cin >> number;

			cout << number << " = ";

			for (int divider = 2; divider <= number; divider++)
			{
				if (!is_common_number(divider))
					continue;
				else if (number == 1)
					break;
				else if (number % divider == 0)
				{
					number /= divider;
					cout << divider << " * ";
					divider = 1;
				}
			}

			cout << 1;

			cout << endl;
			break;
		}
	}
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 26 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 26.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		choose_task();
	}
	else
	{
		switch (x)
		{
		case 1:
			system("cls");
			task_1();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 2:
			system("cls");
			task_2();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 3:
			system("cls");
			task_3();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 4:
			system("cls");
			task_4();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 5:
			system("cls");
			task_5();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 6:
			system("cls");
			task_6();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 7:
			system("cls");
			task_7();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 8:
			system("cls");
			task_8();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 9:
			system("cls");
			task_9();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 10:
			system("cls");
			task_10();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 11:
			system("cls");
			task_11();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 12:
			system("cls");
			task_12();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 13:
			system("cls");
			task_13();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 14:
			system("cls");
			task_14();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 15:
			system("cls");
			task_15();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 16:
			system("cls");
			task_16();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 17:
			system("cls");
			task_17();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 18:
			system("cls");
			task_18();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 19:
			system("cls");
			task_19();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 20:
			system("cls");
			task_20();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 21:
			system("cls");
			task_21();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 22:
			system("cls");
			task_22();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 23:
			system("cls");
			task_23();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 24:
			system("cls");
			task_24();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 25:
			system("cls");
			task_25();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 26:
			system("cls");
			task_26();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}