// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch(a)
	{
	case 1: {int x1, x2, y1, y2, S;
		cout << "input (x1, y1) and (x2, y2)" << endl;
		cin >> x1 >> x2 >> y1 >> y2;
		S = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); ////расстояние между двумя точками
		cout << S << endl; }
	break;

	case 2: {int A, B, C;
		cout << "input A,B,C" << endl;
		cin >> A >> B >> C;
		cout << "AC=" << abs(C - A) << endl;
		cout << "BC=" << abs(C - B) << endl;
		cout << "AC+BC=" << abs(C - A) + abs(C - B) << endl; }
	break;

	case 3: {int A, B, C, AC, BC;
		cout << "input A,B,C" << endl;
		cin >> A >> B >> C;
		if ((C > A && C < B) && (B > C && B > A)) {
			AC = abs(C - A);
			BC = abs(C - B);
			cout << AC * BC << endl;
		}
		else
			cout << "doesn't follow the condition" << endl; }
	break;

	case 4: {int x1, y1, x2, y2, a, b;
		cout << "input (x1, y1) and (x2, y2)" << endl;
		cin >> x1 >> y1 >> x2 >> y2;
		a = abs(x2 - x1);
		b = abs(y2 - y1);
		cout << (a + b) * 2 << "\n" << a * b << endl; }
	break;

	case 5: {double x1, y1, x2, y2, x3, y3, p, S, AB, AC, BC;
		cout << "input (x1, y1), (x2, y2), (x3, y3)" << endl;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)); //длина каждой стороны
		p = AB + BC + AC; //периметр
		cout << "P = " << p << endl;
		p = p / 2; //полу периметр
		S = sqrt(p * (p - AB) * (p - AC) * (p - BC)); //площадь по т Герона
		cout << "S = " << S << endl; }
	break;
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
