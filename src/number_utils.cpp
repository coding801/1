#include "number_utils.h"
#include <cmath>

int sumDigits(int n) {
    n = std::abs(n); // Обрабатываем возможные отрицательные числа
    if (n == 0) {
        return 0;
    }
    // Рекурсивный шаг: последняя цифра + сумма цифр остатка
    return (n % 10) + sumDigits(n / 10);
}

bool isDivisibleBy3(int n) {
    return n % 3 == 0;
}
