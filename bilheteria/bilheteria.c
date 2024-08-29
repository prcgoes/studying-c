/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    int idade_minima_para_desconto_infantil = 0;
    int idade_maxima_para_desconto_infantil = 10;
    int idade_minima_para_desconto_idoso = 60;
    int idade_maxima_para_desconto_idoso = 120;
    int idade_para_desconto_idoso = 60;
    
    float valor_do_ingresso_com_desconto = 22.0;
    
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    if(idade < idade_minima_para_desconto_infantil || idade > idade_maxima_para_desconto_idoso){
        printf("Idade inválida");
        return 0;
    }
    
    if(idade <= idade_maxima_para_desconto_infantil || idade >= idade_minima_para_desconto_idoso){
        printf("Você teve direito ao desconto, o valor da sua entrada é: R$ %.2f", valor_do_ingresso_com_desconto);
    } else {
        printf("Você não teve direito ao desconto, o valor da sua entrada é: R$ %.2f", valor_do_ingresso_com_desconto * 2);
    }
}