#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include <set>
#include <stack>
#include <algorithm>
#include <cctype>
#include <Windows.h>

using namespace std;

void task_1()
{
	string name, surname, full_name;

	cout << "Введите имя: ";
	cin >> name;

	cout << "Введите фамилию: ";
	cin >> surname;

	full_name = name + " " + surname;

	cout << "Вас зовут: " << full_name;
}

void task_2()
{
	string name_of_state, name_city;

	cout << "Введите название государства: ";
	cin >> name_of_state;

	cout << "Введите название столицы государства: ";
	cin >> name_city;

	cout << "Столица государства " + name_of_state + " - город " + name_city;
}

void task_3()
{
	string s1, s2, t1, t2;

	s1 = "Apatity";
	s2 = "Murmansk";

	t1 = s2;
	t2 = s1;

	cout << s1 << endl << s2 << endl << t1 << endl << t2;
}

void task_4()
{
	string name_club;

	cout << "Введите название футбольного клуба: ";
	cin >> name_club;

	cout << "Кол-во символов: " << name_club.size();
}

void task_5()
{
	string surname_1, surname_2;

	cout << "Введите фамилию первого человека: ";
	cin >> surname_1;

	cout << "Введите фамилию второго человека: ";
	cin >> surname_2;

	if (surname_1.size() > surname_2.size())
		cout << "Фамилия первого человека длиннее";
	else
		cout << "Фамилия второго человека длиннее";
}

void task_6()
{
	string name_city_1, name_city_2, name_city_3, max, min;

	cout << "Введите название первого города: ";
	cin >> name_city_1;

	cout << "Введите название второго города: ";
	cin >> name_city_2;

	cout << "Введите название третьего города: ";
	cin >> name_city_3;

	if (name_city_1.size() > name_city_2.size())
		max = name_city_1;
	if (max.size() < name_city_2.size())
		max = name_city_2;
	if (max.size() < name_city_3.size())
		max = name_city_3;

	if (name_city_1.size() < name_city_2.size())
		min = name_city_1;
	if (min.size() > name_city_2.size())
		min = name_city_2;
	if (min.size() > name_city_3.size())
		min = name_city_3;

	cout << "Самое длинное название города: "<<  max << endl << "Самое короткое название города: " << min;

}

void task_7()
{
	string name_country_1, name_country_2, s1, s2, buffer;

	cout << "Введите название первой страны: ";
	cin >> name_country_1;

	cout << "Введите название второй страны: ";
	cin >> name_country_2;

	s1 = name_country_1;
	s2 = name_country_2;

	buffer = s1;

	s1 = s2;
	s2 = buffer;

	cout << name_country_1 << endl << name_country_2 << endl << s1 << endl << s2;
}

void task_8()
{
	string a, b, c, buffer_a, buffer_b, buffer_c;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_8();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;

			cout << "Введите c: ";
			cin >> c;

			buffer_a = a;
			buffer_b = b;

			b = c;
			a = buffer_b;
			c = buffer_a;

			cout << a << endl << b << endl << c << endl << buffer_a << endl << buffer_b;

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;

			cout << "Введите c: ";
			cin >> c;

			buffer_a = a;
			buffer_b = b;
			buffer_c = c;

			b = a;
			c = buffer_b;
			buffer_a = buffer_c;

			cout << a << endl << b << endl << c << endl << buffer_a << endl << buffer_b << endl << buffer_c;

			cout << endl;
			break;
		}
	}
}

void task_9()
{
	string word;

	cout << "Введите слово: ";
	cin >> word;

	cout << "Третий символ слова " + word + ": " << word[2];
}

void task_10()
{
	string word;

	cout << "Введите слово: ";
	cin >> word;

	cout << "Последний символ слова " + word + ": " << word[word.size() - 1];
}

void task_11()
{
	string word;
	int k = 0;

	cout << "Введите слово: ";
	cin >> word;

	cout << "Введите номер элемента для вывода: ";
	cin >> k;

	cout << "Ваш символ: " << word[k - 1];
}

void task_12()
{
	string word;

	cout << "Введите словов: ";
	cin >> word;

	if (word[1] == word[5])
		cout << "Одинаковы";
	else
		cout << "Не одинаковы";
}

void task_13()
{
	string word;

	cout << "Введите слово: ";
	cin >> word;

	for (int i = 0; i < word.size(); i++)
		word[i] = tolower(word[i]);

	if (word[0] == word[word.size() - 1])
		cout << "Верно";
	else
		cout << "Не верно";
}

void task_14()
{
	string word_1, word_2;

	cout << "Введите первое слово: ";
	cin >> word_1;

	cout << "Введите второе слово: ";
	cin >> word_2;

	for (int i = 0; i < word_1.size(); i++)
		word_1[i] = tolower(word_1[i]);
	for (int i = 0; i < word_2.size(); i++)
		word_2[i] = tolower(word_2[i]);

	if (word_1[0] == word_2[word_2.size() - 1])
		cout << "Верно";
	else
		cout << "Не верно";
}

void task_15()
{
	string word = "клоун";
	string yklon = "";
	string kylon = "";
	string kolyn = "";

	yklon = word.substr(3, 1) + word.substr(0, 1) + word.substr(1, 1) + word.substr(2, 1) + word.substr(4, 1);
	kylon = word.substr(0, 1) + word.substr(3, 1) + word.substr(1, 1) + word.substr(2, 1) + word.substr(4, 1);
	kolyn = word.substr(0, 1) + word.substr(2, 1) + word.substr(1, 1) + word.substr(3, 1) + word.substr(4, 1);

	cout << yklon << endl << kylon << endl << kolyn;
}

void task_16()
{
	string word = "апельсин";
	string spaniel = "";

	spaniel = word.substr(5, 1) + word.substr(1, 1) + word.substr(0, 1) + word.substr(7, 1) + word.substr(6, 1) + word.substr(2, 1) + word.substr(3, 1) + word.substr(4, 1);

	cout << spaniel;
}

void task_17()
{
	string word, part_1, part_2, part_3, result;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_17();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите слово из 12 букв: ";
			cin >> word;

			part_1 = word.substr(0, 4);
			part_2 = word.substr(4, 4);
			part_3 = word.substr(8, 4);

			result = part_2 + part_3 + part_1;

			cout << result;

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите слово из 12 букв: ";
			cin >> word;

			part_1 = word.substr(0, 4);
			part_2 = word.substr(4, 4);
			part_3 = word.substr(8, 4);

			result = part_3 + part_1 + part_2;

			cout << result;

			cout << endl;
			break;
		}
	}
}

void task_18()
{
	string word;

	cout << "Введите слово: ";
	cin >> word;

	word = "++++" + word + "-----";

	cout << word;
}

void task_19()
{
	string sentence;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	for (auto element : sentence)
		if (element == 'м' || element == 'н' || element == 'М' || element == 'Н')
			cout << element;
}

void task_20()
{
	string sentence;
	char symbol_1, symbol_2;

	cout << "Введите первый символ: ";
	cin >> symbol_1;

	cout << "Введите второй символ: ";
	cin >> symbol_2;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	cout << "Вхождение " << symbol_1 << ": ";
	for (int i = 0; i < sentence.size(); i++)
		if (symbol_1 == sentence[i])
			cout << i + 1 << " ";

	cout << endl << "Вхождение " << symbol_2 << ": ";
	for (int i = 0; i < sentence.size(); i++)
		if (symbol_2 == sentence[i])
			cout << i + 1 << " ";
}

void task_21()
{
	string sentence;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	cout << "Буквосочетания 'нн' в предложении: ";
	for (int i = 0; i < sentence.size(); i++)
		if (sentence[i] == 'н' && sentence[i + 1] == 'н')
			cout << "нн ";

}

void task_22()
{
	string sentence;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	cout << "Буквы на четных позициях: " << endl;
	for (int i = 1; i < sentence.size(); i += 2)
		cout << sentence[i] << endl;
}

void task_23()
{
	string sentence, letter;
	int counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_23();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите предложение: ";
			cin.ignore();
			getline(cin, sentence);

			for (int i = 0; i < sentence.size(); i++)
				if (sentence[i] == 'р')
					if (sentence[i + 1] == 'о')
						counter++;

			cout << "Число вхождений буквосочетания ро: " << counter << endl;

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите буквосочетание: ";
			cin.ignore();
			getline(cin, letter);

			cout << "Введите предложение: ";
			cin.ignore();
			getline(cin, sentence);

			for (int i = 0; i < sentence.size(); i++)
				if (sentence[i] == letter[0])
					if (sentence[i + 1] == letter[1])
						counter++;

			cout << "Число вхождений буквосочетания " << letter << ": " << counter << endl;

			cout << endl;
			break;
		}
	}
}

void task_24()
{
	string sentence;
	int counter = 1;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	for (auto element : sentence)
		if (element == ' ')
			counter++;

	cout << "Всего слов в предложении: " << counter;
}

void task_25()
{
	string sentence;
	int counter = 0;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, sentence);

	for (auto element : sentence)
		if (element == '.')
			counter++;

	cout << "Всего предложений в тексте: " << counter;
}

// Функция гласных букв
bool is_vowel(char letter) {
	return letter == 'а' || letter == 'о' || letter == 'у' || letter == 'и' || letter == 'е' || letter == 'ё' || letter == 'э';
}
void task_26()
{
	string sentence;
	int counter = 0;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	for (auto element : sentence)
		if (is_vowel(element))
			counter++;

	cout << "Кол-во гласных букв в предложении: " << counter;
}

void task_27()
{
	string text;
	int counter = 1;
	bool five_symbol = false;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	for (int i = 1; i < text.size(); i++)
	{
		if (text[i] == text[i - 1])
			counter++;
		else
			counter = 1;

		if (counter == 5) {
			five_symbol = true;
			break;
		}
	}

	if (five_symbol)
		cout << "Верно";
	else
		cout << "Неверно";
}

void task_28()
{
	string sentence, first_word, second_word, third_word;

	cout << "Введите предложение разделяя слова двумя пробелами: ";
	cin.ignore();
	getline(cin, sentence);

	// stringstream для разделения слов
	istringstream iss(sentence);

	// Извлечение слов
	iss >> first_word >> second_word >> third_word;

	cout << "Первое слово: " << first_word << endl;
	cout << "Второе слово: " << second_word << endl;
	cout << "Третье слово: " << third_word << endl;
}

void task_29()
{
	string full_path, part;
	vector <string> parts;

	cout << "Пропишите полный путь до файла: ";
	cin.ignore();
	getline(cin, full_path);

	istringstream iss(full_path);


	while (getline(iss, part, '\\'))
		parts.push_back(part);

	for (auto elements : parts)
		cout << elements << endl;
}

void task_30()
{
	string text;
	int counter = 0;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == 'и')
			counter++;

		if (text[i] == '.')
			break;
	}

	if (counter > 0)
		cout << "Кол-во букв «и» в первом предложении: " << counter;
	else
		cout << "В первом предложении нет буквы «и».";
}

void task_31()
{
	string sentence;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	replace(sentence.begin(), sentence.end(), ' ', '_');

	cout << "Предложение после замены пробелов: " << sentence;
}

void task_32()
{
	string sentence;

	cout << "Введите предложение: ";
	cin.ignore();
	getline(cin, sentence);

	for (int i = 0; i < sentence.size(); i++)
		if (i % 2 == 0)
			sentence[i] = 'ы';

	cout << "Измененное предложение: " << sentence; 
}

// Функция замены всех вхождений заданной подстроки
void replaceSubstring(string& str, string& old_substr, string& new_substr) {
	// Используем регулярное выражение для замены всех вхождений подстроки
	regex pattern(old_substr);
	str = regex_replace(str, pattern, new_substr);
}
void task_33()
{
	string str, old_substr, new_substr;

	cout << "Введте строку: ";
	cin.ignore();
	getline(cin, str);

	cout << "Введте подстроку для замены: ";
	cin.ignore();
	getline(cin, old_substr);

	cout << "Введте новую подстроку: ";
	cin.ignore();
	getline(cin, new_substr);

	replaceSubstring(str, old_substr, new_substr);

	cout << "Результат замены: " << str;
}

void task_34()
{
	string word;
	int position_to_remove = 0;

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

			cout << "Введите слово: ";
			cin >> word;

			if (position_to_remove < word.size())
			{
				word.erase(position_to_remove, 1);
				cout << "Результат: " << word;
			}
			else
			{
				cout << "Ошибки: слово короче трех букв.";
			}

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите слово: ";
			cin >> word;

			cout << "Введите позицию буквы для удаления: ";
			cin >> position_to_remove;

			if (position_to_remove < word.length()) {
				// Удаление k-й буквы
				word.erase(position_to_remove, 1);
				cout << "Результат: " << word;
			}
			else {
				std::cout << "Ошибка: слово короче k-й буквы" << std::endl;
			}

			cout << endl;
			break;
		}
	}
}

void task_35()
{
	string word;

	cout << "Введите слово: ";
	cin >> word;

	int position_char1 = word.find('о');
	int position_char2 = word.find('л');

	if (position_char1 != string::npos)
	{
		word.erase(position_char1, 1);
		cout << "Результат: " << word << endl;
	}
	else
		cout << "Буквы 'о' нет в слове";

	if (position_char2 != string::npos)
	{
		word.erase(position_char2, 1);
		cout << "Результат: " << word;
	}
	else
		cout << "Буквы 'л' нет в слове";
}

bool isPalindrome(string& str) {
	// Удаляем пробелы из строки
	string stringWithoutSpaces = str;
	stringWithoutSpaces.erase(remove_if(stringWithoutSpaces.begin(), stringWithoutSpaces.end(),  ::isspace), stringWithoutSpaces.end());

	// Приводим строку к нижнему регистру
	transform(stringWithoutSpaces.begin(), stringWithoutSpaces.end(), stringWithoutSpaces.begin(), ::tolower);

	// Проверяем, является ли строка палиндромом
	return equal(stringWithoutSpaces.begin(), stringWithoutSpaces.begin() + stringWithoutSpaces.size() / 2, stringWithoutSpaces.rbegin());
}
void task_36()
{
	// а) АРГЕНТИНА МАНИТ НЕГРА
	// б) ПОТ КАК ПОТОП
	// в) А РОЗА УПАЛА НА ЛАПУ АЗОРА

	string inputString = "АРГЕНТИНА МАНИТ НЕГРА";

	// Проверяем, является ли палиндромом после удаления пробелов
	if (isPalindrome(inputString)) {
		cout << "Строка является палиндромом после удаления пробелов.";
	}
	else {
		cout << "Строка не является палиндромом после удаления пробелов.";
	}
}

void task_37()
{
	string text;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	for (char ch : text)
	{
		if (isdigit(ch))
			cout << ch << " ";
	}
}

void task_38()
{
	string text;
	int counter = 0;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	for (char ch : text)
	{
		if (isdigit(ch))
			counter++;
	}
	cout << "Кол-во цифр в тексте: " << counter;
}

void task_39()
{
	string text;
	int summ = 0, max = -1, digit = 0;

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	for (char ch : text)
	{
		if (isdigit(ch))
			digit = ch - '0';

		// а)
		summ += digit;

		// б)
		if (digit > max)
		{
			max = digit;
		}
	}

	cout << "Сумма цифр: " << summ << endl;

	if (max != -1)
		cout << "Максимальная цифра: " << max;
	else
		cout << "В тексте нет цифр.";
}

void task_40()
{
	string number_text;
	int summ = 0;

	cout << "Введите текст состоящий из цифр: ";
	cin.ignore();
	getline(cin, number_text);

	for (char ch : number_text)
	{
		if (isdigit(ch))
			summ += ch - '0';
		else
			break;
	}
	cout << "Сумма цифр: " << summ;
}

void task_41()
{
	string text;
	int summ = 0;
	int current_number = 0;

	std::cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	bool is_digit = false;
	for (char ch : text) {
		if (isdigit(ch)) {
			// Если текущий символ - цифра, добавляем её к текущему числу
			current_number = current_number * 10 + (ch - '0');
			is_digit = true;
		}
		else if (ch == '+' && is_digit) {
			// Если текущий символ - '+', и перед ним была цифра, добавляем текущее число к общей сумме
			summ += current_number;
			current_number = 0; // Сбрасываем текущее число
			is_digit = false;
		}
		else if (!isspace(ch)) {
			// Если символ не цифра, не '+', и не пробел, выходим из цикла
			std::cout << "Введенный текст имеет неверный формат.";
		}
	}

	// Добавляем последнее число (если оно есть) к общей сумме
	if (is_digit) {
		summ += current_number;
	}

	cout << "Вычисленная сумма: " << summ;
}

void task_42()
{
	string text;
	int algebraic_sum = 0;
	int current_number = 0;
	int sign = 1; // Знак для текущего числа (1 для положительного, -1 для отрицательного)

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	bool is_digit = false;
	for (char ch : text) {
		if (isdigit(ch)) {
			current_number = current_number * 10 + (ch - '0');
			is_digit = true;
		}
		else if (ch == '-' && is_digit) {
			algebraic_sum += sign * current_number;
			current_number = 0;
			sign = -1;
			is_digit = false;
		}
		else if (ch == '+' && is_digit) {
			algebraic_sum += sign * current_number;
			current_number = 0;
			sign = 1;
			is_digit = false;
		}
		else if (!isspace(ch)) {
			cout << "Введенный текст имеет неверный формат.";
		}
	}

	if (is_digit) {
		algebraic_sum += sign * current_number;
	}

	cout << "Вычисленная алгебраическая сумма: " << algebraic_sum;
}

void task_43()
{
	string text;
	int algebraic_sum = 0;
	int current_number = 0;
	int sign = 1; // Знак для текущего числа (1 для положительного, -1 для отрицательного)

	cout << "Введите текст: ";
	cin.ignore();
	getline(cin, text);

	bool is_digit = false;
	for (char ch : text) {
		if (isdigit(ch)) {
			current_number = current_number * 10 + (ch - '0');
			is_digit = true;
		}
		else if (ch == '-' && is_digit) {
			algebraic_sum += sign * current_number;
			current_number = 0;
			sign = -1;
			is_digit = false;
		}
		else if (ch == '+' && is_digit) {
			algebraic_sum += sign * current_number;
			current_number = 0;
			sign = 1;
			is_digit = false;
		}
		else if (!isspace(ch)) {
			cout << "Введенный текст имеет неверный формат.";
		}
	}

	if (is_digit) {
		algebraic_sum += sign * current_number;
	}

	cout << "Вычисленная алгебраическая сумма: " << algebraic_sum;
}

void task_44()
{
	string word;
	cout << "Введите слово: ";
	cin >> word;

	set<char> unique_chars(word.begin(), word.end());
	cout << "Количество различных букв: " << unique_chars.size();
}

void task_45()
{
	string word;
	cout << "Введите слово: ";
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		int count = 0;
		for (int j = 0; j < word.size(); j++) {
			if (word[i] == word[j]) {
				count++;
			}
		}
		if (count == 2) {
			cout << word[i];
		}
	}
}

string convert(int n) {

	vector<string> ones = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	vector<string> teens = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
	vector<string> tens = { "", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
	vector<string> hundreds = { "", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот" };

	if (n == 1000) {
		return "тысяча";
	}
	string result = hundreds[n / 100];
	n %= 100;
	if (n >= 20) {
		result += " " + tens[n / 10] + " " + ones[n % 10];
	}
	else if (n >= 10) {
		result += " " + teens[n - 10];
	}
	else {
		result += " " + ones[n];
	}
	return result;
}
void task_46()
{
	int n;
	cout << "Введите число: ";
	cin >> n;
	cout << "Результат: " << convert(n);
}

bool are_parentheses_balanced(const string& expression) {
	stack<char> s;
	for (char c : expression) {
		if (c == '(') {
			s.push(c);
		}
		else if (c == ')') {
			if (s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}
void task_47()
{
	string expression;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_47();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите арифметическое выражение: ";
			cin.ignore();
			getline(cin, expression);

			cout << (are_parentheses_balanced(expression) ? "да" : "нет");

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите арифметическое выражение: ";
			cin.ignore();
			getline(cin, expression);

			stack<int> s;
			for (int i = 0; i < expression.size(); i++) {
				if (expression[i] == '(') {
					s.push(i);
				}
				else if (expression[i] == ')') {
					if (s.empty()) {
						cout << "Лишняя правая скобка на позиции " << i + 1;
					}
					s.pop();
				}
			}

			if (s.empty()) {
				cout << "Скобки расставлены правильно";
			}
			else {
				cout << "Количество лишних левых скобок: " << s.size();
			}

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

	if (x > 49 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 49.\nПовторите попытку.\n";
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
		case 43:
			system("cls");
			task_43();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 44:
			system("cls");
			task_44();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 45:
			system("cls");
			task_45();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 46:
			system("cls");
			task_46();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 47:
			system("cls");
			task_47();
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

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	choose_task();
}