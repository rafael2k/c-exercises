#include <stdio.h>

int main()
{
    int i;
    int numero_de_elementos = 10;
    int vetor1[numero_de_elementos];
    int vetor2[numero_de_elementos];

    // lendo o promeiro vetor
    for (i = 0; i < numero_de_elementos; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    // lendo o segundo vetor
    for (i = 0; i < numero_de_elementos; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    // escrever na tela de forma intercalada
    for (i = 0; i < numero_de_elementos; i++)
    {
        printf("%d %d ", vetor1[i], vetor2[i]);
    }

    return 0;
}
