﻿// 1laboop.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <locale>

#define e 2,71828182845904

float z1(float a, float b, float otv);
float z2(float a, float b, float otv);
float z3();
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int tskpick;
    float otv = 0, a = 0 , b = 0;
    cout << "Введите номер задания";
    cin >> tskpick;
    switch (tskpick) {
    case 1:
        cout << "Выбранно задание №1" << endl << "Введите a";
        cin >> a;
        cout << "Введите b";
        cin >> b;
        printf("Значение выражения равно: %f\n", z1(a, b, otv));
    }
}

float z1(float a, float b, float otv) {
    float exp, znam, chisl;
    exp = e;
    znam = pow(sin(a), 2) + cos(b);
    chisl = 1 + (exp / (pow(a, 3) + 3.4 * b));
    chisl = sqrt(chisl);
    otv = log(znam / chisl);
    return otv;
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
