#include <stdio.h>

int main(void){
    int menu;
    float preco;
    float quantidade;
    float compra;

    printf("Escolha o artigo\n");
    printf("[100] Cachorro Quente \n [101] Hamburger \n [102] Cheese Burger \n [103] Omolete \n [104] Francesinha \n");
    scanf(" %d", &menu);

    if (menu == 100)
    {
        preco = 2.50;
        printf("O cachorro quente custa 2.50€\n");
        printf("Quantos vai desejar?\n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("O valor a pagar é: %0.1f€ \n", compra);

    }
    else if (menu == 101)
    {
        preco = 3.50;
        printf("O hamburger custa 3.50€\n");
        printf("Quantos vai desejar?\n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("O valor a pagar é: %0.1f€ \n", compra);

    }
    else if (menu == 102)
    {
     preco = 4;
     printf("O cheese burger custa 4€\n");
     printf("Quantos vai desejar?\n");
     scanf(" %f", &quantidade);
     compra = quantidade * preco;
     printf("O valor a pagar é: %0.1f€ \n", compra);

    }
    else if (menu == 103)
    {
        preco = 3.75;
        printf("A omolete custa 3.75€\n");
        printf("Quantos vai desejar?\n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("O valor a pagar é: %0.1f€ \n", compra);
        
    }
    else 
    {
        preco = 7.50;
        printf("A francesinha custa 7.50€\n");
        printf("Quantas vai desejar?\n");
        scanf(" %f", &quantidade);
        compra = quantidade * preco;
        printf("O valor a pagar é: %0.1f€ \n", compra);

    }
    
    return 0;
    


    
}