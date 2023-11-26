#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[5][200];
    int i, idades[5];
    float pesos[5];
    float alturas[5];
    float maior_altura = 0, maior_peso = 0, maior_idade = 0;
    float menor_altura = 99999, menor_peso = 99999, menor_idade = 99999;

    for (i = 0; i < 5; i++)
    {
        printf("Digite os dados da %dª pessoa \n \n", i + 1);

        printf("Insira o nome: ");
        gets(nomes[i]);

        printf("Insira a idade: ");
        scanf("%d", &idades[i]);

        printf("Insira o peso: ");
        scanf("%f", &pesos[i]);

        printf("Insira a altura: ");
        scanf("%f", &alturas[i]);

        fflush(stdin);
        system("cls || clear");
        
        maior_altura = alturas[i] > maior_altura ? alturas[i] : maior_altura;
        menor_altura = alturas[i] < menor_altura ? alturas[i] : menor_altura;

        maior_peso = pesos[i] > maior_peso ? pesos[i] : maior_peso;
        menor_peso = pesos[i] < menor_peso ? pesos[i] : menor_peso;

        maior_idade = idades[i] > maior_idade ? idades[i] : maior_idade;
        menor_idade = idades[i] < menor_idade ? idades[i] : menor_idade;
    }

    for (i = 0; i < 5; i++)
    {
        if (maior_altura == alturas[i])
        {
            printf("Pessoa mais alta: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Altura: %.2f \n \n", alturas[i]);
        }

        if (menor_altura == alturas[i])
        {
            printf("Pessoa mais baixa: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Altura: %.2f \n \n", alturas[i]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (maior_peso == pesos[i])
        {
            printf("Pessoa com maior peso: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Peso: %.2f \n \n", pesos[i]);
        }

        if (menor_peso == pesos[i])
        {
            printf("Pessoa com menor peso: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Peso: %.2f \n \n", pesos[i]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (maior_idade == idades[i])
        {
            printf("Pessoa com maior idade: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Idade: %d \n \n", idades[i]);
        }

        if (menor_idade == idades[i])
        {
            printf("Pessoa com menor idade: \n");
            printf("Nome: %s \n", nomes[i]);
            printf("Idade: %d \n \n", idades[i]);
        }
    }

    return 0;
}
