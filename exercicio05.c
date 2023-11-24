#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produtos[99][200];
    float valores[99];
    float total_geral = 0;
    int quantidade[99];
    int codigo;
    int contador = 0, i;

    do
    {
        printf("CÓDIGO   |        FUNÇÃO\n");
        printf("   1     | Adicionar nova venda \n");
        printf("   2     | Mostrar total das vendas\n \n");

        printf("Digite o código do que deseja fazer: ");
        scanf("%d", &codigo);

        system("cls || clear");

        switch (codigo)
        {
        case 1:
                fflush(stdin);
                
                printf("Digite o nome do produto: ");
                gets(produtos[contador]);

                printf("Digite o preço: ");
                scanf("%f", &valores[contador]);

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade[contador]);

                contador++;
                system("cls || clear");
            break;

        case 2:
            printf("TOTAL DAS VENDAS: \n \n");
            for (i = 0; i < contador; i++)
            {
               printf("Produto: %-20s | Preço: R$%-10.2f | Quantidade: %-5d | Total de vendas do produto: R$%.2f\n", produtos[i], valores[i], quantidade[i], quantidade[i] * valores[i]); 

               total_geral += quantidade[i] * valores[i];
            }

            printf("\nTotal geral de vendas: R$%.2f\n", total_geral);
            break;

        default:
            printf("Código inválido!");
            break;
        }
    } while (codigo != 2);

    return 0;
}