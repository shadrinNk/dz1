﻿// dz1.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//4. Дано десятичное четырехзначное число. Найти сумму его цифр.
//1234%10=4
//
//

#include <iostream>
using namespace std;
int main()
{
    int a,w;
    cout << "a= ";
    cin >> a;
    int i=1;
    int sum = 0;
    while (i<5)
    {
        w = a % 10;
        sum += w;
        a = a / 10;

        i++;
        
    }
    cout << sum;
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