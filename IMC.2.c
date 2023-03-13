#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    
	float massa, altura, IMC;

    printf("\nDigite sua massa : ");
    scanf("%f",&massa);
    printf("\nDigite sua altura: ");
    scanf("%f",&altura);

    IMC = massa/(pow(altura,2));

    printf("Seu IMC e = %0.2f\n",IMC);

        if(IMC<17)
        {
    printf("Muito abaixo do peso.:( \n");
        }
            else
        {
        if(IMC>17 && IMC<18.49)
        {
    printf("Abaixo do peso.:/ \n");
        }
           else
        {
        if(IMC>18.5 && IMC<24.99)
        {
    printf("Peso normal\n");
        }
            else
        {
        if(IMC>25 && IMC<29.99)
        {
    printf("Acima do peso \n");
        }
            else
        {
        if(IMC>30 && IMC<34.99)
        {
    printf("voce esta Obeso \n");
        }
            else
        {
        if(IMC>35 && IMC<39.99)
        {
    printf("Obesidade acima do normal, va a uma medico \n");
        }
            else
        {
        if(IMC>40)
        {
    printf("voce esta com obesidade morbida,procure um profissional da area de saude.\n");
         }
        }
         }
        }
         }
        }
 	     }

    return 0;
}
