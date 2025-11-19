// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 101

// Importa??o de ferramentas
using namespace std;

// Fun??o principal
int main() {

    // Fun??o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari?veis
    int i = 0, j = 0;
    char phrase[TAM], alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // T?tulo
    cout << "CIFRADOR DE C?DIGO DE C?SAR" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite sua string (m?x 100 caracteres): ";
    gets(phrase);

    // Convertendo a string para mai?sculo
    strupr(phrase);

    // Criptografia
    for (i = 0; i < strlen(phrase); i++) {

        if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
            j = 0;
            while (phrase[i] != alphabet[j]) {
                j++;
            }

            // Aplicando o deslocamento de tr?s letras
            j = (j + 3) % 26;

            // Substitui??o do caractere cifrado
            phrase[i] = alphabet[j];
        }
    }

    // Resultado
    cout << "\nFrase Criptografada: " << phrase << endl;

    // Executado com sucesso
    return 0;
}

/*
    O c?digo de C?sar ? uma das mais simples e conhecidas t?cnicas de
    criptografia. ? um tipo de substitui??o na qual cada letra do texto ?
    substitu?da por outra, que se apresenta no alfabeto abaixo dela um
    n?mero fixo de vezes. Por exemplo, com uma troca de tr?s posi??es,
    'A' seria substitu?do por 'D', 'B' se tornaria 'E', e assim por diante. Fa?a
    um programa que implemente o uso desse C?digo de C?sar (3 posi??es).
    O programa dever? receber uma cadeia formada somente com caracteres
    do alfabeto e, em seguida, apresentar a cadeia codificada.
    Exemplo:
    Cadeia: a ligeira raposa marrom saltou sobre o cachorro cansado
    Cadeia Codificada: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/
