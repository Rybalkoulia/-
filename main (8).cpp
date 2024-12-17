#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r; // радиус круга
    cout << "Введите радиус круга r: ";
    cin >> r;

    // Площадь треугольника (красная область) с катетами r и r
    double red_area = (r * r) / 2;

    // Вывод результата
    cout << "Площадь красной области (вариант 28) равна: " << red_area << endl;

    return 0;
}
