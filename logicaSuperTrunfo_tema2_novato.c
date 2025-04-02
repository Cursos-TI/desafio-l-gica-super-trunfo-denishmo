#include <stdio.h>

int main(){
    char cod1[3], cod2[3];
    char cidade1[30], cidade2[30];
    char estado1[30], estado2[30];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    float pibper1, pibper2;
    float denspop1, denspop2;
    int turis1, turis2;
    float superPoder1, superPoder2;

    
    
    //CARTA Número 01---------------------------------------

    printf("Digite o código da carta: ");
    scanf("%s", &cod1);

    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &pop1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turis1);

    denspop1 = (pop1 / area1);
    pibper1 = (pib1 / pop1);
    superPoder1 = ((float)pop1 + area1 + pib1 + pibper1 + denspop1 + (float)turis1);
    

    //CARTA Número 02---------------------------------------

    printf("Digite o código da carta: ");
    scanf("%s", &cod2);

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turis2);

    denspop2 = (pop2 / area2);
    pibper2 = (pib2 / pop2);
    superPoder2 = ((float)pop2 + area2 + pib2 + pibper2 + denspop2 + (float)turis2);

    printf("Carta 1: \nCódigo: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f\nPontos Turisticos: %d\n",
         cod1, estado1, cidade1, pop1, area1, pib1, turis1);
    printf("Densidade Populacional: %f\nPIB per Capita: %.2f\nSuper Poder: %f\n\n", denspop1, pibper1, superPoder1);

    printf("Carta 2: \nCódigo: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea: %f Km²\nPIB: %f\nPontos Turisticos: %d\n",
         cod2, estado2, cidade2, pop2, area2, pib2, turis2);
    printf("Densidade Populacional: %f\nPIB per Capita: %.2f\nSuper Poder: %f\n\n", denspop2, pibper2, superPoder2);

    //Comparação das Cartas-------------------------------------------------


    //POPULAÇÃO
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s: %u\nCarta 2 - %s: %u\n", estado1, pop1, estado2, pop2);
    if(pop1 > pop2){
     printf("Carta 1 - %s venceu - População: %u\n\n", cidade1, pop1);     
    } else {
     printf("Carta 2 - %s venceu - População: %u\n\n", cidade2, pop2);
    }

    //ÁREA
    printf("Comparação de cartas (Atributo: Área)\n");
    printf("Carta 1 - Área: %.2f\nCarta 2 - Área: %.2f\n", area1, area2);
    if(area1 > area2){
     printf("Carta 1 venceu! Área: %.2f\n\n", area1);     
    } else {
     printf("Carta 2 venceu! Área: %.2f\n\n", area2);
    }

    //PIB
    printf("Comparação de cartas (Atributo: PIB)\n");
    printf("Carta 1 - PIB: %.2f\nCarta 2 - PIB: %.2f\n", pib1, pib2);
    if(pib1 > pib2){
     printf("Carta 1 venceu! PIB: %.2f\n\n", pib1);     
    } else {
     printf("Carta 2 venceu! PIB: %.2f\n\n", pib2);
    }

    //PONTOS TURÍSTICOS
    printf("Comparação de cartas (Atributo: Número de Pontos Turísticos)\n");
    printf("Carta 1 - Pontos Turísticos: %d\nCarta 2 - Pontos Turísticos: %d\n", turis1, turis2);
    if(turis1 > turis2){
     printf("Carta 1 venceu! Pontos Turísticos: %d\n\n", turis1);     
    } else {
     printf("Carta 2 venceu! Pontos Turísticos: %d\n\n", turis2);
    }

    //DENSIDADE POPULACIONAL
    printf("Comparação de cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - Densidade Populacional: %.2f\nCarta 2 - Densidade Populacional: %.2f\n", denspop1, denspop2);
    if(denspop1 < denspop2){
     printf("Carta 1 venceu! Densidade Populacional: %.2f\n\n", denspop1);     
    } else {
     printf("Carta 2 venceu! Densidade Populacional: %.2f\n\n", denspop2);
    }

    //PIB PER CAPITA
    printf("Comparação de cartas (Atributo: PIB per Capita)\n");
    printf("Carta 1 - PIB per Capita: %.2f\nCarta 2 - PIB per Capita: %.2f\n",pibper1, pibper2);
    if(pibper2 > pibper2){
     printf("Carta 1 venceu! PIB per Capita: %.2f\n\n", pibper1);     
    } else {
     printf("Carta 2 venceu! PIB per Capita: %.2f\n\n", pibper2);
    }

    //SUPER PODER 
    printf("Comparação de cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - Super Poder: %.2f\nCarta 2 - Super Poder: %.2f\n", superPoder1, superPoder2);
    if(superPoder1 < superPoder2){
     printf("Carta 1 venceu! Super Poder: %.2f\n\n", superPoder1);     
    } else {
     printf("Carta 2 venceu! Super Poder: %.2f\n\n\n", superPoder2);
    }

    printf("Desenvolvido por Denis Mendonça, obrigado por jogar!!!");
    


    return 0;

}