#include "../include_cpp/recursao.hpp"

#include <string>
#include <iostream>

using namespace std;

// variáveis globais para a função manipular
int contador = 0;
int indice = 0;

int recursao(const std::string &str, char alvo) {
    int quantidade_caracteres = str.length();

    if (str[indice] == alvo) {
        contador++;
    }

    indice++;

    if (indice < quantidade_caracteres) {
        // Chama a função recursivamente até percorrer toda a string
        return recursao(str, alvo); 
    } else {
        // já percorreu toda a string, retorna o contador
        return contador;
    }

}
