#include <stdio.h>

int main() {
    char nomecidade1[50], nomecidade2[50], estado1[3], estado2[3], codigoest1[4], codigoest2[4];
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densi1, densi2, pibper1, pibper2;
    float superPoder1, superPoder2;

    printf("\n----------SUPER TRUNFO----------\n\n");
    printf("Digite o estado da cidade 1: \n");
    scanf("%s", estado1);
    printf("Digite o código da cidade 1: \n");
    scanf("%s", codigoest1);
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nomecidade1);
    printf("Digite a população total da cidade 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite o tamanho da área da cidade 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos há na cidade 1: \n");
    scanf("%d", &turistico1);
    densi1 = (float)populacao1 / area1;
    pibper1 = pib1 / (float)populacao1;
    superPoder1 = populacao1 + area1 + pib1 + turistico1 + pibper1 + (1/densi1);
    

    printf("\n---------- SUPER TRUNFO ----------\n\n");
    printf("Digite o estado da cidade 2: \n");
    scanf("%s", estado2);
    printf("Digite o código da cidade 2: \n");
    scanf("%s", codigoest2);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2);
    printf("Digite a população total da cidade 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite o tamanho da área da cidade 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos há na cidade 2: \n");
    scanf("%d", &turistico2);
    densi2 = (float)populacao2 / area2;
    pibper2 = pib2 / (float)populacao2;
    superPoder2 = populacao2 + area2 + pib2 + turistico2 + pibper2 + (1/densi2);

    printf("As cartas são: \n\n");
    printf("Estado da cidade 1: %s \n", estado1);
    printf("Código cidade 1: %s \n", codigoest1);
    printf("Nome da cidade 1: %s \n", nomecidade1);
    printf("População da cidade 1: %lu \n", populacao1);
    printf("Área da cidade 1: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turísticos: %d \n", turistico1);
    printf("Densidade populacional da cidade 1: %.2f \n", densi1);
    printf("PIB per capita da cidade 1: %.2f \n", pibper1);
    printf("SUPER PODER da cidade 1: %f", superPoder1);

    printf("\n--------------------------------------\n");

    printf("Estado da cidade 2: %s \n", estado2);
    printf("Código cidade 2: %s \n", codigoest2);
    printf("Nome da cidade 2: %s \n", nomecidade2);
    printf("População da cidade 2: %lu \n", populacao2);
    printf("Área da cidade 2: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d \n", turistico2);
    printf("Densidade populacional da cidade 2: %.2f \n", densi2);
    printf("PIB per capita da cidade 2: %.2f \n", pibper2);
    printf("SUPER PODER da cidade 2: %f", superPoder2);

    printf("\n--------------- DUELO ------------------\n\n");
    int escolha;

    printf("escolha o atributo para comparação:\n");
    printf("1. população\n2. área\n3. pib\n4. pontos turísticos\n5. densidade demográfica.\n");
    scanf("%d", &escolha);

    

    switch(escolha){
        case 1:
            if (populacao1>populacao2){
                printf("a cidade %s, com a população de %d , ganhou!\n", nomecidade1,populacao1);
            }else if (populacao1==populacao2){
                printf("empate!\n");
            }else{
                printf("a cidade %s, com a população de %d , ganhou!\n", nomecidade2,populacao2);
            }
            break;

        case 2:
            if (area1>area2){
                printf("a cidade %s, com a área de %f , ganhou!\n", nomecidade1,area1);
            }else if (area1==area2){
                printf("empate!\n");
            }else{
                printf("a cidade %s, com a população de %f , ganhou!\n", nomecidade2,area2);
            }
            break;

        case 3:
            if (pib1>pib2){
                printf("a cidade %s, com a população de %f , ganhou!\n", nomecidade1,pib1);
            }else if (pib1==pib2){
                printf("empate!\n");
            }else{
                printf("a cidade %s, com a população de %f , ganhou!\n", nomecidade2,pib2);
            }
            break;

        case 4:
            if (turistico1>turistico2){
                printf("a cidade %s, com a população de %d , ganhou!\n", nomecidade1,turistico1);
            }else if (turistico1==turistico2){
                printf("empate!\n");
            }else{
                printf("a cidade %s, com a população de %d , ganhou!\n", nomecidade2,turistico2);
            }
            break;

        case 5:
            if (densi1<densi2){
                printf("a cidade %s, com a população de %f , ganhou!\n", nomecidade1,densi1);
            }else if (densi1==densi2){
                printf("empate!\n");
            }else{
                printf("a cidade %s, com a população de %f , ganhou!\n", nomecidade2,densi2);
            }
            break;

        default:
          printf("inválido.");
            break;
    }


    return 0;
}