#include <stdio.h>

int main(){
    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float pib1, area1, pib2, area2;


    //Mensagem inicial para o usuário do programa
    printf("============Sistema de Cadastro de Cartas Super-Trunfo============\n\nNotas do desenvolvedor:\n\n");
    printf("    -Utilize apenas caracteres simples!\n    -Se o nome for composto use underline(_) no lugar de espaço!\n\n");

    //================ Bloco de Cadastro de itens da carta 1 ================
    printf("Carta 1: \n\n");
    printf("Insira o Estado: \n"); 
    scanf(" %s", &estado1); 

    printf("Insira o código da carta com até 3 dígitos: \n"); 
    scanf(" %s", &codigo1); 

    printf("Insira o nome da cidade: \n"); 
    scanf(" %s", &cidade1); 

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira o numero de pontos turisticos nesse local: \n");
    scanf(" %d", &pontos_turisticos1);

    printf("Agora o PIB deste local: \n");
    scanf(" %f", &pib1);

    printf("Por ultimo insira a área deste local em km²: \n");
    scanf(" %f", &area1);
    printf("\n");
    //================ Bloco de Cadastro de itens da carta 1 ================


    //Informativo ao usuário que o segundo bloco está sendo iniciado
    printf("============ Cadastro da Segunda Carta ============\n\n");


    //================ Bloco de Cadastro de itens da carta 2 ================
    printf("Carta 2: \n");
    printf("Insira o Estado: \n"); 
    scanf(" %s", &estado2); 

    printf("Insira o código da carta com até 3 dígitos: \n"); 
    scanf(" %s", &codigo2); 

    printf("Insira o nome da cidade: \n"); 
    scanf(" %s", &cidade2); 

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira o numero de pontos turisticos nesse local: \n");
    scanf(" %d", &pontos_turisticos2);

    printf("Agora o PIB deste local: \n");
    scanf(" %f", &pib2);


    printf("Por ultimo insira a área deste local: \n");
    scanf(" %f", &area2);

    printf("\n---====FIM DO CADASTRO===---");
    //================ Bloco de Cadastro de itens da carta 2 ================

float densidadepop1 = populacao1/area1, pibpercapita = pib1/populacao1;

float densidadepop2 = populacao2/area2, pibpercapita = pib2/populacao2;

    printf("\n============== CARTA 1 ==============\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2", densidadepop1);
    print("PIB Per-capita: %.2f Reais", pipbpercapita1);


    printf("\n============== CARTA 2 ==============\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
   printf("Densidade Populacional: %.2f hab/km2", densidadepop2);
    print("PIB Per-capita: %.2f Reais", pipbpercapita2); printf("\n=====================================\n");


return 0;
}