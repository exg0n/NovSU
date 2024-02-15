#include <iostream>

#define _USE_MATH_DEFINES // Штука позволяет писать больше знаков после запятой :)
#define M_PI 3.14159265358979323846 // Константа

using namespace std;

void task_1()
{
	double number_1 = 0;
	double number_2 = 0;

	cout << "Введите число 1: ";
	cin >> number_1;

	cout << "Введите число 2: ";
	cin >> number_2;

	if (number_1 > number_2)
	{
		cout << "а) Число " << number_1 << " больше чем " << number_2 << "\nб) Число " << number_2 << " больше чем " << number_1;
	}
	else if (number_1 < number_2)
	{
		cout << "а) Число " << number_2 << " больше чем " << number_1 << "\nб) Число " << number_1 << " меньше чем " << number_2;
	}
	else
	{
		cout << "Числа равны";
	}
}

void task_2()
{
	double x = 0;

	cout << "Введите x: ";
	cin >> x;

	if (x > 0)
		cout << "При x > 0 y = " << pow(sin(x), 2);
	else
		cout << "При x < 0 y = " << 1 - 2 * pow(sin(x), 2);
}

void task_3()
{
	double x = 0;

	cout << "Введите x: ";
	cin >> x;

	if (x > 0)
		cout << "При x > 0 y = " << pow(sin(x), 2);
	else
		cout << "При x < 0 y = " << 1 + 2 * pow(sin(x), 2);
}

void task_4()
{
	int x = 0;
	int y = 0;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	if (x > 4)
		cout << "Точка находится в области #2";
	else
		cout << "Точка находится в области #1";
}

void task_5()
{
	int x = 0;
	int y = 0;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	if (y > 3)
		cout << "Точка находится в области #1";
	else
		cout << "Точка находится в области #2";
}

void task_6()
{
	double x = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите x: ";
			cin >> x;

			if (x >= 2)
				cout << "y = " << 2;
			else
				cout << "y = " << x;
			
			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите x: ";
			cin >> x;

			if (x >= 3)
				cout << "y = " << -3;
			else
				cout << "y = " << -x;

			cout << endl;
			break;
		}
	}
}

void task_7()
{
	double x = 0;
	double k = 0;

	cout << "Введите x: ";
	cin >> x;

	if (sin(x) < 0)
		k = pow(x, 2);
	else if (x >= 0)
		k = abs(x);

	if (k < x)
		cout << "f(x) = " << k * x;
	else if (k >= x)
		cout << "f(x) = " << k + x;
}

void task_8()
{
	double x = 0;
	double k = 0;

	cout << "Введите x: ";
	cin >> x;

	if (sin(x) >= 0)
		k = pow(x, 2);
	else if (sin(x) < 0)
		k = abs(x);

	if (x < k)
		cout << "f(x) = " << abs(x);
	else if (x >= k)
		cout << "f(x) = " << k * x;
}

void task_9()
{
	double x = 0;
	double y = 0;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	if (x > y)
		cout << "Максимальное: " << x << "\nМинимальное: " << y;
	else
		cout << "Максимальное: " << y << "\nМинимальное: " << x;
}

void task_10()
{
	double km = 0;
	double ft = 0;

	cout << "Введите расстояние в киллометрах: ";
	cin >> km;
	cout << "Введите расстояние в футах: ";
	cin >> ft;

	if (km * 1000 > ft * 0.3048)
		cout << km << " киллометров больше чем " << ft << " футов";
	else if (km * 1000 < ft * 0.3048)
		cout << km << " киллометров меньше чем " << ft << " футов";
	else
		cout << "Расстояния равны";
}

void task_11()
{
	double kmh = 0;
	double ms = 0;

	cout << "Введите км/ч: ";
	cin >> kmh;
	cout << "Введите м/с: ";
	cin >> ms;

	if (kmh / 3.6 > ms)
		cout << kmh << " км/ч быстрее чем " << ms << "м/с";
	else if (kmh / 3.6 < ms)
		cout << kmh << " км/ч медленее чем " << ms << "м/с";
	else
		cout << "Скорость одинаковая";
}

void task_12()
{
	double circle_radius = 0;
	double side_of_square = 0;

	cout << "Введите сторону квадрата: ";
	cin >> side_of_square;
	cout << "Введите радиус круга: ";
	cin >> circle_radius;

	if (pow(side_of_square, 2) > M_PI * pow(circle_radius, 2))
		cout << "Площадь квадрата больше";
	else if (pow(side_of_square, 2) < M_PI * pow(circle_radius, 2))
		cout << "Площадь круга больше";
	else
		cout << "Они равны";
}

void task_13()
{
	double m1 = 0, m2 = 0, v1 = 0, v2 = 0;

	cout << "Введите массу первого тела: ";
	cin >> m1;
	cout << "Введите объем первого тела: ";
	cin >> v1;
	cout << "Введите массу второго тела: ";
	cin >> m2;
	cout << "Введите объем второго тела: ";
	cin >> v2;

	if (m1 / v1 > m2 / v2)
		cout << "Объем первого тела больше";
	else if (m1 / v1 < m2 / v2)
		cout << "Объем второго тела больше";
	else
		cout << "Объемы равны";
}

void task_14()
{
	double u1 = 0, u2 = 0;
	double r1 = 0, r2 = 0;

	cout << "Введите напряжение первого участка: ";
	cin >> u1;
	cout << "Введите сопротивление первого участка: ";
	cin >> r1;
	cout << "Введите напряжение второго участка: ";
	cin >> u2;
	cout << "Введите сопротивление второго участка: ";
	cin >> r2;

	if (u1 / r1 > u2 / r2)
		cout << "По второму участку протекает меньший ток";
	else if (u1 / r1 < u2 / r2)
		cout << "По первому участку протекает меньший ток";
	else
		cout << "Участки равны";
}

void task_15()
{
	double a = 0, b = 0, c = 0;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;

	if (pow(b, 2) - 4 * a * c >= 0)
		cout << "Корни есть";
	else
		cout << "Корней нет";
}

void task_16()
{
	double a = 0, b = 0, c = 0;
	double d = 0, x1 = 0, x2 = 0;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;

	d = pow(b, 2) - 4 * a * c >= 0;

	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);

		cout << "Корень 1: " << x1 << endl << "Корень 2: " << x2;
	}
	else if (pow(b, 2) - 4 * a * c <= 0)
		cout << "Корней нет";
}

void task_17()
{
	int year_of_birth = 0, month_of_birth = 0, current_year = 0, current_month = 0;

	cout << "Введите год рождение человека: ";
	cin >> year_of_birth;
	cout << "Введите месяц рождение человека: ";
	cin >> month_of_birth;

	cout << "Введите сегодшний год: ";
	cin >> current_year;
	cout << "Введите сегодшний месяц: ";
	cin >> current_month;

	if (current_month < month_of_birth)
		cout << "Возраст человека: " << current_year - year_of_birth - 1;
	else
		cout << "Возраст человека: " << current_year - year_of_birth;
}

void task_18()
{
	double s_circle = 0, s_square = 0;
	double side_of_square = 0, radius_of_circle = 0;
	double diametr_of_circle = 0, diagonal_of_square = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите площадь круга: ";
			cin >> s_circle;
			cout << "Введите площадь квадрата: ";
			cin >> s_square;

			side_of_square = sqrt(s_square);
			radius_of_circle = sqrt(s_circle / M_PI);

			if (side_of_square / 2 >= radius_of_circle)
				cout << "Круг уместится в квадрате";
			else
				cout << "Круг не уместится в квадрате";

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите площадь круга: ";
			cin >> s_circle;
			cout << "Введите площадь квадрата: ";
			cin >> s_square;

			side_of_square = sqrt(s_square);
			radius_of_circle = sqrt(s_circle / M_PI);
			diametr_of_circle = radius_of_circle * 2;
			diagonal_of_square = sqrt(pow(side_of_square, 2) * 2);

			if (diametr_of_circle >= diagonal_of_square)
				cout << "Квадрт уместится в круге";
			else
				cout << "Квадрат не уместится в круге";
			cout << endl;
			break;
		}
	}
}

void task_19()
{
	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		double a = 0, b = 0, c = 0;

		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите a: ";
			cin >> a;
			cout << "Введите b: ";
			cin >> b;
			cout << "Введите c: ";
			cin >> c;

			if (a < b < c)
				cout << "Неравенство выполняется";
			else
				cout << "Неравенство не выполняется";

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите a: ";
			cin >> a;
			cout << "Введите b: ";
			cin >> b;
			cout << "Введите c: ";
			cin >> c;

			if (b > a > c)
				cout << "Неравенство выполняется";
			else
				cout << "Неравенство не выполняется";

			cout << endl;
			break;
		}
	}
}

void task_20()
{
	double x = 0, y = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите x: ";
			cin >> x;
			cout << "Введите y: ";
			cin >> y;

			if (x >= 2 && y >= 2)
				cout << "Точка принадлежит области #1";
			else
				cout << "Точка не принадлежит области #1";

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите x: ";
			cin >> x;
			cout << "Введите y: ";
			cin >> y;

			if (x >= -2 && y >= -4)
				cout << "Точка принадлежит области #1";
			else
				cout << "Точка не принадлежит области #1";

			cout << endl;
			break;
		}
	}
}

void task_21()
{
	int x = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите натуральное число: ";
			cin >> x;

			if (x % 2)
				cout << "Число четное";
			else
				cout << "Число не четное";

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите число: ";
			cin >> x;

			if (x % 10 == 7)
				cout << "Число оканчивается цифрой 7";

			cout << endl;
			break;
		}
	}
}

void task_22()
{
	int number = 0;
	int units = 0, tens = 0, hundreds = 0;

	cout << "Введите трехзначное число: ";
	cin >> number;

	units = number % 10;
	tens = (number / 10) % 10;
	hundreds = number / 100;

	if (pow(number, 2) == pow(units, 3) + pow(tens, 3) + pow(hundreds, 3))
		cout << "Квадрат числа равен сумме кубов его цифр";
	else
		cout << "Квадрат числа не равен сумме кубов его цифр";
}

void task_23()
{
	double x = 0, y = 0, max = 0, min = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите первое вещесвтенное число: ";
			cin >> x;
			cout << "Введите втрое вещесвтенное число: ";
			cin >> y;

			if (x > y)
				cout << "Наибольшее: " << x << endl;
			if (x < y)
				cout << "Наибольшее: " << y;


			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите первое вещесвтенное число: ";
			cin >> x;
			cout << "Введите втрое вещесвтенное число: ";
			cin >> y;

			max = y;

			if (x > y)
				max = x;

			cout << "Наибольшее: " << max;

			cout << endl;
			break;
		}
	}
}

void task_24()
{
	double x = 0, y = 0, max = 0, min = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите первое вещесвтенное число: ";
			cin >> x;
			cout << "Введите втрое вещесвтенное число: ";
			cin >> y;

			if (x < y)
			{
				cout << "Наименьшее: " << x << endl;
				cout << "Наибольшее: " << y;
			}
			if (x > y)
			{
				cout << "Наименьшее: " << y << endl;
				cout << "Наибольшее: " << x;
			}


			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите первое вещесвтенное число: ";
			cin >> x;
			cout << "Введите втрое вещесвтенное число: ";
			cin >> y;

			max = y;
			min = x;

			if (x > y)
			{
				max = x;
				min = y;
			}
			cout << "Наименьшее: " << min << endl;
			cout << "Наибольшее: " << max;

			cout << endl;
			break;
		}
	}
}

void task_25()
{
	double number_1 = 0, number_2 = 0, number_3 = 0;
	double min = 0, max = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_6();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			cout << "Введите первое вещественное число: ";
			cin >> number_1;
			cout << "Введите второе вещественное число: ";
			cin >> number_2;
			cout << "Введите третье вещественное число: ";
			cin >> number_3;

			max = number_2;

			if (number_1 > number_2)
				max = number_1;

			if (number_3 > max)
				max = number_3;

			cout << "Наибольшее: " << max;

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите первое вещественное число: ";
			cin >> number_1;
			cout << "Введите второе вещественное число: ";
			cin >> number_2;
			cout << "Введите третье вещественное число: ";
			cin >> number_3;

			min = number_2;

			if (number_1 < number_2)
				min = number_1;

			if (number_3 < min)
				min = number_3;

			cout << "Наименьшее: " << min;

			cout << endl;
			break;
		}
	}
}

void task_26()
{
	double number_1 = 0, number_2 = 0, number_3 = 0, number_4 = 0, number_5 = 0, number_6 = 0, result = 0;

	cout << "Введите число 1: ";
	cin >> number_1;
	cout << "Введите число 2: ";
	cin >> number_2;
	cout << "Введите число 3: ";
	cin >> number_3;
	cout << "Введите число 4: ";
	cin >> number_4;
	cout << "Введите число 5: ";
	cin >> number_5;
	cout << "Введите число 6: ";
	cin >> number_6;

	if (number_1 >= 0)
		result += number_1;
	if (number_2 >= 0)
		result += number_2;
	if (number_3 >= 0)
		result += number_3;
	if (number_4 >= 0)
		result += number_4;
	if (number_5 >= 0)
		result += number_5;
	if (number_6 >= 0)
		result += number_6;

	cout << "Сумма положительных чисел = " << result;
}

void task_27()
{
	double x = 0, y = 0;

	cout << "Введите x: ";
	cin >> x;

	y = 1;

	if (x < -1)
		y = -1;
	else if (x > -1)
		y = x;

	cout << "y(x) = " << y;
}

void task_28()
{
	double x = 0, f = 0;

	cout << "Введите x: ";
	cin >> x;

	f = pow(x, 2);

	if (x <= 0)
		f = 0;
	else if (0 < x <= 1)
		f = x;
		

	cout << "f(x) = " << f;
}

void task_29()
{
	system("cls");
	int number_of_day = 0;

	cout << "Введите номер дня: ";
	cin >> number_of_day;

	if (number_of_day == 1)
		cout << "Понедельник";
	else if (number_of_day == 2)
		cout << "Вторник";
	else if (number_of_day == 3)
		cout << "Среда";
	else if (number_of_day == 4)
		cout << "Четверг";
	else if (number_of_day == 5)
		cout << "Пятница";
	else if (number_of_day == 6)
		cout << "Суббота";
	else if (number_of_day == 7)
		cout << "Воскресенье";
	else
	{
		cout << "Такого дня недели не суцествует, повторите попытку." << endl;
		system("pause");
		task_29();
	}
}

void task_30()
{
	system("cls");
	int number_of_month = 0;

	cout << "Введите номер дня: ";
	cin >> number_of_month;

	if (number_of_month == 1)
		cout << "Январь";
	else if (number_of_month == 2)
		cout << "Февраль";
	else if (number_of_month == 3)
		cout << "Март";
	else if (number_of_month == 4)
		cout << "Апрель";
	else if (number_of_month == 5)
		cout << "Май";
	else if (number_of_month == 6)
		cout << "Июнь";
	else if (number_of_month == 7)
		cout << "Июль";
	else if (number_of_month == 8)
		cout << "Август";
	else if (number_of_month == 9)
		cout << "Сентябрь";
	else if (number_of_month == 10)
		cout << "Октябрь";
	else if (number_of_month == 11)
		cout << "Ноябрь";
	else if (number_of_month == 12)
		cout << "Декабрь";
	else
	{
		cout << "Такого месяца не суцествует, повторите попытку." << endl;
		system("pause");
		task_30();
	}
}

void task_31()
{
	system("cls");
	int number_of_month = 0;

	cout << "Введите номер месяца: ";
	cin >> number_of_month;
	if (number_of_month == 12 || number_of_month == 1 || number_of_month == 2)
		cout << "Зима";
	else if (number_of_month >= 3 && number_of_month <= 5)
		cout << "Весна";
	else if (number_of_month >= 6 && number_of_month <= 8)
		cout << "Лето";
	else if (number_of_month >= 9 && number_of_month <= 11)
		cout << "Осень";
	else
	{
		cout << "Такого месяца не существует. Попробуйте ещё раз." << endl;
		system("pause");
		task_31();
	}
}

void task_32()
{
	int a = 0;
	
	cout << "Введите A: ";
	cin >> a;

	a = 5 - a;

	cout << "B = " << a % 3;
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 32 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 32.\nПовторите попытку.\n";
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
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}