﻿// dz1.17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
//"копейка" в правильной форме.
//если последняя цифра числа = 1 и число не равно 11 ,то копейка
//если последняя цифра числа от [5,9] или число в промежутке от [10, 20] или последняя цифра числа = 0, то копеек
//если последняя цифра числа равна 2/3/4 и это не 11,12,13,14, то копейки

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if ((a>0) and (a<100)) {
        if (a != 11 and ((a % 10) == 1)) {
            cout << a << " копейка";
        }
        else if ((a > 9 and a < 21) or ((a % 10) > 4 and (a % 10) < 10) or ((a % 10) == 0)) {
            cout << a << " копеек";
        }
        else {
            cout << a << " копейки";
        }
    }
    else {
        cout << "столько копеек не надо";
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
