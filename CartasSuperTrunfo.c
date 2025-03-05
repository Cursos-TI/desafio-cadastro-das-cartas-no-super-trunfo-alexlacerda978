#include <stdio.h>
// Desafio Super Trunfo - Países
// Teste Alex Lacerda

// Cadastro das Cartas:
int main(){
    
    char estado;
    char codigo[5];
    char cidade[20];
    int população;
    float area;
    float pib;
    int turistico; 

// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    
    printf("Estado de 'A' a 'H': \n");
    scanf(" %c",&estado);

    printf("Código da Carta 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &população);

    printf("Àrea em km²: \n");
    scanf("%f", &area);

    printf("Pib Interno Bruto: \n");
    scanf("%f", &pib);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico);
    // Exibição das Cartas
    printf("\n##Carta 01##\n");
    printf("Estado:%c\n", estado);
    printf("Código carta:%s\n", codigo);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População:%d\n", população);
    printf("Àrea em km²:%f\n",area);
    printf("Pib Iterno Bruto:%f\n",pib);
    printf("Numero Pontos turistico:%i\n\n",turistico);

    // Cadastro das Cartas:
    char Estado1;
    char Codigo1[5];
    char Cidade1[20];
    int População1;
    float Area1;
    float Pib1;
    int Turistico1;

    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

    printf("Estado: \n");
    scanf(" %s",&Estado1);

    printf("Código Carta: \n");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("O Número de habitantes da cidade: \n");
    scanf("%d", &População1);

    printf("Área (em km²): \n");
    scanf("%f", &Area1);

    printf("O Produto Interno Bruto da cidade: \n");
    scanf("%f", &Pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &Turistico1);
    // Exibição das Cartas
    printf("\n##Carta02##\n");
    printf("Estado:%c\n", Estado1);
    printf("Código carta:%s\n", Codigo1);
    printf("Nome da Cidade:%s\n", Cidade1);
    printf("População:%d\n", População1);
    printf("Àrea em km²:%f\n",Area1);
    printf("Pib Iterno Bruto:%f\n",Pib1);
    printf("Numero Pontos turistico:%i\n\n",Turistico1);
    


    return 0;
   
       
}