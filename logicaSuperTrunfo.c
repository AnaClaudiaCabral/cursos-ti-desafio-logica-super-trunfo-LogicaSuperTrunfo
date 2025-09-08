#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Novato - Comparação das Cartas 
// Teste - Ana Claudia Cabral 

int main() {
    // Definição das variáveis
//CARTA 1
char estado1, codigo1[50], cidade1[80];
int populacao1, turismo1;
float area1, pib1, densidadepopulacional1, pibpercapita1;
    
//CARTA 2
char estado2, codigo2[50], cidade2[80];
int populacao2, turismo2;
float area2, pib2, densidadepopulacional2, pibpercapita2;

//resultado
float superpoder1, superpoder2;
int superpoder, resultadopopulacao, resultadoarea, resultadopib;
int resultadoturismo, resultadodensidadepopulacional, resultadopibpercapita;
  
    // Cadastro das Cartas
//Carta 1
printf("<<<< Desafio Super Trunfo - Nível 1 >>>>\n");
printf("*** Carta 1 ***\n");

printf("De A a H, informe uma letra representando um dos oito Estados Brasileiros: \n");
scanf(" %c", &estado1);

printf("Informe a letra escolhida do Estado seguida de um número de 01 a 04: \n");
scanf(" %s", &codigo1[50]);

printf("Informe o nome de uma Cidade do Estado informado anteriormente: \n");
scanf(" %s", &cidade1[80]);

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
scanf(" %s", &codigo2[50]);

printf("Informe o nome de uma Cidade do Estado informado anteriormente: \n");
scanf(" %s", &cidade2[80]);

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
superpoder1 = (populacao1 + area1 + pib1 + turismo1 + pibpercapita1)/densidadepopulacional1;
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
    printf("Populacação Carta 1 é maior.\n");
} else {
    printf("População Carta 2 é maior.\n");
}
   
resultadoarea = (area1 > area2);
if (area1 > area2){
    printf("Área Carta 1 é maior.\n");
} else {
    printf("Área Carta 2 é maior.\n");
}

resultadopib = (pib1 > pib2);
if (pib1 > area2){
    printf("PIB Carta 1 é maior.\n");
} else {
    printf("PIB Carta 2 é maior.\n");
}
    
resultadoturismo = (turismo1 > turismo2);
if (turismo1 > turismo2){
    printf("Turismo Carta 1 é maior.\n");
} else {
    printf("Turismo Carta 2 é maior.\n");
}
    
resultadodensidadepopulacional = (densidadepopulacional1 < densidadepopulacional2);
if(densidadepopulacional1 < densidadepopulacional1){
    printf("A Densidade Populacional da Carta 1 é menor.\n");
} else {
    printf("A Densidade Populacional da Carta 2 é menor.\n");
}
    
resultadopibpercapita = (pibpercapita1 > pibpercapita2);
if(pibpercapita1 > pibpercapita2){
    printf("O PIB Per Capita da Carta 1 é maior.\n");
} else {
    printf("O PIB Per Capita da Carta 2 é maior.\n");
}
    

//Exibição da Carta Vencedora - Super Poder
    printf("*** SUPER PODER ***\n");
superpoder = (superpoder1 > superpoder2);
if(superpoder1 > superpoder2){
    printf(" Carta 1 Venceu!\n");
} else {
    printf("Carta 2 Venceu!\n");
}

return 0;
}
