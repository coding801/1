#include "matrix_io.h"
#include <iostream>
#include <iomanip>

void inputMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    std::cout << "Введите элементы матрицы " << n << "x" << n << ":\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << std::setw(6) << val;
        }
        std::cout << "\n";
    }
}