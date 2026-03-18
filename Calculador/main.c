#include <stdio.h>

int main(){
    int a,b,c;
    float f,g,h;
    char op, op2;

    printf("selecciona ua opcion\n");
    printf("1. Operaciones con enteros\n");
    printf("2. Operaciones con reales\n");


    scanf("%c", &op);

    printf("selecciona ua opcion\n");
    printf("1. suma\n");
    printf("2. resta\n");
    printf("3. multiplicacion\n");
    printf("4. division\n");
    printf("5. modulo\n");
    printf("6. salir\n");
    scanf("%c", &op);
     if(op='1')
    {
        printf("ingresa los dos numeros con los que quieres operar\n")
        scanf("%d %d", &a, &b)
        switch (op2)
        {
        case 1:
            c=a+b;
            break;

        case 2:
            c=a-b;
            break;

        case 3:
            c=a*b;
            break;

        case 4:
            c=a/b;
            break;

        case 5:
            c= a%b;
            break;

        default:
            return 0;
        }
        printf("El resultado es %d\n", c);
}else{
        printf("Ingresa los dos numeros con los que quieres operar(num1 num2)\n");
        scanf("%f %f", &f, &g)
        switch (op2)
        {
        case 1:
            h= f+g;
            break;
        case 2:
            h= f-g;
            break;

        case 3:
            h= f*g;
            break;

        case 4:
            h= f/g;
            break;

        case 5:
            h= (int)f%(int)g;
            break;

        default:
            return 0;
        }
        printf("El resultado es %d\n", c);
    }
}