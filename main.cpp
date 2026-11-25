#include <iostream>
#include <vector>
#include "matrix_io.h"
#include "matrix_ops.h"

int main() {
    setlocale(LANG, "rus"); // Для корректного вывода кириллицы в Windows
    int n;
    
    std::cout << "Введите размер квадратной матрицы (n): ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Ошибка: размер матрицы должен быть больше 0.\n";
        return 1;
    }

    // Инициализация матрицы
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    std::cout << "\n--- Исходная матрица ---\n";
    inputMatrix(matrix);
    printMatrix(matrix);

    // 1. Нахождение суммы
    int sum = sumSecondaryDiagDivBy3(matrix);
    std::cout << "\nСумма элементов побочной диагонали, делящихся на 3: " << sum << "\n";

    // 2. Замена элементов ниже побочной диагонали
    replaceBelowSecondaryDiag(matrix);

    std::cout << "\n--- Матрица после замены элементов ниже побочной диагонали ---\n";
    printMatrix(matrix);

    return 0;
}