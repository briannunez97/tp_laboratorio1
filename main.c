#include <stdio.h>
#include <stdlib.h>
#include "funcionesbn.h"
int main()
{
    int fn1=0,fn2=0,opc,cero=0;
    float n1,n2,suma,resta,divi,facto1,facto2,multi;
    do
    {
        system("cls");
        menu(fn1,fn2,n1,n2);
        scanf("%d",&opc);
        switch(opc)
        {
        case 1:
            system("cls");
            printf("\n\tIngresar 1er operando ( A=x ): ");
            scanf("%f",&n1);
            fn1=1;
            break;
        case 2:
            system("cls");
            printf("\n\tIngresar 2do operando ( B=y): ");
            scanf("%f",&n2);
            fn2=1;
            break;
        case 3:
            system("cls");
            if (fn1==0 || fn2==0)
            {
                printf("\n\tERROR. Falta ingresar el valor de A o B\n\n");
                system("pause");
                break;
            }
            suma=sumar(n1,n2);
            resta=restar(n1,n2);
            multi=multiplicar(n1,n2);
            facto1=factorear(n1);
            facto2=factorear(n2);
            if (n2!=0)
            {
                divi=dividir(n1,n2);
            }
            if (n2==0)
            {
                cero=1;
            }
            printf("\n\tTodas las operaciones fueron realizadas\n\n");
            system("\t\tpause");
            break;
        case 4:
            system("cls");
            if (fn1==0 || fn2==0)
            {
                printf("\n\tERROR. Falta ingresar el valor de A o B\n\n");
                system("\t\tpause");
                break;
            }
            else
            {
                informar(n1,n2,cero,suma,resta,divi,multi,facto1,facto2);
                system("\t\tpause");
                fn1=0;
                fn2=0;
            }
            break;
        }
    }
    while (opc!=5);
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t||                                                 ||");
    printf("\n\t\t\t||     Gracias por utilizar la calculadora.        ||");
    printf("\n\t\t\t||                                                 ||");
    printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    return 0;
}
