#include "../include_cpp/busca_binaria.hpp"
#include <iostream>
#include <vector>

int bad_version = 4; // Versão ruim para teste

bool is_bad_version(int version) {
    return version >= bad_version;
}

int busca_binaria(const std::vector<int>& arr_ordenado) {
    int esquerda = 0;
    int direita = arr_ordenado.size() - 1;
    int resultado = -1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (is_bad_version(arr_ordenado[meio])) {
            resultado = meio;      // achou um candidato
            direita = meio - 1;    // tenta achar anterior ruim
        } else {
            esquerda = meio + 1;
        }
    }

    return arr_ordenado[resultado];
}
