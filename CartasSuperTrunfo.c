#include <stdio.h>
// Desafio Super Trunfo - Países
// Teste Alex Dos Santos Lacerda
// Modo Novato

//Declaração de variáveis:

int main(){
    char estado,Estado1;
    char codigo[5],cidade[20],Codigo1[5],Cidade1[20];                     
    int populacao,Populacao1;
    float area,pib,Area1,Pib1;
    int turistico,Turistico1;



    // Entrada de dados com 'printf' e saída de dados com 'scanf':
    
    printf("Estado de 'A' a 'H': \n");
    scanf(" %c",&estado);

    printf("Código da Carta 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

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
    printf("População:%d\n", populacao);
    printf("Àrea em km²:%f\n",area);
    printf("Pib Iterno Bruto:%f\n",pib);
    printf("Numero Pontos turistico:%i\n\n",turistico);

    // Entrada de dados com 'printf' e saída de dados com 'scanf':
 
    printf("Estado: \n");
    scanf(" %s",&Estado1);

    printf("Código Carta: \n");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("O Número de habitantes da cidade: \n");
    scanf("%d", &Populacao1);

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
    printf("População:%d\n", Populacao1);
    printf("Àrea em km²:%f\n",Area1);
    printf("Pib Iterno Bruto:%f\n",Pib1);
    printf("Numero Pontos turistico:%i\n\n",Turistico1);
    



    return 0;
}
