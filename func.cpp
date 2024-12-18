#include "func.hpp"
#include <iostream>
#include <cmath>
#include <climits> 

namespace def {

const int MAX_N = 100;

int sumOfDigits(int x) {
    x = std::abs(x); 
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void read_matrix(int matrix[MAX_N][MAX_N], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void findMinAndMax(int matrix[MAX_N][MAX_N], int n, int& minElem, int& maxElem) {
    minElem = INT_MAX;
    maxElem = INT_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] < minElem) {
                minElem = matrix[i][j];
            }
            if (matrix[i][j] > maxElem) {
                maxElem = matrix[i][j];
            }
        }
    }
}

int rowSum(int row[MAX_N], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += row[i];
    }
    return sum;
}

void sortRowsBySum(int matrix[MAX_N][MAX_N], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (rowSum(matrix[j], n) > rowSum(matrix[j + 1], n)) {
                for (int k = 0; k < n; ++k) {
                    std::swap(matrix[j][k], matrix[j + 1][k]);
                }
            }
        }
    }
}

void process_matrix(int matrix[MAX_N][MAX_N], int n) {
    int minElem, maxElem;
    findMinAndMax(matrix, n, minElem, maxElem);

    if (sumOfDigits(minElem) == sumOfDigits(maxElem)) {
        sortRowsBySum(matrix, n);
    }
}

void print_matrix(int matrix[MAX_N][MAX_N], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

}
