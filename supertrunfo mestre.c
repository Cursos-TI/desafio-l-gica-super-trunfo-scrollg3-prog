#include <stdio.h>

typedef struct {
    char estado[3], codigo[10], nome[50];
    int  populacao;
    float area, pib;
    int  pontosTuristicos;
} Carta;

float obterAtributo(Carta c, int op){
    switch(op){
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        default: return 0;
    }
}

int main(){
    Carta c1, c2;
    // Cadastro igual aos anteriores
    printf("Cadastro da carta 1...\n");
    // ... repita as leituras aqui

    int a1,a2;
    do {
        printf("\nEscolha dois atributos para comparar:\n");
        printf("1-Populacao  2-Area  3-PIB  4-Pontos Turisticos  0-Sair\n");
        scanf("%d",&a1);
        if(a1==0) break;
        scanf("%d",&a2);
        if(a2==0) break;

        float v1a = obterAtributo(c1,a1), v2a = obterAtributo(c2,a1);
        float v1b = obterAtributo(c1,a2), v2b = obterAtributo(c2,a2);

        // Soma dos dois atributos para decidir – exemplo de lógica avançada
        float score1 = v1a + v1b;
        float score2 = v2a + v2b;

        const char* vencedor = (score1 > score2) ? c1.nome :
                               (score2 > score1) ? c2.nome : "Empate";

        printf("Resultado: %s\n", vencedor);
    } while(1);

    return 0;
}
