#include <iostream>
#include <cmath>

struct Point {
    int x;
    int y;
};

double Distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1 = {1, 3};
    Point p2 = {5, 7};

    double dist = Distance(p1, p2);

    std::cout << "Відстань між точками: " << dist << std::endl;

    return 0;
}

