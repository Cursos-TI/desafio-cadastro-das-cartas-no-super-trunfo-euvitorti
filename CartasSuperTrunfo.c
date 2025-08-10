/* Super Trunfo - Países
 * Implementação dos 3 níveis (Novato, Aventureiro, Mestre) em um único arquivo C.
 *
 * Observações:
 * - Nível Novato: leitura e exibição de 2 cartas (sem laços e sem condicionais).
 * - Nível Aventureiro: adiciona Densidade e PIB per capita (cálculo e exibição; sem laços e sem condicionais).
 * - Nível Mestre: populações como unsigned long int; compara atributos (condicionais permitidas) e calcula Super Poder.
 *
 * Compilar: gcc trunfo.c -o trunfo -lm
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* ============================
       NÍVEL NOVATO
       Entrada e saída simples de 2 cartas
       Tipos: População (int), Área (float), PIB (float), Pontos turísticos (int)
       Sem uso de condicionais ou laços
       ============================ */
    printf("=== NÍVEL NOVATO: Cadastro de 2 cartas ===\n");
    /* Carta 1 - Novato */
    int pop1_n;
    float area1_n;
    float pib1_n;
    int pts1_n;
    printf("Carta 1 - Novato (insira: populacao(int) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%d %f %f %d", &pop1_n, &area1_n, &pib1_n, &pts1_n);

    /* Carta 2 - Novato */
    int pop2_n;
    float area2_n;
    float pib2_n;
    int pts2_n;
    printf("Carta 2 - Novato (insira: populacao(int) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%d %f %f %d", &pop2_n, &area2_n, &pib2_n, &pts2_n);

    /* Exibição - Novato */
    printf("\n--- Dados cadastrados (Novato) ---\n");
    printf("Carta 1:\n");
    printf("Populacao: %d\n", pop1_n);
    printf("Area: %.2f\n", area1_n);
    printf("PIB: %.2f\n", pib1_n);
    printf("Pontos turisticos: %d\n", pts1_n);

    printf("\nCarta 2:\n");
    printf("Populacao: %d\n", pop2_n);
    printf("Area: %.2f\n", area2_n);
    printf("PIB: %.2f\n", pib2_n);
    printf("Pontos turisticos: %d\n", pts2_n);

    /* ============================
       NÍVEL AVENTUREIRO
       Mesmos atributos, mais:
       - Densidade Populacional = populacao / area
       - PIB per Capita = pib / populacao
       Sem uso de condicionais ou laços
       ============================ */
    printf("\n\n=== NÍVEL AVENTUREIRO: Cadastro com calculos ===\n");
    /* Carta 1 - Aventureiro */
    int pop1_a;
    float area1_a;
    float pib1_a;
    int pts1_a;
    printf("Carta 1 - Aventureiro (insira: populacao(int) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%d %f %f %d", &pop1_a, &area1_a, &pib1_a, &pts1_a);

    /* Carta 2 - Aventureiro */
    int pop2_a;
    float area2_a;
    float pib2_a;
    int pts2_a;
    printf("Carta 2 - Aventureiro (insira: populacao(int) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%d %f %f %d", &pop2_a, &area2_a, &pib2_a, &pts2_a);

    /* Cálculos (Densidade e PIB per Capita) */
    float dens1_a = (float)pop1_a / area1_a;
    float dens2_a = (float)pop2_a / area2_a;
    float pcap1_a = pib1_a / (float)pop1_a;
    float pcap2_a = pib2_a / (float)pop2_a;

    /* Exibição - Aventureiro */
    printf("\n--- Dados cadastrados (Aventureiro) ---\n");
    printf("Carta 1:\n");
    printf("Populacao: %d\n", pop1_a);
    printf("Area: %.2f\n", area1_a);
    printf("PIB: %.2f\n", pib1_a);
    printf("Pontos turisticos: %d\n", pts1_a);
    printf("Densidade populacional: %.4f\n", dens1_a);
    printf("PIB per capita: %.4f\n", pcap1_a);

    printf("\nCarta 2:\n");
    printf("Populacao: %d\n", pop2_a);
    printf("Area: %.2f\n", area2_a);
    printf("PIB: %.2f\n", pib2_a);
    printf("Pontos turisticos: %d\n", pts2_a);
    printf("Densidade populacional: %.4f\n", dens2_a);
    printf("PIB per capita: %.4f\n", pcap2_a);

    /* ============================
       NÍVEL MESTRE
       - População: unsigned long int
       - Comparações entre os atributos (condicionais permitidas)
       - Densidade: vence menor
       - Demais atributos: vence maior
       - Super Poder = soma de todos atributos numéricos, com densidade invertida (1/densidade) antes de somar
       ============================ */
    printf("\n\n=== NÍVEL MESTRE: Comparacoes e Super Poder ===\n");
    /* Carta 1 - Mestre */
    unsigned long pop1_m;
    float area1_m;
    float pib1_m;
    int pts1_m;
    printf("Carta 1 - Mestre (insira: populacao(unsigned long) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%lu %f %f %d", &pop1_m, &area1_m, &pib1_m, &pts1_m);

    /* Carta 2 - Mestre */
    unsigned long pop2_m;
    float area2_m;
    float pib2_m;
    int pts2_m;
    printf("Carta 2 - Mestre (insira: populacao(unsigned long) area(float) pib(float) pontos_turisticos(int)):\n");
    scanf("%lu %f %f %d", &pop2_m, &area2_m, &pib2_m, &pts2_m);

    /* Cálculos (Densidade e PIB per Capita) no Mestre */
    double dens1_m = (double)pop1_m / (double)area1_m;
    double dens2_m = (double)pop2_m / (double)area2_m;
    double pcap1_m = (double)pib1_m / (double)pop1_m;
    double pcap2_m = (double)pib2_m / (double)pop2_m;

    /* Exibição dos dados calculados */
    printf("\n--- Dados cadastrados (Mestre) ---\n");
    printf("Carta 1:\n");
    printf("Populacao: %lu\n", pop1_m);
    printf("Area: %.2f\n", area1_m);
    printf("PIB: %.2f\n", pib1_m);
    printf("Pontos turisticos: %d\n", pts1_m);
    printf("Densidade populacional: %.6f\n", dens1_m);
    printf("PIB per capita: %.6f\n", pcap1_m);

    printf("\nCarta 2:\n");
    printf("Populacao: %lu\n", pop2_m);
    printf("Area: %.2f\n", area2_m);
    printf("PIB: %.2f\n", pib2_m);
    printf("Pontos turisticos: %d\n", pts2_m);
    printf("Densidade populacional: %.6f\n", dens2_m);
    printf("PIB per capita: %.6f\n", pcap2_m);

    /* Comparações - conforme regras:
       - Densidade: vence quem tiver MENOR valor
       - Demais: vence quem tiver MAIOR valor
       Imprimir 1 se Carta 1 vence, 0 se Carta 2 vence.
    */
    int vencedor_pop;
    int vencedor_area;
    int vencedor_pib;
    int vencedor_pts;
    int vencedor_dens;
    int vencedor_pcap;

    /* População: maior vence */
    if (pop1_m > pop2_m) {
        vencedor_pop = 1;
    } else {
        vencedor_pop = 0;
    }

    /* Área: maior vence */
    if (area1_m > area2_m) {
        vencedor_area = 1;
    } else {
        vencedor_area = 0;
    }

    /* PIB: maior vence */
    if (pib1_m > pib2_m) {
        vencedor_pib = 1;
    } else {
        vencedor_pib = 0;
    }

    /* Pontos turísticos: maior vence */
    if (pts1_m > pts2_m) {
        vencedor_pts = 1;
    } else {
        vencedor_pts = 0;
    }

    /* Densidade: menor vence */
    if (dens1_m < dens2_m) {
        vencedor_dens = 1;
    } else {
        vencedor_dens = 0;
    }

    /* PIB per capita: maior vence */
    if (pcap1_m > pcap2_m) {
        vencedor_pcap = 1;
    } else {
        vencedor_pcap = 0;
    }

    /* Cálculo do Super Poder:
       Super = soma de todos atributos numéricos, com densidade invertida (1/densidade)
       Convertendo/populacao -> double para melhor precisão
    */
    double super1 = (double)pop1_m + (double)area1_m + (double)pib1_m + (double)pts1_m + (1.0 / dens1_m) + pcap1_m;
    double super2 = (double)pop2_m + (double)area2_m + (double)pib2_m + (double)pts2_m + (1.0 / dens2_m) + pcap2_m;

    int vencedor_super;
    if (super1 > super2) {
        vencedor_super = 1;
    } else {
        vencedor_super = 0;
    }

    /* Exibir resultados das comparações */
    printf("\n--- Resultados das comparacoes (Mestre) ---\n");
    printf("Populacao: %d\n", vencedor_pop);       /* 1 => Carta1 ganha, 0 => Carta2 ganha */
    printf("Area: %d\n", vencedor_area);
    printf("PIB: %d\n", vencedor_pib);
    printf("Pontos turisticos: %d\n", vencedor_pts);
    printf("Densidade populacional (menor vence): %d\n", vencedor_dens);
    printf("PIB per capita: %d\n", vencedor_pcap);

    printf("\nSuper Poders (valores):\n");
    printf("Super Carta 1: %.6f\n", super1);
    printf("Super Carta 2: %.6f\n", super2);
    printf("Vencedor do Super Poder (1 = Carta1, 0 = Carta2): %d\n", vencedor_super);

    /* Fim */
    printf("\n=== FIM ===\n");
    return 0;
}
