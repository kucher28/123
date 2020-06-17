#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double number_a, number_b, number_c, number_d;
	cout << "Введите число 1:";
	cin >> number_a;
	cout << "Введите число 2:";
	cin >> number_b;
	cout << "Введите число 3:";
	cin >> number_c;
	cout << "Введите число 4:";
	cin >> number_d;
	cout << "Решение примера №15 \n";
	cout << ((number_c * tan(number_b + 23)) / (number_a / 2 - 4 * number_d - 1));
	cin >> number_a;
}