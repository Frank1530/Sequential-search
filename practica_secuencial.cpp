#include <stdio.h>
#include <windows.h>
int buscar,encontrado,indice;
int arreglo[16]={2,3,5,6,8,9,10,11,13,14,16,17,19,20,22,23};
main()
{
    printf("Ingresa un numero:\n");
    scanf("%d", &buscar);
    printf("El valor es:%d\n",buscar);
    encontrado=0;

    for(indice=0;indice<16;indice++)
    {
        if(arreglo[indice]==buscar)
        {
            encontrado=1;
        }
    }
    if(encontrado==1)
    {
        printf("Numero encontrado!\n");
    }
    else
    {
        printf("Numero no encontrado!\n Lista de numeros: ");
        for(indice=0;indice<15;indice++)
        {
            printf("%d\n",arreglo[indice]);
        }
    }
    system("pause");
    getchar();
    return 0;
}