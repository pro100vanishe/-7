#pragma once
#include <iostream>

namespace def {
    const int MAX_N = 100;

    void read_matrix(int matrix[MAX_N][MAX_N], int n);

    void findMinAndMax(int matrix[MAX_N][MAX_N], int n, int& minElem, int& maxElem);

    int sumOfDigits(int x);

    int rowSum(int row[MAX_N], int n);

    void sortRowsBySum(int matrix[MAX_N][MAX_N], int n);

    void process_matrix(int matrix[MAX_N][MAX_N], int n);

    void print_matrix(int matrix[MAX_N][MAX_N], int n);
}
