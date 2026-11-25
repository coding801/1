#include "matrix_ops.h"
#include "number_utils.h"

int sumSecondaryDiagDivBy3(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    int sum = 0;
    // Элементы побочной диагонали имеют индексы [i][n - 1 - i]
    for (int i = 0; i < n; ++i) {
        int val = matrix[i][n - 1 - i];
        if (isDivisibleBy3(val)) {
            sum += val;
        }
    }
    return sum;
}

void replaceBelowSecondaryDiag(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // Условие нахождения СТРОГО ниже побочной диагонали: i + j > n - 1
            if (i + j > n - 1) {
                matrix[i][j] = sumDigits(matrix[i][j]);
            }
        }
    }
}