// dz1.12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой(рост - 100 = идеальный вес).

#include <iostream>
using namespace std;
int main()
{
    double height, weight, ideal_weight, difference, difference2;
    cout << "hi, enter your height and weight"<<endl;
    cin >> height>>weight;
    ideal_weight = height - 100;
    if (weight == ideal_weight) {
        cout << "You have the perfect weight to height ratio!";
    }
    else if (weight < ideal_weight) 
    {
        difference = ideal_weight - weight;
        cout << "you need to recover "<< difference<<"kg";
    }
     else if (weight>ideal_weight) {
        difference2 = weight - ideal_weight;
        cout << "you need to lose weight "<< difference2<<"kg";

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
