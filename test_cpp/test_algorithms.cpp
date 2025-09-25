#include <iostream>
#include <iomanip>
#include <vector>
// #include "busca_seq_ordenada.hpp"
#include "../include_cpp/busca_binaria.hpp"
#include "../include_cpp/busca_seq_ordenada.hpp"
// #include "recursao.hpp"

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

int main() {

    //Vetor desordenado <POPULAR>
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Vetor ordenado <POPULAR>
    std::vector<int> arr2 = {5,2,4,1,5,3,2,5,4,1}; // 5 elementos diferentes embaralhados e não ordenados

    //Exemplo de chamada da macro RUN_TEST
    RUN_TEST("Busca binária para primeira versão inválida", busca_binaria(arr1), 4);
    RUN_TEST("Busca sequencial passando arr não ordenado", conta_especialidades_distintas(arr2), 5);
    // RUN_TEST("Busca ordenada", conta_especialidades_distintas(), 0);
    // RUN_TEST("Busca binaria", busca_binaria(), 0);
    // RUN_TEST("Recursao", recursao(), 0);

    return 0;
}

