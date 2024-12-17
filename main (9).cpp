#include <iostream>
#include <cmath> // Для функций pow() и M_PI

using namespace std;

// Функция для вычисления факториала
unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;           // Количество членов суммы
    double x;        // Переменная x
    double sum = 0;  // Сумма ряда

    // Ввод данных
    cout << "Введите количество членов суммы n: ";
    cin >> n;
    cout << "Введите значение x: ";
    cin >> x;

    // Вычисление суммы
    for (int k = 0; k <= n; ++k) {
        double numerator = pow(-1, k) * pow(-M_PI / 2 + x, 1 + 2 * k);  // Числитель
        unsigned long long denominator = factorial(1 + 2 * k);         // Знаменатель
        sum += numerator / denominator;                                // Сумма
    }

    // Вывод результата
    cout << "Значение суммы ряда: " << sum << endl;

    return 0;
}
