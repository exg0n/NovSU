#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задание #1.1\n";

	int a1 = 31;
	int b1 = 18;
	int c1 = 79;

	cout << a1 << " " << b1 << " " << c1;

	cout << "\n\nЗадание #1.2\n";

	int a2 = 47;
	int b2 = 52;
	int c2 = 150;

	cout << a2 << "  " << b2 << "  " << c2;

	cout << "\n\nЗадание #1.3\n";

	int a3 = 50;
	int b3 = 10;

	cout << a3 << '\n' << b3;

	cout << "\n\nЗадание #1.4\n";

	// Обратных тригонометрических функция с помощью арккосинуса:
	const double PI = acos(-1.0);
	printf("%.3f", PI);
	/*cout << PI;*/

	cout << "\n\nЗадание #1.5\n";

	double a5;
	cout << "Введите число: ";
	cin >> a5;
	cout << "Вы ввели число: " << a5;

	cout << "\n\nЗадание #1.6\n";

	double a6;
	cout << "Введите число: ";
	cin >> a6;
	cout << a6 << " - вот такое число Вы ввели";

	cout << "\n\nЗадание #1.7\n";

	string a7;
	cout << "Введите имя: ";
	cin >> a7;
	cout << "Ваше имя: " << a7;

	cout << "\n\nЗадание #1.8\n";

	int full_num = 7;
	float half_num = 3.14;
	string letters = "\nГ S\n";

	cout << full_num << " " << half_num << " " << letters;

	string favoriteArtist1, track1, favoriteArtist2, track2;
	cout << "Первый любимый исполнитель: ";
	cin >> favoriteArtist1;
	cout << "Трек: ";
	cin >> track1;
	cout << "Второй любимый исполнитель: ";
	cin >> favoriteArtist2;
	cout << "Трек: ";
	cin >> track2;

	cout << "\nВаш первый любимый исполнитель: " << favoriteArtist1 << "\nТрек: " << track1 << "\nВаш второй любимый исполнитель: " << favoriteArtist2 << "\nТрек: " << track2;
}
