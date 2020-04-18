

float sumar(float a,float b)
{
    return a+b;
}

float restar(float a,float b)
{
    return a-b;
}

float multiplicar(float a,float b)
{
    return a*b;
}

float dividir(float a,float b)
{
    return a/b;
}

float factorear(float dato)
{
    int salida=1;
    if(dato==0)
        return 1;
    if(dato>0 && dato<=12)
    {
        for (int i=1; i<=dato; i++)
            salida=salida*i;
        return salida;
    }
    else
        return -1; /**< retorna -1 para validar que el numero no sea ni cero ni mayor a 12.  */
}

void menu(int fn1,int fn2,float n1,float n2)
{

    printf("\n\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t\t||               :: C A L C U L A D O R A ::                ||");
    printf("\n\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    if(fn1==0)
    {
        printf("\t\t\t\t\t1. Ingresar 1er operando (A=x) \n\n");
    }
    else
    {
        printf("\t\t\t\t\t1. Ingresar 1er operando (A=%.2f)\n\n",n1);
    }
    if(fn2==0)
    {
        printf("\t\t\t\t\t2. Ingresar 2do operando (B=y)\n\n");
    }
    else
    {
        printf("\t\t\t\t\t2. Ingresar 2do operando (B=%.2f)\n\n",n2);
    }
    printf("\t\t\t\t\t3. Calcular todas las operaciones\n\n");
    printf("\t\t\t\t\t4. Informar resultados\n\n");
    printf("\t\t\t\t\t5. Salir de la calculadora\n\n\n");
    printf("\t\t\t\t\tPor favor, elija una opcion: ");
}

void informar(float a,float b,int cero,float ds,float dr,float dd,float dm,float df1,float df2)
{
    printf("\t\t\tLOS RESULTADOS SON LOS SIGUIENTES:\n\n");
    printf("\tEl resultado de %.2f + %.2f es: %.2f\n\n",a,b,ds);
    printf("\tEl resultado de %.2f - %.2f es: %.2f\n\n",a,b,dr);
    if(cero==0) /**< Se valida la division por cero */
    {
        printf("\tEl resultado de %.2f / %.2f es: %.2f\n\n",a,b,dd);
    }
    else
    {
        printf("\tEl resultado de %.2f / %.2f es: ERROR. No es posbile la division por CERO\n\n",a,b);
    }

    printf("\tEl resultado de %.2f * %.2f es: %.2f\n\n",a,b,dm);
    if(df1!=-1) /**< Se valida que que el numero sea menor o igual que 12 */
    {
        printf("\tEl factorial de %.2f es: %.2f\n\n",a,df1);
    }
    else
    {
        printf("\tEl factorial de %.2f es: ERROR. Solo calcula hasta el 12\n\n",a);
    }
    if(df2!=-1) /**< Se valida que que el numero sea menor o igual que 12 */
    {
        printf("\tEl factorial de %.2f es: %.2f\n\n",b,df2);
    }
    else
    {
        printf("\tEl factorial de %.2f es: ERROR. Solo calcula hasta el 12\n\n",b);
    }
}
