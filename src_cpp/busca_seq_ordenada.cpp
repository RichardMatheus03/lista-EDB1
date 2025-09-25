#include <iostream>
#include <vector>

#include "../include_cpp/busca_seq_ordenada.hpp"

// Função Bubble Sort para ordenar o vetor - (implementação pronta)
void bubble_sort(std::vector<int>& arr) {
    int n = arr.size();
    bool trocou;
    do {
        trocou = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);
}

// Função de busca sequencial ordenada que será usada na conta
int busca_seq_ordenada(const std::vector<int>& arr, int alvo) {
    for (int i = 0; i < (int)arr.size(); i++) {
        if (arr[i] == alvo) {
            return i; // encontrado
        } else if (arr[i] > alvo) {
            return -1; // como está ordenado, pode parar (otimização)
        }
    }
    return -1; // não encontrado
}

// Função que conta quantas especialidades distintas existem
int conta_especialidades_distintas(std::vector<int> arr) {

    // Ordena o vetor
    bubble_sort(arr);

    int quantidade_diferentes = 0;
    std::vector<int> vistos;

    for (int i = 0; i < (int)arr.size(); i++) {
        if (busca_seq_ordenada(vistos, arr[i]) == -1) {
            // Se o elemento não está em vistos, adiciona ele pra que na próxima iteração já esteja
            vistos.push_back(arr[i]);
            quantidade_diferentes++;
        }
    }

    return quantidade_diferentes;
}
