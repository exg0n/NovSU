#define _USE_MATH_DEFINES

#include <iostream>
#include <stdlib.h> // Вызов функций rand() и srand()
#include <time.h> // Вызов функции time()
#include <vector>
#include <iomanip> // для << fixed << setprecision
#include <random> // для функций рандома в 4 задании и дальше

using namespace std;

void print_vec(vector<int>& input_vector, int accuracy)
{
	for (int i = 0; i < input_vector.size(); i++)
		cout << fixed << setprecision(accuracy) << input_vector[i] << endl;
}

int random_number_sensor(int left_border, int right_border)
{
	random_device rnd;
	mt19937 generate(rnd());
	uniform_int_distribution <int> rnd_range(left_border, right_border);

	return rnd_range(generate);
}

// Функция рандома int
int get_random_number(int min, int max)
{
	return min + rand() % (max - min + 1);
}

// Функция рандома double/float
double get_random_number_float(double min, double max, int precision)
{
	double value;

	// получить случайное число как целое число с порядком precision
	value = rand() % (int)pow(10, precision);

	// получить вещественное число
	value = min + (value / pow(10, precision)) * (max - min);

	return value;
}

void task_1()
{
	vector<double> data;
	int k = 0, a = 0, m = 0;
	double b = 0, q = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5' && choose != '6' && choose != '7')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5, 6, 7.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_1();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 8; i++)
				data.push_back(get_random_number_float(0.0, 0.999, 2));

			for (int i = 0; i < 8; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите кол-во генерируемых чисел: ";
			cin >> k;

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number_float(0.0, 0.999, 2));

			for (int i = 0; i < k; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('3'):
			system("cls");

			for (int i = 0; i < 15; i++)
				data.push_back(get_random_number_float(25.0, 25.999, 2));

			for (int i = 0; i < 15; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('4'):
			system("cls");

			for (int i = 0; i < 20; i++)
				data.push_back(get_random_number_float(0.0, 14.999, 2));

			for (int i = 0; i < 20; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('5'):
			system("cls");

			cin >> a >> b;

			k = get_random_number(1, a);

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number_float(0, b, 2));

			for (int i = 0; i < k; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('6'):
			system("cls");

			for (int i = 0; i < 10; i++)
				data.push_back(get_random_number_float(-40.0, 39.999, 2));

			for (int i = 0; i < 10; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;

		case('7'):
			system("cls");

			cin >> m >> q >> b;

			k = get_random_number(1, m);

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number_float(q, b, 2));

			for (int i = 0; i < k; i++)
				cout << fixed << setprecision(2) << data[i] << endl;

			cout << endl;
			break;
		}
	}
}

void task_2()
{
	vector<double> data;
	int a = 0, k = 0, b = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_1();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i <= 10; i++)
				data.push_back(get_random_number(0, 10));
			for (int i = 0; i <= 10; i++)
				cout << data[i] << endl;

			cout << endl;
			break;

		case('2'):
			system("cls");

			cin >> k >> a;

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number(0, a));
			for (int i = 0; i < k; i++)
				cout << data[i] << endl;

			cout << endl;
			break;

		case('3'):
			system("cls");

			for (int i = 0; i < 20; i++)
				data.push_back(get_random_number(10, 20));
			for (int i = 0; i < 20; i++)
				cout << data[i] << endl;

			cout << endl;
			break;

		case('4'):
			system("cls");

			cout << "Введите кол-во чисел: ";
			cin >> k;
			cout << "Введите диапазон чисел: ";
			cin >> a;

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number(-10, a));
			for (int i = 0; i < k; i++)
				cout << data[i] << endl;

			cout << endl;
			break;

		case('5'):
			system("cls");

			cout << "Введите диапазон чисел a: ";
			cin >> a;
			cout << "Введите диапазон чисел b: ";
			cin >> b;

			k = get_random_number(1, 15);

			for (int i = 0; i < k; i++)
				data.push_back(get_random_number(a, b));
			for (int i = 0; i < k; i++)
				cout << data[i] << endl;

			cout << endl;
			break;
		}
	}
}

void task_3()
{
	// вектор для хранения неотрицательных (от 0 до беск.) чисел
	vector<double> data_size_t;
	// вектор для хранения целых (от -беск. до +беск.) чисел
	vector<double> data_int;
	int a = 0, b = 0, n = 0, m = 0;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;

	m = get_random_number(1, 20);
	n = get_random_number(1, 20);

	cout << "m: " << m << endl;
	cout << "n: " << n << endl;

	// заполнение массива целых чисел рандомом. кол-во чисел - n
	for (int i = 0; i < n; i++)
		data_int.push_back(get_random_number(a, b));

	// заполнение массива натуральных чисел рандомом. кол-во чисел - n
	for (int i = 0; i < m; i++)
		/* важно, что нужно рандомить неотрицательные числа, поэтому левая
		0, а правая - n (по заданию)*/
		data_size_t.push_back(get_random_number(0, n));

	cout << "Вывод " << n << " случайных натуральных чисел в диапазоне от "
		<< a << " до " << b << " включительно:" << endl;
	for (int i = 0; i < n; i++)
		cout << data_int[i] << endl;

	cout << "Вывод " << n << " случайных натуральных чисел в диапазоне от 0 до "
		<< b << " включительно:" << endl << endl;
	for (int i = 0; i < m; i++)
		cout << data_size_t[i] << endl;
}

void task_4()
{
	vector <int> data;

	for (int i = 0; i < 50; i++)
		data.push_back(random_number_sensor(0, 3));

	for (int i = 0; i < 50; i++)
		if (data[i] == 1 || data[i] == 0)
			cout << data[i] << endl;
}

void task_5()
{
	vector <int> data;

	for (int i = 0; i < 30; i++)
		data.push_back(random_number_sensor(0, 5));

	for (int i = 0; i < 30; i++)
		if (data[i] % 2 == 1)
			cout << data[i] << endl;
}

void task_6()
{
	double x = 0, y = 0, counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_1();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 1e6; i++)
			{
				x = get_random_number_float(0, M_PI, 4);
				y = get_random_number_float(0, 1, 4);

				if (y < sin(x))
					counter++;
			}
			cout << double(counter) / 1e6 * M_PI;

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 1e6; i++)
			{
				x = get_random_number_float(0, 3, 4);
				y = get_random_number_float(0, 9, 4);

				if (y >= 0 && y <= pow(x, 2) && x <= 3)
					counter++;
			}
			cout << double(counter) / 1e6 * M_PI;

			cout << endl;
			break;
		}
	}

}

void task_7()
{
	random_device rnd;
	mt19937 generate(rnd());
	uniform_real_distribution<double> rnd_range(-1.0, 1.0);

	double x = 0, y = 0, counter = 0, S = 0;

	for (int i = 0; i < 1e6; i++)
	{
		x = rnd_range(generate);
		y = rnd_range(generate);

		if (sqrt(pow(x, 2) + pow(y, 2)) <= 1)
			counter++;
	}

	S = 4.0 * counter / 1e6;

	cout << S;
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 7 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 12.\nПовторите попытку.\n";
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
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}