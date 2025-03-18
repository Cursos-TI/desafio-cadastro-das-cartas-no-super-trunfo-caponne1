#include <stdio.h>


int main () {
char  nomecidade1[50], nomecidade2[50];
int  populacao1, populacao2, turistico1, turistico2;
float  area1, area2, pib1, pib2;
 
    

printf("\n----------SUPER TRUNFO----------\n\n");
printf("Digite o nome da cidade 1: \n");
scanf("%s", &nomecidade1);
printf("Digite a popupação total da cidade 1: \n");
scanf("%d", &populacao1);
printf("Digite o tamanho da área da cidade 1: \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade 1: \n");
scanf("%f", &pib1);
printf("Digite quantos pontos turísticos há na cidade 1: \n");
scanf("%d", &turistico1);

printf("\n----------SUPER TRUNFO----------\n\n");
printf("Digite o nome da cidade 2: \n");
scanf("%s", &nomecidade2);
printf("Digite a popupação total da cidade 2: \n");
scanf("%d", &populacao2);
printf("Digite o tamanho da área da cidade 2: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade 2: \n");
scanf("%f", &pib2);
printf("Digite quantos pontos turísticos há na cidade 2: \n");
scanf("%d", &turistico2);

printf("As cartas são: \n\n");
printf("Nome da cidade 1: %s \n",nomecidade1);
printf("População da cidade 1: %d \n",populacao1);
printf("Área da cidade1 : %f \n",area1);
printf("PIB: %f \n",pib1);
printf("Pontos turísticos: %d \n",turistico1);

printf("---------------------\n");

printf("Nome da cidade 2: %s \n",nomecidade2);
printf("População da cidade 2: %d \n",populacao2);
printf("Área da cidade 2: %f \n",area2);
printf("PIB: %f \n",pib2);
printf("Pontos turísticos: %d \n",turistico2);
    


}