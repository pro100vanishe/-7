#include "func.hpp"

int main() {
    int n;
    std::cin >> n;

    if (n > def::MAX_N || n <= 0) {
        std::cerr << "Неверный ввод\n";
        return 1;
    }

    int matrix[def::MAX_N][def::MAX_N];
    def::read_matrix(matrix, n);

    def::process_matrix(matrix, n);

    def::print_matrix(matrix, n);

    return 0;
}
