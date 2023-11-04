#include <iostream>
#include "Calc.h"


int main() {
	system("chcp 1251");
	int x = 0, y = 0, n = 0;
	std::cout << "\nВведите первое число: ";
	std::cin >> x;
	std::cout << "\nВведите второе число: ";
	std::cin >> y;
	std::cout << "\nВыберите операцию(1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> n;
	if (n == 1) {
		std::cout << std::endl << sum(x, y);
	}
	if (n == 2) {
		std::cout << std::endl << deg(x, y);
	}
	if (n == 3) {
		std::cout << std::endl << mult(x, y);
	}
	if (n == 4) {
		std::cout << std::endl << Div(x, y);
	}
	if (n == 5) {
		std::cout << std::endl << power(x, y);
	}
	else  if (n < 1 || n > 5) {
		std::cout << "\nОшибка!";
	}
}