#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filas,i,x;

    printf("Ingrese cantidad de filas: ");
    scanf("%d",&filas);
    fflush(stdin);

    for(i=0;i<=filas;i++)
    {
        printf("\n");
        for(x=0;x<i;x++)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("\n");

    return 0;
}
