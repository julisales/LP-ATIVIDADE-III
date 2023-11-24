#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int i;
    int pares = 0, impares = 0, negativos = 0, soma_pares = 0, soma_geral = 0;
    int maior, menor;
    float media_pares = 0, media_geral = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares++;
            soma_pares += numeros[i];
        } else {
            impares++;
        }
        

        if (numeros[i] < 0)
        {
            negativos++;
        }

        soma_geral += numeros[i];

        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;      
    }

    media_pares = (float) soma_pares / pares;
    media_geral = (float) soma_geral / 5;

    system ("cls || clear");

    printf("A quantidade de números í­mpares: %d \n", impares);
    printf("A quantidade de números negativos: %d \n", negativos);
    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);
    printf("A média de números pares: %.1f \n", media_pares);
    printf("A média de todos os números inseridos: %.1f \n \n", media_geral);

    return 0;
}