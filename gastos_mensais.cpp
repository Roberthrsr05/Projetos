#include <cstdio>

float salario, saldoSalario, luz, agua, internet, iPhone, barbeiro;

void calculoGastos() {
    printf("Quanto voce recebe por mes? ");
    scanf("%f", &salario);

    printf("Quanto voce paga de luz por mes? ");
    scanf("%f", &luz);

    printf("Quanto voce paga de agua por mes? ");
    scanf("%f", &agua);

    printf("Quanto voce paga de internet por mes? ");
    scanf("%f", &internet);

    printf("Quanto voce gasta por mes no barbeiro? ");
    scanf("%f", &barbeiro);

    printf("Quanto voce guarda por mes para o novo iPhone? ");
    scanf("%f", &iPhone);
    saldoSalario = salario - (luz + agua + internet + barbeiro + iPhone);
    printf("\n===== Resumo Financeiro do Mes =====\n");
    printf("Salario total: R$%.2f\n", salario);
    printf("Gastos fixos (luz + agua + internet + barbeiro): R$%.2f\n", (luz + agua + internet + barbeiro));
    printf("Economia para o novo iPhone: R$%.2f\n", iPhone);
    printf("------------------------------------\n");
    printf("Sobra para voce no fim do mes: R$%.2f\n", saldoSalario);
    printf("====================================\n");
}

int main() {
    calculoGastos();
    return 0;
}
