#include <iostream>
int main() {
	double start, end, step;
	std::cout << "������� ��������� �������� x: ";
	std::cin >> start; // ������ �������� �������� ����������
	std::cout << "������� �������� �������� x: ";
	std::cin >> end; // ������ ������� �������� ����������
	std::cout << "������� ���: ";
	std::cin >> step; // ������ ���, � ������� � ������� ����� ���������� ��������
		for (double x = start; x <= end; x += step) {
			double y = sin(x); // ������� y = sin(x)
			std::cout << x << " | " << y << std::endl; // ������� �������� ������� ��� ������� ���������(x | y)
		}
	return 0;
}