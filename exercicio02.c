#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    char nomes[5][200], resultado[200];
    int idades[5];
    float notas[5][3], soma = 0, media[5];
    int i, j;

    for(i = 0; i < 5; i++){
        printf("%dº aluno: \n", i + 1);

        printf("Nome: ");
        gets(nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Informe a %dª nota: \n", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        media[i] = soma / j;
        soma = 0;

        fflush(stdin);
        system("cls || clear");
    }

     for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno: %s \n", nomes[i]);
        printf("Idade: %d \n", idades[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%dª nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf("Média: %.1f \n", media[i]);
        if (media [i] >= 7)
        {
            strcpy(resultado, "Aprovado!");
        }
        else if (media [i] >= 5)
        {
            strcpy(resultado, "Recuperação!");
        }
        else
        {
            strcpy(resultado, "Reprovado!");
        }
        
        printf("Resultado: %s \n \n", resultado);
    }
   
    return 0;
}