#pragma once
#include <vector>

// Нахождение суммы элементов побочной диагонали, делящихся на 3
int sumSecondaryDiagDivBy3(const std::vector<std::vector<int>>& matrix);

// Замена элементов ниже побочной диагонали на сумму их цифр
void replaceBelowSecondaryDiag(std::vector<std::vector<int>>& matrix);
