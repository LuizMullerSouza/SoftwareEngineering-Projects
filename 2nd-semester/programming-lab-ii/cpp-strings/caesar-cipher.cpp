// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 101

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i = 0, j = 0;
    char phrase[TAM], alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Título
    cout << "CIFRADOR DE CÓDIGO DE CÉSAR" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite sua string (máx 100 caracteres): ";
    gets(phrase);

    // Convertendo a string para maiúsculo
    strupr(phrase);

    // Criptografia
    for (i = 0; i < strlen(phrase); i++) {

        if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
            j = 0;
            while (phrase[i] != alphabet[j]) {
                j++;
            }

            // Aplicando o deslocamento de três letras
            j = (j + 3) % 26;

            // Substituição do caractere cifrado
            phrase[i] = alphabet[j];
        }
    }

    // Resultado
    cout << "\nFrase Criptografada: " << phrase << endl;

    // Executado com sucesso
    return 0;
}

/*
    O código de César é uma das mais simples e conhecidas técnicas de
    criptografia. É um tipo de substituição na qual cada letra do texto é
    substituída por outra, que se apresenta no alfabeto abaixo dela um
    número fixo de vezes. Por exemplo, com uma troca de três posições,
    'A' seria substituído por 'D', 'B' se tornaria 'E', e assim por diante. Faça
    um programa que implemente o uso desse Código de César (3 posições).
    O programa deverá receber uma cadeia formada somente com caracteres
    do alfabeto e, em seguida, apresentar a cadeia codificada.
    Exemplo:
    Cadeia: a ligeira raposa marrom saltou sobre o cachorro cansado
    Cadeia Codificada: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/
