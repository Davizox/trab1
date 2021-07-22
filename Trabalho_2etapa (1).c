#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_FUNCIONARIOS 2
//#define NUM_PIZZAS 2
#define NUM_CLIENTES 1

int main()
{
    char nome_cliente[NUM_CLIENTES][20], endereco_cliente[NUM_CLIENTES][61];
    int telefone_cliente[NUM_CLIENTES];
    char acrescimos[NUM_CLIENTES][51];
    char nome_funcionario[NUM_FUNCIONARIOS][20] = "joao";
    char tamanho_pizza[NUM_CLIENTES][11];
    double valor_compra[NUM_CLIENTES];
    char nome_pizza[20] = "frango";
    char pedidos[NUM_CLIENTES][20];
    char id[20];
    int resultado;

    int i;

    struct tm *data_hora;
    time_t segundos;
    time(&segundos);
    data_hora = localtime(&segundos);
    //printf("\nDia..........: %d\n", data_hora->tm_mday);
    //printf("\nMes..........: %d\n", data_hora->tm_mon + 1);
    //printf("\nAno..........: %d\n\n", data_hora->tm_year + 1900);

    for (i = 0; i < NUM_FUNCIONARIOS; i++)
    {
        printf("\nDigite o nome do funcionario: ");
        scanf("\n%s", &nome_funcionario[i]);
    }

    printf("\nDigite seu id: ");
    scanf("%s", &id);

    for (i = 0; i < NUM_FUNCIONARIOS; i++)
    {
        resultado = strcmp(id, nome_funcionario[i]);
        if (resultado == 0)
        {
            printf("\nFuncionario: %s", nome_funcionario[i]);
        }
    }

    for (i = 0; i < NUM_CLIENTES; i++)
    {
        printf("\nDigite o nome do cliente: ");
        scanf("\n%s", &nome_cliente[i]);
        printf("Digite o endereço: ");
        scanf("\n%s", &endereco_cliente[i]);
        printf("Digite o numero: ");
        scanf("%d", &telefone_cliente[i]);
    }

    for (i = 0; i < NUM_CLIENTES; i++)
    {
        printf("\nDigite o pedido: ");
        scanf("\n%s", &pedidos[i]);
        printf("\nDigite o tamanho: ");
        scanf("\n%s", &tamanho_pizza[i]);

        /*printf("\nNome......: %s", nome_cliente[i]);
        printf("\nEndereco..: %s", endereco_cliente[i]);
        printf("\nNumero....: %d\n", telefone_cliente[i]);*/
    }

    return (0);
}