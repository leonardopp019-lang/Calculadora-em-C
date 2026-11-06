#include<stdio.h>
int main(){
int op;
float num1, num2, soma, sub, mult, div;
printf("Digite o primeiro numero");
    scanf("%f", &num1);
    printf("Digite o segundo numero");
    scanf("%f", &num2);
printf("*****ESCOLHA SUA OPERACAO*******\n");
printf("1 - Soma \n");
printf("2 - subtracao \n ");
printf("3 - multiplicaçao \n");
printf("4 - div \n");


printf("Escolha sua opcao; \n");
scanf("%d", &op);
switch(op){
case 1:

    soma = num1 + num2;

    printf("A soma de %.2f + %.2f vai ser: %.2f", num1 , num2, soma);
    break;
case 2:

    sub = num1 - num2;

    printf("A subtracao de %.2f - %.2f vai ser: %.2f", num1 , num2, sub);

    break;
case 3:

    mult = num1 * num2;

    printf("A multiplicacao de %.2f / %.2f vai ser: %.2f", num1 , num2, mult);
    break;
case 4:

    div = num1/num2;

     printf("A div de %.2f / %.2f vai ser: %.2f", num1 , num2, div);
     break;
default:
    printf("opcao invalida");

}





return 0;
}