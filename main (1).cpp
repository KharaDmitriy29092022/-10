#include <iostream>

// Модуль для роботи зі структурою Point
struct Point {
    int x;
    int y;
};

double Distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Модуль для роботи з цілими числами
bool IsPositive(int num) {
    return num > 0;
}

int main() {
    // Введення цілих чисел
    int A, B, C;
    std::cout << "Введіть три цілих числа: ";
    std::cin >> A >> B >> C;

    // Перевірка на позитивність чисел
    bool isPositive = IsPositive(A) && IsPositive(B) && IsPositive(C);

    // Висновок результату
    if (isPositive) {
        std::cout << "Висловлювання істинне." << std::endl;
    } else {
        std::cout << "Висловлювання хибне." << std::endl;
    }

    return 0;
}

