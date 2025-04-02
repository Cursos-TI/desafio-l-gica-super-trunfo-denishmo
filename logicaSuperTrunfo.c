#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char cod1[30] = "Carta 1", cod2[30] = "Carta 2";
    char cidade1[30] = "São Paulo", cidade2[30] = "Rio de Janeiro";
    char estado1[30] = "São Paulo", estado2[30] = "Rio de Janeiro";
    unsigned long int pop1 = 11895578, pop2 = 336729894; 
    //A tag unsigned long int é um tipo de variável que serve para armazenar números inteiros não negativos 
    float area1 = 248219.48, area2 = 248219.48;
    float pib1 = 2719751231, pib2 = 949300770;
    float pibper1 = 70470.53, pibper2 = 71849.66;
    float denspop1 =  7528.3, denspop2 = 366.97;
    int turis1 = 25, turis2 = 25;
    float superPoder1, superPoder2;
    int escolhaAtributo;
    char nome[20];

    
    //CARTA Número 01---------------------------------------

    denspop1 = (pop1 / area1);
    pibper1 = (pib1 / pop1);
    superPoder1 = ((float)pop1 + area1 + pib1 + pibper1 + denspop1 + (float)turis1);
    

    //CARTA Número 02---------------------------------------

    denspop2 = (pop2 / area2);
    pibper2 = (pib2 / pop2);
    superPoder2 = ((float)pop2 + area2 + pib2 + pibper2 + denspop2 + (float)turis2);


    //Menu interativo
    printf("Qual seu nome?\n");
    scanf("%s", &nome);
    printf("%s, Seja bem-vindo ao jogo Super Trunfo!\n", nome);
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Super Poder\n");
    scanf("%d", &escolhaAtributo);


    //A lógica
    switch (escolhaAtributo)
    {
    case 1:
          printf("População\n");
          break;
    case 2:
          printf("Área\n");
          break;

    case 3:
          printf("PIB\n");
          break;
    case 4:
          printf("Número de pontos turísticos\n");
          break;
    case 5:
          printf("Densidade demográfica\n");
          break;
    case 6:
          printf("Super Poder\n");
          break;  
    default:
        printf("Comando inválido, insira um número de 1 a 6 e tente novamente!!\n");
    break;
    }

//////////////////////////////////////////////////////////////////////////////////

    if (escolhaAtributo == 1){
        if (pop1 > pop2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: População\n %u / %u\n", pop1, pop2);
            printf("A %s venceu!\n", cod1);
        } else if (pop1 == pop2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: População\n %u / %u\n", pop1, pop2);
            printf("## Empate ##\n");

        } 
        else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: População\n %u / %u\n", pop2, pop1);
            printf("A %s venceu!\n", cod2);
            }
            
    } else if (escolhaAtributo == 2){
        if(area1 > area2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Área\n %f / %f\n", area1, area2);
            printf("A %s venceu!\n", cod1);
        } else if (area1 == area2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Área\n %u / %u\n", area1, area2);
            printf("## Empate ##\n");
        } else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: Área\n %f / %f\n", area2, area1);
            printf("A  %s venceu!\n", cod2);
            }

    } else if (escolhaAtributo == 3){
        if (pib1 > pib2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: PIB\n %f / %f\n", pib1, pib2);
            printf("A %s venceu!\n", cod1);
        
        } else if (pib1 == pib2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: PIB\n %u / %u\n", pib1, pib2);
            printf("## Empate ##\n");
        
        } else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: Área\n %f / %f\n", pib2, pib1);
            printf("A %s venceu!\n", cod2);
        }

    } else if (escolhaAtributo == 4){
        if (turis1 > turis2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Pontos Turísticos\n %d / %d\n", turis1, turis2);
            printf("A %s venceu!\n", cod1);
        } else if (turis1 == turis2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Pontos Turísticos\n %d / %d\n", turis1, turis2);
            printf("## Empate ##\n");
        } else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: Pontos Turísticos\n %d / %d\n", turis2, turis1);
            printf("A %s venceu!\n", cod2);
        }
    } else if (escolhaAtributo == 5){
        if (denspop1 < denspop2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Densidade demográfica\n %f / %f\n", denspop1, denspop2);
            printf("A %s venceu!\n", cod1);
        } else if (denspop1 == denspop2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: PIB\n %f / %f\n", denspop1, denspop2);
            printf("## Empate ##\n");
        } else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: Densidade demográfica\n %f / %f\n", denspop2, denspop2);
            printf("A %s venceu!\n", cod2);
        }
    } else if (escolhaAtributo == 6){
        if (superPoder1 > superPoder2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: Super Poder\n %f / %f\n", superPoder1, superPoder2);
            printf("A %s venceu!\n", cod1);
        } else if (superPoder1 == superPoder2){
            printf("%s / %s\n\n", cidade1, cidade2);
            printf("Atributo usado: PIB\n %f / %f\n", superPoder1, superPoder2);
            printf("## Empate ##\n");
        } else {
            printf("%s / %s\n\n", cidade2, cidade1);
            printf("Atributo usado: Super Poder\n %f / %f\n", superPoder2, superPoder1);
            printf("A %s venceu!\n", cod2);
        }
    } 

    return 0;
    } 

        
   

