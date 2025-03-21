#include <stdio.h>


int main () {
char  nomecidade1[50], nomecidade2[50], estado1, estado2, codigoest1[3], codigoest2[3];
int  populacao1, populacao2, turistico1, turistico2;
float  area1, area2, pib1, pib2, densi1, densi2, pibper1, pibper2;
 
    

printf("\n----------SUPER TRUNFO----------\n\n");
printf("Digite o estado da cidade 1: \n");
scanf("%s", &estado1);
printf("Digite o código da cidade 1: \n");
scanf("%s", &codigoest1);
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
densi1 = populacao1 / area1;
pibper1 = pib1 / populacao1;



printf("\n----------SUPER TRUNFO----------\n\n");
printf("Digite o estado da cidade 2: \n");
scanf("%s", &estado2);
printf("Digite o código da cidade 2: \n");
scanf("%s", &codigoest2);
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
densi1 = populacao2 / area2;
pibper1 = pib2 / populacao2;

printf("As cartas são: \n\n");
printf("Estado da cidade 1: %s \n", estado1);
printf("Código cidade 1: %s \n", codigoest1);
printf("Nome da cidade 1: %s \n",nomecidade1);
printf("População da cidade 1: %d \n",populacao1);
printf("Área da cidade1 : %f \n",area1);
printf("PIB: %f \n",pib1);
printf("Pontos turísticos: %d \n",turistico1);
printf("Densidade populacional da cidade 1: %.2f \n", densi1);
printf("Pib per capta da cidade 1: %.2f \n", pibper1);


printf("---------------------\n");

printf("Estado da cidade 2: %s \n", estado2);
printf("Código cidade 2: %s \n", codigoest2);
printf("Nome da cidade 2: %s \n",nomecidade2);
printf("População da cidade 2: %d \n",populacao2);
printf("Área da cidade 2: %f \n",area2);
printf("PIB: %f \n",pib2);
printf("Pontos turísticos: %d \n",turistico2);
printf("Densidade populacional da cidade 2: %.2f \n", densi2);
printf("Pib per capta da cidade 2: %.2f \n", pibper2);    

return 0;

}