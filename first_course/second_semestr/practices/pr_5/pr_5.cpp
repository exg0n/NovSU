// Вариант 9

using namespace std;

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    ifstream file_input("qwe.txt");
    ifstream file_output("qwe.bin", ios::binary);

    if (!file_input.is_open() || !file_output.is_open())
        cerr << "Не удалось открыть файлю Попробуйте ещё раз.";

    while (getline(file_input, ))
}