#include "TridiagonalMatrixAlgorithm.h"
#include <iostream>

using namespace std;

int main()
{
    const arma::mat &matrix = {
        {1, 2, 0, 0},
        {3, 4, 5, 0},
        {0, 6, 7, 8},
        {0, 0, 9, 10}
    };

    const arma::vec &vector = {
        10,
        34,
        40,
        28
    };

    cout << "Given:\nMatrix:\n" << matrix << "Vector:\n" << vector;
    cout << "Solution:\n" << solveTridiagonal(matrix, vector);

    return 0;
}
