//Calculadora basica usando if else.
#include <cstdio>
int main(){
    float numero1, numero2, resultado;
    char op;
    
    printf("==-Calculadora SImples, IF ELSE.-==\n");
    
    printf("Digite a função desejada:\n ( +, -, *, /).\n");
    scanf("%c", &op);
    
    
    
    printf("Digite o primeiro numero:\n");
    scanf("%f", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &numero2);
    
    if(op == '+'){
        resultado = numero1 + numero2;
        printf("O resultado da soma e:%.2f", resultado);
    }
    else if(op == '-'){
        resultado = numero1 - numero2;
        printf("O resultado da subtração e:%.2f ", resultado);
    }
    else if(op == '*'){
        resultado = numero1 * numero2;
        printf("O resultado da multiplicação e:%.2f", resultado);
    }
    if(op == '/'){
        if(numero2 == 0){
            printf("Erro: Divisão por zero não e permitido!");
        }
        else{
            resultado = numero1 / numero2;
            printf("Resultado da divisão e: %.2f", resultado);
        }
    }
    return 0;
}