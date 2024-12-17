#include <iostream>
#include <cmath>    // Для использования pow и факториала
using namespace std;

// Функция для вычисления факториала числа
unsigned long long factorial(int x) {
    if (x == 0 || x == 1) return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= x; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int terms; // количество итераций
    cout << "Введите количество шагов для суммы: ";
    cin >> terms;

    double sum = 0.0;

    for (int n = 1; n <= terms; ++n) {
        // Вычисление числителя: 10 * 13... и слагаемое 7 + 3n
        double numerator = 10.0 * (7 + 3 * n);

        // Вычисление знаменателя: факториал (4n + 3)
        unsigned long long denominator = factorial(4 * n + 3);

        // Слагаемое ряда
        double term = numerator / denominator;

        sum += term; // Добавляем текущее слагаемое
    }

    cout << "Сумма ряда для " << terms << " шагов = " << sum << endl;

    return 0;
}

