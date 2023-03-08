// 1laboop.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <locale>

#define e 2,71828182845904
#define eps 0.001
#define x1 0.1;
#define x2 0.77;
#define x3 -0.9;

float z1(float a, float b, float otv);
double z2(float a, float b, float otv);
int z3(float a);
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int tskpick;
    float otv = 0, a = 0 , b = 0;
	printf("1 Задание: значение алгебраического выражения\n 2 Задание: Функция разложенная в ряд\n 3 Задание: Определение попадания числа в диапазон -2 до 2\n ");
    cout << "Введите номер задания";
    cin >> tskpick;
    switch (tskpick) {
    case 1:
        cout << "Выбранно задание №1" << endl << "Введите a";
        cin >> a;
        cout << "Введите b";
        cin >> b;
        printf("Значение выражения равно: %f\n", z1(a, b, otv));
        break;
	case 2: 
		int switchstate;
		double x;
		printf("Выберете x из списка:\n1. %lf\n2. %lf\n3. %lf\n", 0.1, 0.77, (-0.9));
		cin >> switchstate;
		while (switchstate > 3 || switchstate < 1) {
			printf("Выбранно неверное значенqие x, введите значение повторно\n");
			cin >> switchstate;
		}
		switch (switchstate) {
		case 1: x = 0.1;
			break;
		case 2: x = 0.77;
			break;
		case 3: x = -0.9;
			break;
		}
		printf("Значением функции разложенной в ряд при x = %lf является %lf", x, z2(x));
		break;
    case 3:
		int state;
		state = 0;
        cout << "Выбранно задание №1" << endl << "Введите a";
        cin >> a;
        state = z3(a);
		if (state == 1) {
			printf("Число а = %lf попадает в диапазон от -2 до 2", a);
		}
		if (state == 0) {
			printf("Число a = %lf не попадает в диапазон от -2 до 2", a);
		}
		break;
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
double z2(double x) {
	double delt, lasto, otv, xstep;
	delt = 1;
	otv = 0;
	for (int i = 1; delt > eps; i++) {
		if (i > 1) {
			xstep = x * x;
		}
		if (i % 2 != 0) {
			if (i == 1) {
				otv = otv + i;
			}
			if (i != 1) {
				otv = otv + i * xstep;
			}
		}
		if (i % 2 == 0) {
			otv = otv - i * xstep;
		}
		if (i >= 2) {
			delt = otv - lasto;
		}
		lasto = otv;
	}
	return otv;
}
int z3(float a) {
	if (a >= -2 && a <= 2) return 1;
	else return 0;
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
