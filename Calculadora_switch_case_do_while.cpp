#include <cstdio>
int main(){
    char op;
    float num1, num2, resultado;
    do{
    printf("\n====Calculadora Simples===\n");
    printf("Escolha a operação. \n ( +, -, ,/, *).\n");
    scanf(" %c", &op);
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    
    switch(op){
     case '+':
     resultado = num1 + num2;
     printf("O resultado da Soma e: %.2f.", resultado);
     break;
     
     case '-':
     resultado = num1 - num2;
     printf("O resultado da Subtração e: %.2f.", resultado);
     break;
     
     case '*':
     resultado = num1 * num2;
     printf("O resultado da Multiplicação e: %2.f.", resultado);
     break;
     
     case '/':
     if(num2 != 0){
     resultado = num1 / num2;
     printf("Resultado da Divisão e: %.2f.", resultado);
     break;
     
    
     }
     default:{
         printf("Esta divisão por Zero não existe.", resultado);
         break;
     }
    }
    }while(2);
    return 0;
}