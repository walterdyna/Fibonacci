#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, termo1 = 0, termo2 = 1, proximoTermo, encontrado = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("O nemero %d pertence a sequencia de Fibonacci.", n);
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            encontrado = 1;
            break;
        }

        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    if (encontrado)
        printf("O nomero %d pertence a sequencia de Fibonacci.", n);
    else
        printf("O numero %d não pertence a sequencia de Fibonacci.", n);

    return 0;
}
