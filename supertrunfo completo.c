#include <stdio.h>

typedef struct {
    char estado[3], codigo[10], nome[50];
    int  populacao;
    float area, pib;
    int  pontosTuristicos;
} Carta;

float atributo(Carta c, int op){
    switch(op){
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        default: return 0;
    }
}

void cadastro(Carta *c){
    printf("Estado: ");  scanf("%2s", c->estado);
    printf("Codigo: ");  scanf("%9s", c->codigo);
    printf("Cidade: ");  scanf(" %[^\n]", c->nome);
    printf("Populacao: "); scanf("%d", &c->populacao);
    printf("Area: ");      scanf("%f", &c->area);
    printf("PIB: ");       scanf("%f", &c->pib);
    printf("Pontos Turisticos: "); scanf("%d", &c->pontosTuristicos);
}

int main(){
    Carta c1, c2;
    printf("=== Cadastro Carta 1 ===\n"); cadastro(&c1);
    printf("\n=== Cadastro Carta 2 ===\n"); cadastro(&c2);

    int op;
    do{
        printf("\nMenu:\n1-Comparar 1 atributo\n2-Comparar 2 atributos\n0-Sair\n");
        scanf("%d",&op);
        if(op==1){
            int a;
            printf("Atributo (1-Populacao 2-Area 3-PIB 4-Pontos Turisticos): ");
            scanf("%d",&a);
            float v1 = atributo(c1,a), v2 = atributo(c2,a);
            printf("Resultado: %s\n",
                   (v1>v2)? c1.nome : (v2>v1)? c2.nome : "Empate");
        } else if(op==2){
            int a,b;
            printf("Dois atributos (1-4): ");
            scanf("%d %d",&a,&b);
            float s1 = atributo(c1,a)+atributo(c1,b);
            float s2 = atributo(c2,a)+atributo(c2,b);
            printf("Resultado: %s\n",
                   (s1>s2)? c1.nome : (s2>s1)? c2.nome : "Empate");
        }
    }while(op!=0);

    return 0;
}
