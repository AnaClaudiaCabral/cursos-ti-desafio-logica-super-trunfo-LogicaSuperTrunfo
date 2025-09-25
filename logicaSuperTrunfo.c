#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Brasil
// Tema 2 - Nível Aventureiro - Menu Interativo 
// Aluna - Ana Claudia Cabral 

int main() {
    int escolha;
    srand(time(0));
    // Definição das variáveis
//CARTA 1
char estado1, codigo1[20], cidade1[50];
int populacao1, turismo1;
float area1, pib1, densidadepopulacional1, pibpercapita1;
    
//CARTA 2
char estado2, codigo2[20], cidade2[50];
int populacao2, turismo2;
float area2, pib2, densidadepopulacional2, pibpercapita2;

//resultado
float superpoder1, superpoder2;
int superpoder, resultadopopulacao, resultadoarea, resultadopib;
int resultadoturismo, resultadodensidadepopulacional, resultadopibpercapita;
  
    // Cadastro das Cartas
//Carta 1
printf("<<<< Desafio Super Trunfo Brasil - Nível 2 >>>>\n");
printf("*** Carta 1 ***\n");

printf("De A a H, informe uma letra representando um dos oito Estados Brasileiros: \n");
scanf(" %c", &estado1);

printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
scanf("%19s", codigo1);

printf("Informe o nome de uma Cidade do Estado informado anteriormente: \n");
scanf("%49s", cidade1);

printf("Informe o número de habitantes desta Cidade: \n");
scanf(" %d", &populacao1);

printf("Informe a área da Cidade em Km2: \n");
scanf("%f", &area1);

printf("Informe o PIB desta Cidade: \n");
scanf(" %f", &pib1);

printf("Informe a quantidade de Pontos Turísticos existentes nesta cidade: \n");
scanf(" %i", &turismo1);

//calculo para comparação
densidadepopulacional1 = (populacao1)/area1;
pibpercapita1 = (pib1)/populacao1;
//Cáculo do Super Poder para a carta 1
superpoder1 = (populacao1 + area1 + pib1 + turismo1 + pibpercapita1)/densidadepopulacional1;


    //Bloco de saída de dados Carta 1
printf("<<< Carta 1 >>>\n");
printf("Estado: %c\n", estado1);
printf("Código Estado: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("Pontos Turísticos: %i\n", turismo1);
printf("Densidade Populacional: %.2f hab/Km²\n",densidadepopulacional1);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita1);
printf("Super Poder: %.2f\n", superpoder1);

//Carta 2
printf("*** Carta 2 ***\n");

printf("De A a H, informe uma letra representando um dos oito Estados Brasileiros: \n");
scanf(" %c", &estado2);

printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
scanf("%19s", codigo2);

printf("Informe o nome de uma Cidade do Estado informado anteriormente: \n");
scanf("%49s", cidade2);

printf("Informe o número de habitantes desta Cidade: \n");
scanf(" %d", &populacao2);

printf("Informe a área da Cidade em Km2: \n");
scanf("%f", &area2);

printf("Informe o PIB desta Cidade: \n");
scanf(" %f", &pib2);

printf("Informe a quantidade de Pontos Turísticos existentes nesta cidade: \n");
scanf(" %i", &turismo2);

//calculo para comparação
densidadepopulacional2 = (populacao2)/area2;
pibpercapita2 = (pib2)/populacao2;

//Cáculo do Super Poder
superpoder2 = (populacao2 + area2 + pib2 + turismo2 + pibpercapita2)/densidadepopulacional2;

    //Bloco de saída de dados Carta 2
printf("Estado: %c\n", estado2);
printf("Código Estado: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("Pontos Turísticos: %i\n", turismo2);
printf("Densidade Populacional: %.2f hab/Km²\n",densidadepopulacional2);
printf("PIB Per Capita: R$ %.2f\n", pibpercapita2);
printf("Super Poder: %.2f\n", superpoder2);

 // Comparação de Cartas:
// Estruturas de decisão como if, if-else para comparar atributos.
    resultadopopulacao = (populacao1 > populacao2);
if (populacao1 > populacao2) {
    printf("Populacação - Carta 1 Venceu!\n");
} else if (populacao1 < populacao2) {
    printf("População - Carta 2 Venceu!\n");
} else {
    printf("População - Empate!\n");
}
   
resultadoarea = (area1 > area2);
if (area1 > area2){
    printf("Área - Carta 1 Venceu!\n");
} else if (area1 < area2){
    printf("Área - Carta 2 Venceu!\n");
} else {
    printf("Área - Empate!\n");
}

resultadopib = (pib1 > pib2);
if (pib1 > pib2){
    printf("PIB Carta 1 Venceu!\n");
} else if (pib1 < pib2){
    printf("PIB - Carta 2 Venceu!\n");
} else {
    printf("PIB - Empate!\n");
}
    
resultadoturismo = (turismo1 > turismo2);
if (turismo1 > turismo2){
    printf("Turismo Carta 1 Venceu!\n");
} else if (turismo1 < turismo2){
    printf("Turismo - Carta 2 Venceu!\n");
} else {
    printf("Turismo - Empate!\n");
}
    
resultadodensidadepopulacional = (densidadepopulacional1 < densidadepopulacional2);
if(densidadepopulacional1 < densidadepopulacional2){
    printf("Densidade Populacional - Carta 1 Venceu! (Menor é melhor)\n");
} else if (densidadepopulacional1 > densidadepopulacional2){
    printf("Densidade Populacional - Carta 2 Venceu!\n");
} else {
    printf("Densidade Populacional - Empate!\n");
}
    
resultadopibpercapita = (pibpercapita1 > pibpercapita2);
if(pibpercapita1 > pibpercapita2){
    printf("O PIB Per Capita da Carta 1 Venceu!\n");
} else if (pibpercapita1 < pibpercapita2){
    printf("O PIB Per Capita - Carta 2 Venceu!\n");
} else {
    printf("PIB Per Capita - Empate!\n");
}

 //menu interativo - início do jogo
 printf("## Super Trunfo Brasil ##\n");
 printf("-- Qual atributo você quer comparar? --\n ");
 printf("1. População\n");
 printf("2. Área\n");
 printf("3. PIB\n");
 printf("4. Pontos Turísticos\n");
 printf("5. Densidade Demográfica\n");
 printf("6. Super Poder\n");
 scanf("%d", &escolha);

 switch (escolha)
 { 
case 1:
   printf("População\n");
   printf("Carta 1: %s - População: %d\n", cidade1, populacao1);
   printf("Carta 2: %s - População: %d\n", cidade2, populacao2);
   if (populacao1 > populacao2){
    printf("-- Carta 1 Venceu! --\n");
   } else if (populacao1 < populacao2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }
    break;
case 2:
   printf("Área\n");
   printf("Carta 1: %s - Área: %.2f\n", cidade1, area1);
   printf("Carta 2: %s - Área: %.2f\n", cidade2, area2);
   if (area1 > area2){
    printf("-- Carta 1 Venceu! --\n");
   } else if (area1 < area2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }
    break;
case 3:
   printf("PIB\n");
   printf("Carta 1: %s - PIB: %.2f\n", cidade1, pib1);
   printf("Carta 2: %s - PIB: %.2f\n", cidade2, pib2);
   if (pib1 > pib2){
    printf("-- Carta 1 Venceu! --\n");
   } else if (pib1 < pib2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }
    break;
case 4:
   printf("Pontos Turísticos\n");
   printf("Carta 1: %s - Turismo: %i\n", cidade1, turismo1);
   printf("Carta 2: %s - Turismo: %i\n", cidade2, turismo2);
   if (turismo1 > turismo2){
    printf("-- Carta 1 Venceu! --\n");
   } else if (turismo1 < turismo2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }
    break;
case 5:
   printf("Densidade Demográfica\n");
   printf("Carta 1: %s - Densidade Demográfica: %.2f\n", cidade1, densidadepopulacional1);
   printf("Carta 2: %s - Densidade Demográfica: %.2f\n", cidade2, densidadepopulacional2);
   if (densidadepopulacional1 < densidadepopulacional2){ // Menor densidade é melhor
    printf("-- Carta 1 Venceu! --\n");
   } else if (densidadepopulacional1 > densidadepopulacional2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }
    break;
case 6:
   printf("Super Poder\n");
   printf("Carta 1: %s - Super Poder: %.2f\n", cidade1, superpoder1);
   printf("Carta 2: %s - Super Poder: %.2f\n", cidade2, superpoder2);
   if (superpoder1 > superpoder2){
    printf("-- Carta 1 Venceu! --\n");
   } else if (superpoder1 < superpoder2) {
    printf("-- Carta 2 Venceu! --\n");
   } else {
    printf("-- Empate! --\n");
   }

   break;

    default:
    printf("Opção Inválida!\n");
 }

printf("Novo Commit\n");

return 0;
}
