#include <iostream>

// �������� �������

int main() {
    int a;
    std::cin >> a;
    while (a != 1) {
        if (a % 2 == 0) {
            a /= 2;
        }
        else {
            a = (a * 3 + 1) / 2;
        }
        std::cout << a << " ";
    }
}

// ���. �� �������� �� ���������� ������������ �����, 
// ���� ��� ������ �������� �������� � �������