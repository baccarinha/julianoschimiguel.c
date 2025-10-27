#include <stdio.h>
#include <string.h>

// Função para mostrar o menu de cargos
void mostrarMenuCargo() {
    printf("\nEscolha o cargo fornecido para o funcionário:\n");
    printf("1 - Auxiliar nos Carrinhos\n");
    printf("2 - Operador de Caixa\n");
    printf("3 - Auxiliar de Self\n");
    printf("4 - Assistente de Frente de Caixa\n");
    printf("5 - Fiscal\n");
}

// Função para mostrar o menu de períodos
void mostrarMenuPeriodo() {
    printf("\nEscolha o período trabalhado deste funcionário:\n");
    printf("1 - 06:40 às 16:00\n");
    printf("2 - 08:00 às 16:20\n");
    printf("3 - 10:30 às 18:50\n");
    printf("4 - 13:00 às 21:20\n");
    printf("5 - 14:30 às 22:50\n");
}

// Função para converter número do cargo em texto
void obterCargo(int codigo, char cargo[]) {
    switch (codigo) {
        case 1: strcpy(cargo, "Auxiliar nos Carrinhos"); break;
        case 2: strcpy(cargo, "Operador de Caixa"); break;
        case 3: strcpy(cargo, "Auxiliar de Self"); break;
        case 4: strcpy(cargo, "Assistente de Frente de Caixa"); break;
        case 5: strcpy(cargo, "Fiscal"); break;
        default: strcpy(cargo, "Cargo inválido");
    }
}

// Função para mostrar o período formatado
void mostrarPeriodo(int periodo) {
    switch (periodo) {
        case 1: printf("Horário: 06:40 às 16:00\n"); break;
        case 2: printf("Horário: 08:00 às 16:20\n"); break;
        case 3: printf("Horário: 10:30 às 18:50\n"); break;
        case 4: printf("Horário: 13:00 às 21:20\n"); break;
        case 5: printf("Horário: 14:30 às 22:50\n"); break;
        default: printf("Período inválido!\n");
    }
}

int main() {
    char nome[50], cargo[50];
    int codigoCargo, periodo;

    printf("Digite o nome do funcionário: ");
    scanf("%49s", nome);

    mostrarMenuCargo();
    printf("Digite o número correspondente: ");
    scanf("%d", &codigoCargo);
    obterCargo(codigoCargo, cargo);

    mostrarMenuPeriodo();
    printf("Digite o número do período: ");
    scanf("%d", &periodo);

    printf("\n--- INFORMAÇÕES DO FUNCIONÁRIO DA LOJA FORT ATACADISTA - JUNDIAÍ ---\n");
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    mostrarPeriodo(periodo);

    return 0;
}
