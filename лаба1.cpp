#include <iostream>
#include <cmath>
int main() {
	setlocale(LC_ALL, "RU");
	double start, end, step;
	std::cout << "������� ��������� �������� x: ";
	std::cin >> start; // ������ �������� �������� ����������
	std::cout << "������� �������� �������� x: ";
	std::cin >> end; // ������ ������� �������� ����������mh ������
	std::cout << "HUI";
	std::cin >> step; // ������ ���, � ������� � ������� ����� ���������� ��������
		for (double x = start; x <= end; x += step) {
			double y = sin(x); // ������� y = sin(x)
			std::cout << x << " | " << y << std::endl; // ������� �������� ������� ��� ������� ���������(x | y)
		}
	return 0;
}