#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[3], codigo[10], nome[50];
    int  populacao;
    float area, pib;
    int  pontosTuristicos;
} Carta;

void compara(Carta a, Carta b, int opcao) {
    switch(opcao) {
        case 1: // População
            if(a.populacao > b.populacao) printf("Maior populacao: %s\n", a.nome);
            else if(b.populacao > a.populacao) printf("Maior populacao: %s\n", b.nome);
            else printf("Empate em populacao.\n");
            break;
        case 2: // Área
            if(a.area > b.area) printf("Maior area: %s\n", a.nome);
            else if(b.area > a.area) printf("Maior area: %s\n", b.nome);
            else printf("Empate em area.\n");
            break;
        case 3: // PIB
            if(a.pib > b.pib) printf("Maior PIB: %s\n", a.nome);
            else if(b.pib > a.pib) printf("Maior PIB: %s\n", b.nome);
            else printf("Empate em PIB.\n");
            break;
        case 4: // Pontos turísticos
            if(a.pontosTuristicos > b.pontosTuristicos) printf("Mais pontos turísticos: %s\n", a.nome);
            else if(b.pontosTuristicos > a.pontosTuristicos) printf("Mais pontos turísticos: %s\n", b.nome);
            else printf("Empate em pontos turísticos.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

int main() {
    Carta c1, c2;
    // (Cadastro igual ao nível Novato – para economizar espaço, não repetido aqui)
    printf("Cadastro da carta 1...\n");
    // ... repita as leituras aqui

    int opc;
    do {
        printf("\nMenu de comparacao\n");
        printf("1-Populacao  2-Area  3-PIB  4-Pontos Turisticos  0-Sair\n");
        scanf("%d", &opc);
        if(opc) compara(c1, c2, opc);
    } while(opc != 0);

    return 0;
}
