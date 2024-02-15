#include <iostream>
#include <random> // для рандрма
#include <iomanip> // для << fixed << setprecision
#include <algorithm> // для reverse
#include <vector>
#include <set>

using namespace std;

// Вывод вектора
void print_vec(vector<int>& arr)
{
	for (int element : arr)
		cout << element << " ";
}
void print_vec(vector<double>& arr)
{
	for (double element : arr)
		cout << element << " ";
}

// Функция рандома
int random_number_sensor(int left_border, int right_border)
{
	random_device rnd;
	mt19937 generate(rnd());
	uniform_int_distribution <int> rnd_range(left_border, right_border);

	return rnd_range(generate);
}
double random_number_sensor(double left_border, double right_border)
{
	random_device rnd;
	mt19937 generate(rnd());
	uniform_real_distribution <double> rnd_range(left_border, right_border);

	return rnd_range(generate);
}

// Проверка на простое число
bool is_common(int number)
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

void task_1()
{
	int number[8] = { 37, 0, 50, 46, 34, 46, 0, 13 };

	for (int i = 0; i < 8; i++)
		cout << number[i] << " ";
}

void task_2()
{
	const int array_size = 10;
	int array[array_size];

	cout << "Введите " << array_size << " чисел для заполнения массива: " << endl;

	for (int i = 0; i < array_size; i++)
	{
		cout << "Элемент " << i + 1 << ": ";
		cin >> array[i];
	}

	cout << "Вы ввели следующие значения: ";
	for (int i = 0; i < array_size; i++)
		cout << array[i] << " ";
}

void task_3()
{
	double array[15];
	int array_int[15];

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_3();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 15; i++)
				array[i] = random_number_sensor(double(0.0), double(1.0));

			cout << "Рандомное вещественное число от 0 до 1: ";
			for (int i = 0; i < 15; i++)
				cout << fixed << setprecision(2) << array[i] << " ";

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 15; i++)
				array[i] = random_number_sensor(double(22.0), double(23.0));

			cout << "Рандомное вещественное число от 22 до 23: ";
			for (int i = 0; i < 15; i++)
				cout << fixed << setprecision(2) << array[i] << " ";

			cout << endl;
			break;
		case('3'):
			system("cls");

			for (int i = 0; i < 15; i++)
				array[i] = random_number_sensor(double(0.0), double(10.0));

			cout << "Рандомное вещественное число от 0 до 1: ";
			for (int i = 0; i < 15; i++)
				cout << fixed << setprecision(2) << array[i] << " ";

			cout << endl;
			break;
		case('4'):
			system("cls");

			for (int i = 0; i < 15; i++)
				array[i] = random_number_sensor(double(-50.0), double(50.0));

			cout << "Рандомное вещественное число от 0 до 1: ";
			for (int i = 0; i < 15; i++)
				cout << fixed << setprecision(2) << array[i] << " ";

			cout << endl;
			break;
		case('5'):
			system("cls");

			for (int i = 0; i < 15; i++)
				array_int[i] = random_number_sensor(0, 10);

			cout << "Рандомное вещественное число от 0 до 1: ";
			for (int i = 0; i < 15; i++)
				cout << array_int[i] << " ";

			cout << endl;
			break;
		}
	}
}

void task_4()
{
	int array_size = 0, a = 0, b = 0;

	cout << "Введите размер массива: ";
	cin >> array_size;

	// Создание массива с помощью динамического выделения памяти
	int* array = new int[array_size];

	cout << "Введите диапазон a: ";
	cin >> a;
	cout << "Введите диапазон b: ";
	cin >> b;

	for (int i = 0; i < a; i++)
		array[i] = random_number_sensor(0, a);
	for (int i = 0; i < b; i++)
		array[i] = random_number_sensor(0, b);

	cout << "Массив из " << array_size << " чисел в диапазоне от " << a << " до " << b << ": ";
	for (int i = 0; i < b; i++)
		cout << array[i] << " ";
}

void task_5()
{
	int array_size = 0, index = 0;

	cout << "Введите размер массива: ";
	cin >> array_size;

	// Создание массива с помощью динамического выделения памяти
	int* array = new int[array_size];

	for (int i = 0; i < array_size; i++)
	{
		cout << "Элемент " << i << ": ";
		cin >> array[i];
	}

	cout << endl << "Введите индекс элемента для вывода: ";
	cin >> index;

	if (index >= 0 && index < array_size)
		cout << endl << "Элемент с индексом " << index << ": " << array[index] << endl;
	else
		cout << "Введен некорректный индекс." << endl;
}

void task_6()
{
	int array_size = 0, index = 0;

	cout << "Введите размер массива: ";
	cin >> array_size;

	// Создание массива с помощью динамического выделения памяти
	int* array = new int[array_size];

	for (int i = 0; i < array_size; i++)
	{
		cout << "Элемент " << i << ": ";
		cin >> array[i];
	}

	// Переворачиваем массив
	reverse(array, array + array_size);

	cout << "Перевернутый массив: ";
	for (int i = 0; i < array_size; i++)
		cout << array[i];
}

void task_7()
{	
	vector<int> array;

	for (int i = 1; i <= 25; i++)
		array.push_back(i);

	array.push_back(100);
	array.push_back(200);

	cout << "Массив после заполнения: ";
	for (int i = 0; i < array.size(); i++)
		cout << array[i] << " ";
}

void task_8()
{
	int n = 0;

	cout << "Введите степень n: ";
	cin >> n;

	int* array = new int[n];

	for (int i = 0; i < n; i++)
		array[i] = pow(2, i + 1);

	cout << "Массив степеней числа 2: ";
	for (int i = 0; i < n; ++i)
		cout << array[i] << " ";
}

void task_9()
{
	vector<int> array(6, 0);

	int n = 0;
	
	cout << "Введите число n <= 999999: ";
	cin >> n;

	for (int i = 0; n > 0; i++)
	{
		array[i] = n % 10;
		n /= 10;
	}

	print_vec(array);
}

void task_10()
{
	int fibonacci[10] = { 0 };
	fibonacci[0] = 1;
	fibonacci[1] = 1;

	for (int i = 2; i < 10; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	cout << "Первые 10 чисел последовательности Фибоначчи: ";
	for (int i = 0; i < 10; ++i)
		cout << fibonacci[i] << " ";
}

void task_11()
{
	vector<int> arr;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_11();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 300; arr.size() < 20; i++)
				if (i % 13 == 0 || i % 17 == 0)
					arr.push_back(i);
			print_vec(arr);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 2; arr.size() < 30; i++)
				if (is_common(i) == true)
					arr.push_back(i);
			print_vec(arr);

			cout << endl;
			break;
		}
	}
}

void task_12()
{
	vector<int> arr;
	int num = 0;
	bool flag = true;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_12();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			while (arr.size() < 20)
			{
				flag = true;

				num = random_number_sensor(1, 100);

				for (int element : arr)
				{
					if (element == num)
					{
						flag = false;
						break;
					}
				}
				if (flag == true)
					arr.push_back(num);
			}

			print_vec(arr);

			cout << endl;
			break;

		case('2'):
			system("cls");

			set<int> arr;
			int num = 0;

			while (arr.size() < 20)
			{
				num = random_number_sensor(1, 100);

				arr.insert(num);
			}

			for (int element : arr)
				cout << element << " ";

			cout << endl;
			break;
		}
	}
}

void task_13()
{
	vector<int> arr;

	for (int i = 0; i < 50; i++)
		arr.push_back(random_number_sensor(1, 100));

	print_vec(arr);
	cout << endl;

	cout << "Четные элементы массива: ";
	for (int i = 0; i < arr.size(); i += 2)
		cout << arr[i] << " ";

	cout << endl;

	cout << "Нечетные элементы массива: ";
	for (int i = 1; i < arr.size(); i += 2)
		cout << arr[i] << " ";

}

void task_14()
{
	vector<double> arr;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_14();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 100; i++)
				arr.push_back(random_number_sensor(-100.0, 100.0));

			for (int i = 0; i < arr.size(); i++)
				if (arr[i] < 0)
					arr[i] = abs(arr[i]);

			print_vec(arr);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 100; i++)
				arr.push_back(random_number_sensor(1.0, 100.0));

			for (int i = 1; i < arr.size(); i += 2)
				arr[i] = sqrt(arr[i]);

			print_vec(arr);

			cout << endl;
			break;
		}
	}
}

void task_15()
{
	vector<double> arr;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_15();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 100; i++)
				arr.push_back(random_number_sensor(1.0, 100.0));

			for (int i = 0; i < arr.size(); i++)
				if (arr[i] > 10)
					arr[i] = sqrt(arr[i]);

			print_vec(arr);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 100; i++)
				arr.push_back(random_number_sensor(0.0, 100.0));

			for (int i = 0; i < arr.size(); i += 1)
				arr[i] = abs(arr[i]);

			print_vec(arr);


			cout << endl;
			break;
		}
	}
}

void task_16()
{
	vector<double> arr;
	int a = 1, b = 2, c = 3;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_15();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(-100.0, 100.0));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] < 0)
					arr[i] += arr[0];
				if (arr[i] == 0)
					arr[i] -= b;
			}

			print_vec(arr);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(-100.0, 100.0));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] > 0)
					arr[i] += a;
				if (arr[i] < 0)
					arr[i] -= b;
				if (arr[i] == 0)
					arr[i] += c;
			}

			print_vec(arr);

			cout << endl;
			break;
		}
	}
}

void task_17()
{
	vector<double> arr;
	int a = 0, b = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 5: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_15();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номер элемента массива: ";
			cin >> a;

			cout << "Квадртный корень " << a << " элемента массва: " << sqrt(arr[a]);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номера элементов массива: ";
			cin >> a >> b;

			cout << "Среднее арифметическое " << a << " и " << b << " элементов массива: " << (arr[a] + arr[b]) / 2;

			cout << endl;
			break;
		}
	}
}

void task_18()
{
	vector<int> arr;
	int s = 0, k = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 3: 1, 2, 3.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_18();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(-100, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номер элемента массива: ";
			cin >> s;

			if (arr[s] > 0)
				cout << "True";
			else
				cout << "False";

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(-100, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номер элемента массива: ";
			cin >> k;

			if (arr[k] % 2 == 0)
				cout << "True";
			else
				cout << "False";

			cout << endl;
			break;
		case('3'):
			system("cls");

			for (int i = 0; i < 10; i++)
				arr.push_back(random_number_sensor(-100, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номера элементов массива: ";
			cin >> k >> s;

			if (arr[k] > arr[s])
				cout << "Элемент под номером " << k << " больше элемента " << s;
			else if (arr[k] < arr[s])
				cout << "Элемент под номером " << k << " меньше элемента " << s;
			else
				cout << "Они равны";


			cout << endl;
			break;
		}
	}
}

void task_19()
{
	vector<int> arr;
	int summ = 0, k1 = 0, k2 = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5' && choose != '6' && choose != '7')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5, 6, 7.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_19();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
				summ += arr[i];

			cout << "Сумма всех элементов массива: " << summ;

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
				summ *= arr[i];

			cout << "Произведение всех элементов массива: " << summ;

			cout << endl;
			break;
		case('3'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
				summ += pow(arr[i], 2);

			cout << "Сумма квадратов всех элементов массива: " << summ;

			cout << endl;
			break;
		case('4'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < 6; i++)
				summ += arr[i];

			cout << "Сумма первых шести элементов массива: " << summ;

			cout << endl;
			break;
		case('5'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номера элементов массива (k2 > k1): ";
			cin >> k1 >> k2;

			for (int i = k1; i < k2; i++)
				summ += arr[i];

			cout << "Сумма с k1 по k2 элементов массива: " << summ;

			cout << endl;
			break;
		case('6'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			for (int i = 0; i < arr.size(); i++)
				summ += arr[i];

			cout << "Среднее арифметическое всех элементов массива: " << double(summ) / arr.size();

			cout << endl;
			break;
		case('7'):
			system("cls");

			for (int i = 0; i < 50; i++)
				arr.push_back(random_number_sensor(1, 100));

			print_vec(arr);
			cout << endl;

			cout << "Введите номера элементов массива: ";
			cin >> k1 >> k2;

			for (int i = k1; i < k2; i++)
				summ += arr[i];

			cout << "Среднее арифметическое чисел с k1 по k2 элементов массива: " << double(summ) / (k2 - k1);

			cout << endl;
			break;
		}
	}
}

void task_20()
{
	vector<int> arr;
	int summ = 0;

	for (int i = 0; i < 10; i++)
		arr.push_back(random_number_sensor(1, 100));

	print_vec(arr);
	cout << endl;

	for (int i = 1; i < arr.size(); i += 2)
		summ -= arr[i];

	for (int i = 0; i < arr.size(); i += 2)
		summ += arr[i];

	cout << "Знакопеременная сумма: " << summ;
}

void task_21()
{
	vector<int> arr;
	int summ = 0;

	for (int i = 0; i < 12; i++)
		arr.push_back(random_number_sensor(1, 100));

	print_vec(arr);
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
		summ += arr[i];

	cout << "Сумма 12 товаров: " << summ;
}

void task_22()
{
	vector<int> arr;
	int counter = 0;

	for (int i = 0; i < 25; i++)
		arr.push_back(random_number_sensor(2, 5));

	print_vec(arr);
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < 3)
			counter++;
	}
	cout << "Колл-во неуспевающих учеников: " << counter;
		
}

void task_23()
{
	vector<int> arr;

	int day = 0, s = 135;

	// Кол-во + стоимость товаров
	for (int i = 0; i < 31; i++)
		arr.push_back(random_number_sensor(1, 500));

	print_vec(arr);
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > s)
			day++;
	}

	cout << "Кол-во дней в которые стоимость проданных товаров превысила значение " << s << " : " << day;
}

void task_24()
{
	vector<int> height;
	int r = 198, counter = 0;

	for (int i = 0; i < 22; i++)
		height.push_back(random_number_sensor(150, 210));

	print_vec(height);
	cout << endl;

	for (int i = 0; i < height.size(); i++)
	{
		if (height[i] <= r)
			counter++;
	}

	cout << "Кол-во учеников с ростом не превышающее " << r << "см: " << counter;
}

void task_25()
{
	vector<int> arr;
	int a = 0, b = 0, counter = 0;

	cout << "Введите диапазон a и b: ";
	cin >> a >> b;

	cout << endl;

	for (int i = 0; i < 30; i++)
		arr.push_back(random_number_sensor(0, 100));

	print_vec(arr);
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
		if (arr[i] >= a && arr[i] <= b)
			counter++;

	cout << counter;
}

void task_26()
{
	vector<int> play;
	int win = 0, draw = 0;

	while (play.size() <= 20)
	{
		int a = random_number_sensor(0, 3);
		if (a != 2)
			play.push_back(a);
	}

	print_vec(play);
	cout << endl;

	for (int i = 0; i < play.size(); i++)
	{
		if (play[i] == 3)
			win++;
		if (play[i] == 1)
			draw++;
	}

	cout << "Кол-во побед: " << win << endl << "Кол-во ничьих: " << draw;
}

void task_27()
{
	vector<int> arr;
	int summ = 0, counter = 0;

	for (int i = 0; i < 22; i++)
		arr.push_back(random_number_sensor(2, 5));

	print_vec(arr);
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
		summ += arr[i];

	summ /= arr.size();

	cout << "Средняя оценка по классу: " << summ << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < summ)
			counter++;
	}

	cout << "Кол-во учеников, оценка которых меньше средней: " << counter;
}

void task_28() 
{
	vector<int> weather;
	double average = 0;

	// Кол-во осадков в мм в Мск каждый месяц за 15 лет
	for (int i = 0; i < 15; i++)
		weather.push_back(random_number_sensor(600, 700));

	print_vec(weather);
	cout << endl << endl;

	for (int element : weather)
		average += element;
	average /= weather.size();

	cout << "Среднее кол-во осадков: " << average << endl << "Отклонения: " << endl;
	
	for (int element : weather)
		cout << element - average << endl;
}

void task_29()
{
	vector <int> arr;
	double average = 0, min = 100, stas = 0;

	for (int i = 0; i < 30; i++)
		arr.push_back(random_number_sensor(0, 100));

	print_vec(arr);
	cout << endl;

	for (int element : arr)
		average += element;
	average /= arr.size();

	cout << average << endl;

	for (int element : arr)
		if (abs(element - average) < min)
		{
			min = abs(element - average);
			stas = element;
		}
	cout << stas;
}

void task_30()
{
	vector <int> numbers;
	int max = 0, min = 1000, index_min = 0, index_max = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_30();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 20; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
				if (element > max)
					max = element;
			cout << max;

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 20; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
				if (element < min)
					min = element;

			cout << min;

			cout << endl;
			break;
		case('3'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
			{
				if (element > max)
					max = element;
				if (element < min)
					min = element;
			}

			cout << "Максимальное число: " << max << endl << "Минимальное число: " << min << endl << "Максимальный элемент больше минимального на: " << max - min;

			cout << endl;
			break;
		case('4'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (numbers[i] > max)
				{
					max = numbers[i];
					index_max = i;
				}
			}

			cout << "Индекс максимального значения: " << index_max;

			cout << endl;
			break;
		case('5'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (numbers[i] > max)
				{
					max = numbers[i];
					index_max = i;
				}

				if (numbers[i] < min)
				{
					min = numbers[i];
					index_min = i;
				}
			}

			cout << "Индекс максимального значения: " << index_max << endl << "Индекс минимального значения: " << index_min;

			cout << endl;
			break;
		}
	}
}

void task_31()
{
	vector <int> numbers;
	int max = 0, min = 1000, counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4' && choose != '5')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_31();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
			{
				if (element > max)
				{
					max = element;
					counter = 0;
				}
				if (element == max)
					counter++;
			}

			cout << "Максимальный элемент массива: " << max << endl;
			cout << "Максиамльных элементов в массиве: " << counter;

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
			{
				if (element < min)
				{
					min = element;
					counter = 0;
				}
				if (element == min)
					counter++;
			}

			cout << "Минимальный элемент массива: " << min << endl;
			cout << "Минимальных элементов в массиве: " << counter;

			cout << endl;
			break;
		}
	}
}

void task_32()
{
	vector <int> numbers;

	int max = 0, pre_max = 0, min = 1e3, pre_min = 1e3, index_max = 0, index_pre_max = 0, index_min = 1e3, index_pre_min = 1e3;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_32();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
			{
				if (element > max)
					max = element;

				if (element < max && element > pre_max)
					pre_max = element;
			}

			cout << "Максимальный элемент: " << max << endl << "Предмаксимальный элемент: " << pre_max;

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
			{
				if (element < min)
					min = element;

				if (element > min && element < pre_min)
					pre_min = element;
			}

			cout << "Минимальный элемент: " << min << endl << "Предминимальный элемент: " << pre_min;

			cout << endl;
			break;

		case('3'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (numbers[i] > max)
				{
					max = numbers[i];
					index_max = i;
				}

				if (numbers[i] < max && numbers[i] > pre_max)
				{
					pre_max = numbers[i];
					index_pre_max = i;
				}
			}

			cout << "Номер максимального элемента: " << index_max << endl << "Номер предмаксимального элемента: " << index_pre_max;

			cout << endl;
			break;

		case('4'):
			system("cls");

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (numbers[i] < min)
				{
					min = numbers[i];
					index_min = i;
				}

				if (numbers[i] > min && numbers[i] < pre_min)
				{
					pre_min = numbers[i];
					index_pre_min = i;
				}
			}

			cout << "Номер минимального элемента: " << index_min << endl << "Номер предминимального элемента: " << index_pre_min;

			cout << endl;
			break;
		}
	}
}

void task_33()
{
	vector <int> numbers;
	int b = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2' && choose != '3' && choose != '4')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2, 3, 4, 5.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_33();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 20; i++)
				numbers.push_back(random_number_sensor(20, 80));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
				numbers[i] -= 20;

			print_vec(numbers);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 20; i++)
				numbers.push_back(random_number_sensor(20, 80));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
				numbers[i] *= numbers[numbers.size() - 1];

			print_vec(numbers);

			cout << endl;
			break;

		case('3'):
			system("cls");

			cout << "Введите число b: ";
			cin >> b;

			for (int i = 0; i < 30; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
				numbers[i] += b;

			print_vec(numbers);

			cout << endl;
			break;
		}
	}
}

void task_34()
{
	vector <int> numbers;
	int m = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_34();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 10; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (i == 2)
					numbers.insert(numbers.begin() + 2, 10);
			}

			print_vec(numbers);

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 10; i++)
				numbers.push_back(random_number_sensor(1, 50));

			print_vec(numbers);
			cout << endl;

			cout << "Введите номер элемента: ";
			cin >> m;

			for (int i = 0; i < numbers.size(); i++)
			{
				if (i == m)
					numbers.insert(numbers.begin() + m, 100);
			}

			print_vec(numbers);

			cout << endl;
			break;
		}
	}
}

void task_35()
{
	vector <int> numbers;
	int num_1 = 0, num_2 = 0, max = 0, pre_max = 0;

	for (int i = 0; i < 20; i++)
		numbers.push_back(random_number_sensor(1, 50));

	print_vec(numbers);
	cout << endl;

	cout << "Введите два числа для дальнейшей вставки их в массив: ";
	cin >> num_1 >> num_2;

	for (int i = 0; i < numbers.size(); i++) 
	{
		if (numbers[i] > max) 
		{
			pre_max = max;
			max = numbers[i];
		}
		else if (numbers[i] > pre_max && numbers[i] < max)
			pre_max = numbers[i];
	}

	for (int i = 0; i < numbers.size(); i++) 
	{
		if (numbers[i] == max) 
		{
			numbers.insert(numbers.begin() + i + 1, num_1);
			numbers.insert(numbers.begin() + i, num_2);
			break;
		}
	}

	print_vec(numbers);
}

void task_36()
{
	vector <int> numbers;
	int rand_temp = 0, counter_of_changes = 0;

	// false - минус
	// true - плюс
	bool current_sign = false;

	while (numbers.size() < 5)
	{
		rand_temp = random_number_sensor(-50, 50);

		if (rand_temp != 0)
			numbers.push_back(rand_temp);
	}

	print_vec(numbers);
	cout << endl;

	if (numbers[0] < 0)
		current_sign = false;
	else
		current_sign = true;

	for (int i = 1; i < numbers.size(); i++)
	{
		if (current_sign == false && numbers[i] > 0)
		{
			counter_of_changes++;
			current_sign = true;
		}
		if (current_sign == true && numbers[i] < 0)
		{
			counter_of_changes++;
			current_sign = false;
		}
	}

	cout << counter_of_changes;
}

void task_37()
{
	vector <int> numbers = {1};
	set <int> unique_numbers;

	int rand_temp = 0, counter = 1, counter_all = 0, cur_number = 0;

	while (numbers.size() < 20)
	{
		rand_temp = random_number_sensor(0, 10000);

		if (rand_temp >= numbers[numbers.size() - 1])
			numbers.push_back(rand_temp);
	}

	cur_number = numbers[0];
	unique_numbers.insert(numbers[0]);

	print_vec(numbers);
	cout << endl;

	for (int i = 1; i < numbers.size(); i++)
	{
		unique_numbers.insert(numbers[i]);

		if (numbers[i] == cur_number)
			counter++;
		else
		{
			cur_number = numbers[i];

			if(counter > 1)
				counter_all += counter;

			counter = 1;
		}
	}

	if (counter > 1)
		counter_all += counter;

	cout << endl;

	for (int element : unique_numbers)
		cout << element << " ";

	cout << endl << endl;

	cout << counter_all << " " << unique_numbers.size();
}

void task_38()
{
	vector <int> numbers;

	int counter = 0, counter_max = 0, cur_number = 0, temp = 0;

	while (numbers.size() < 20 )
		numbers.push_back(random_number_sensor(1, 5));
	

	cur_number = numbers[0];

	print_vec(numbers);
	cout << endl;

	for (int i = 1; i < numbers.size(); i++)
	{
		if (numbers[i] == cur_number && numbers[i] % 2 == 1)
			counter++;
		else
		{
			cur_number = numbers[i];

			if (counter > counter_max)
				counter_max = counter;

			counter = 1;
		}
	}

	cout << counter_max;
}

void task_39()
{
	vector <int> numbers;
	int k = 0, swap = 0;

	for (int i = 0; i < 10; i++)
		numbers.push_back(random_number_sensor(1, 10));

	print_vec(numbers);
	cout << endl;

	cout << "Введите номер элемента: ";
	cin >> k;

	swap = numbers[numbers.size() - 1];

	for (int i = numbers.size() - 1; i >= k + 1; i--)
		numbers[i] = numbers[i - 1];

	numbers[k] = swap;

	/*numbers.insert(numbers.begin() + k, numbers[numbers.size() - 1]);
	numbers.pop_back();*/

	print_vec(numbers);
}

void task_40()
{
	vector <int> numbers;
	set <int> number;

	int counter = 1;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_40();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			for (int i = 0; i < 10; i++)
				numbers.push_back(random_number_sensor(1, 20));

			print_vec(numbers);
			cout << endl;

			for (int element : numbers)
				number.insert(element);

			cout << number.size();

			cout << endl;
			break;

		case('2'):
			system("cls");

			for (int i = 0; i < 10; i++)
				numbers.push_back(random_number_sensor(1, 20));

			print_vec(numbers);
			cout << endl;

			sort(numbers.begin(), numbers.end());

			for (int i = 0; i < numbers.size() - 1; i++)
			{
				if (numbers[i] != numbers[i + 1])
					counter++;
			}

			cout << counter;

			cout << endl;
			break;
		}
	}
}

void task_41()
{
	vector <int> numbers;
	int n = 0, counter = 1;

	cout << "Введите число n: ";
	cin >> n;

	while (n > 0)
	{
		numbers.push_back(n % 10);
		n /= 10;
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < numbers.size() - 1; i++)
	{
		if (numbers[i] != numbers[i + 1])
			counter++;
	}

	cout << counter;
}

void task_42()
{
	vector <int> numbers; 

	int temp_input = 0;

	while (numbers.size() < 20)
	{
		cin >> temp_input;
		numbers.push_back(temp_input);
	}

	sort(numbers.begin(), numbers.end());

	int current_number = numbers[0];
	int counter = 1;

	for (int i = 1; i < numbers.size(); i++)
		if (numbers[i] == current_number)
			counter++;
		else
		{
			if (counter == 2)
			{
				cout << current_number << " " << current_number;
				break;
			}

			current_number = numbers[i];
			counter = 1;
		}
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 42 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 42.\nПовторите попытку.\n";
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
		case 27:
			system("cls");
			task_27();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 28:
			system("cls");
			task_28();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 29:
			system("cls");
			task_29();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 30:
			system("cls");
			task_30();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 31:
			system("cls");
			task_31();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 32:
			system("cls");
			task_32();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 33:
			system("cls");
			task_33();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 34:
			system("cls");
			task_34();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 35:
			system("cls");
			task_35();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 36:
			system("cls");
			task_36();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 37:
			system("cls");
			task_37();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 38:
			system("cls");
			task_38();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 39:
			system("cls");
			task_39();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 40:
			system("cls");
			task_40();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 41:
			system("cls");
			task_41();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 42:
			system("cls");
			task_42();
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