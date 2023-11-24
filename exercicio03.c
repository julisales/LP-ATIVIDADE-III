#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[9999][200];
    int telefones[9999];
    int codigo;
    int contador = 0, i;

    do
    {
        printf("C�DIGO   |        FUN��O\n");
        printf("   1     | Adicionar novo n�mero \n");
        printf("   2     | Mostrar n�meros cadastrados \n \n");

        printf("Digite o c�digo do que deseja fazer: ");
        scanf("%d", &codigo);

        system("cls || clear");

        switch (codigo)
        {
        case 1:
                fflush(stdin);
                
                printf("Digite o nome: ");
                gets(nomes[contador]);

                printf("Digite o telefone: ");
                scanf("%d", &telefones[contador]);

                contador++;
                system("cls || clear");
            break;

        case 2:
            printf("AGENDA DE CONTATOS: \n \n");
            for (i = 0; i < contador; i++)
            {
                printf("Nome: %-20s | Telefone: %-20d \n", nomes[i], telefones[i]);
            }
            break;

        default:
            printf("C�digo inv�lido!");
            break;
        }
    } while (codigo != 2);

    return 0;
}