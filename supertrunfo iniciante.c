#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    int  populacao;
    float area;
    float pib;
    int  pontosTuristicos;
} Carta;

int main() {
    Carta c1, c2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");  scanf("%2s", c1.estado);
    printf("Codigo: ");  scanf("%9s", c1.codigo);
    printf("Cidade: ");  scanf(" %[^\n]", c1.nome);
    printf("Populacao: "); scanf("%d", &c1.populacao);
    printf("Area: ");      scanf("%f", &c1.area);
    printf("PIB: ");       scanf("%f", &c1.pib);
    printf("Pontos Turisticos: "); scanf("%d", &c1.pontosTuristicos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");  scanf("%2s", c2.estado);
    printf("Codigo: ");  scanf("%9s", c2.codigo);
    printf("Cidade: ");  scanf(" %[^\n]", c2.nome);
    printf("Populacao: "); scanf("%d", &c2.populacao);
    printf("Area: ");      scanf("%f", &c2.area);
    printf("PIB: ");       scanf("%f", &c2.pib);
    printf("Pontos Turisticos: "); scanf("%d", &c2.pontosTuristicos);

    // Comparação fixa: maior população vence
    printf("\n--- Resultado ---\n");
    if (c1.populacao > c2.populacao)
        printf("Carta vencedora: %s (%s)\n", c1.nome, c1.codigo);
    else if (c2.populacao > c1.populacao)
        printf("Carta vencedora: %s (%s)\n", c2.nome, c2.codigo);
    else
        printf("Empate em populacao!\n");

    return 0;
}
