#include <stdio.h>

int main (void){
    float IMC;
    char classificacao [100];
    int peso;
    float altura;

    printf("Qual o teu peso? \n");
    scanf(" %d", &peso);
    printf("Qual a tua altura? \n");
    scanf(" %f", &altura);

    IMC = peso / ( altura * altura );

    if (IMC < 18.5)
    {
        printf("Abaixo do Peso \n");
        printf("O seu IMC e de: %0.2f", IMC);
    }
    else if (IMC >= 18.6 && IMC <= 24.9)
    {
        printf("Saudavel \n");
        printf("O seu IMC e de: %0.2f", IMC);
    }
    else if (IMC >= 25.0 && IMC <= 29.9)
    {
        printf("Peso em excesso \n");
        printf("O seu IMC e de: %0.2f", IMC);
    }
    else if (IMC >= 30.0 && IMC <= 34.9)
    {
        printf("Obesidade Grau I");
        printf("O seu IMC e de: %0.2f", IMC);
    }
    else if (IMC >= 35.0 && IMC <= 39.9)
    {
        printf("Obesidade Grau II");
        printf("O seu IMC e de: %0.2f", IMC);
    }
    else
    {
        printf("Obesidade Grau III");
        printf("O seu IMC e de: %0.2f", IMC);
    }

    return 0;
}