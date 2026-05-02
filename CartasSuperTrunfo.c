#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* A lógica de comparação entre duas cartas do Super Trunfo, determinando 
   a vencedora de cada atributo e introduzindo o conceito de "Super Poder".

- POPULAÇÃO ampliada com unsigned long int;
- CALCULAR "Super Poder": soma dos atributos numéricos (população, área, PIB, 
   número de pontos turísticos, PIB per capita e 
   o inverso da densidade populacional – quanto menor a densidade, maior o "poder". (atenção a tipos diferentes);
- COMPARAR as duas cartas atributo por atributo (exceto estado, código e nome);
- Imprimir resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)

*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // Definindo as variáveis
    char Estado[50];
    char Codigo[10];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float DensidadePop; // População/Área
    float PIBperCapita; // PIB/População
    double AreaPorHabitantes; // Inverso da Densidade Populacional
    long double SuperPoder; // Populacao + Area + PIB + PontosTuristicos + PIBperCapita + AreaPorHabitantes

    char Estado2[50];
    char Codigo2[10];
    char Cidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePop2;
    float PIBperCapita2;
    double AreaPorHabitantes2; // Inverso da Densidade Populacional
    long double SuperPoder2; // Populacao + Area + PIB + PontosTuristicos + PIBperCapita + AreaPorHabitantes

  // Área para entrada de dados
    // Primeira Rodada de Perguntas
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("SUPER TRUNFO\n\n");
    printf("Digite os dados da 1ª Carta:\n");
    printf("Estado: "); fgets(Estado,50,stdin); Estado[strcspn(Estado,"\n")] = '\0'; 
                            //RETIRANDO O ENTER \n ARMAZENADO PELO fgets:
                            //Usando strcspn para Remover o newline das strings. Incluir string.h
                            //Strcspn: STRing Complement SPN (span, "alcance"): conta quantos caracteres até encontrar o que procura
    printf("\n Código: "); fgets(Codigo,10,stdin); Codigo[strcspn(Codigo,"\n")] = '\0'; 
    printf("\n Cidade: "); fgets(Cidade,50,stdin); Cidade[strcspn(Cidade,"\n")] = '\0';
    printf("\n População: "); scanf(" %d", &Populacao);
    printf("\n Área (km2): "); scanf(" %f", &Area);
    printf("\n PIB (em bilhões de reais): "); scanf(" %f", &PIB);
    printf("\n Pontos Turísticos: "); scanf(" %d", &PontosTuristicos);
    getchar();  // Consumir o '\n' leftover
                // Note que o espaço antes de % no scanf também elimina possíveis leftover

   // Segunda Rodada de Perguntas
    printf("\n\n\nAgora digite os dados da 2ª Carta:\n");
    printf("Estado: "); fgets(Estado2,50,stdin); Estado2[strcspn(Estado2,"\n")] = '\0'; 
    printf("\n Código: "); fgets(Codigo2,10,stdin); Codigo2[strcspn(Codigo2,"\n")] = '\0';
    printf("\n Cidade: "); fgets(Cidade2,50,stdin); Cidade2[strcspn(Cidade2,"\n")] = '\0';
    printf("\n População: "); scanf("%d", &Populacao2);
    printf("\n Área (km2): "); scanf("%f", &Area2);
    printf("\n PIB (em bilhões de reais): "); scanf("%f", &PIB2);
    printf("\n Pontos Turísticos: "); scanf("%d", &PontosTuristicos2);
    getchar(); // Consumir o '\n' leftover

   // Cálculos
   DensidadePop = (float)Populacao/Area;
   PIBperCapita = (float)PIB/Populacao; PIBperCapita *= 1000000000; // O PIB digitado pelo usuário é em "bilhões de reais"
   DensidadePop2 = (float)Populacao2/Area2;
   PIBperCapita2 = (float)PIB2/Populacao2; PIBperCapita2 *= 1000000000;
   AreaPorHabitantes = (long double)Area/Populacao;
   AreaPorHabitantes2 = (long double)Area2/Populacao2;
   SuperPoder = (long double)Populacao + (long double)Area + (long double)PIB + (long double)PontosTuristicos + (long double)PIBperCapita + (long double)AreaPorHabitantes;
   SuperPoder2 = (long double)Populacao2 + (long double)Area2 + (long double)PIB2 + (long double)PontosTuristicos2 + (long double)PIBperCapita2 + (long double)AreaPorHabitantes2;

  // Área para exibição dos dados da cidade
       // Imprimindo 1ª carta
    printf("\n\nTecle enter para mostrar a 1ª Carta\n\n"); getchar();
    printf("\n\nSUPER TRUNFO - EXIBINDO CARTAS");
    printf("\n\n\n\n1ª Carta:\n");
    printf("Estado: %s", Estado);
    printf("\n Código: %s", Codigo);
    printf("\n Cidade: %s", Cidade);
    printf("\n População: %d", Populacao);
    printf("\n Área: %.2f km²", Area);
    printf("\n PIB: %.2f bilhões de reais", PIB);
    printf("\n Pontos Turísticos: %d", PontosTuristicos);
    printf("\n Densidade populacional: %.2f hab/km²", DensidadePop);
    printf("\n PIB per Capita: R$ %.2f", PIBperCapita);

   

       // Imprimindo 2ª carta
    printf("\n\nTecle enter para mostrar a 2ª Carta "); getchar();
    printf("\n\n2ª Carta:\n");
    printf("Estado: %s", Estado2);
    printf("\n Código: %s", Codigo2);
    printf("\n Cidade: %s", Cidade2);
    printf("\n População: %d", Populacao2);
    printf("\n Área: %.2f", Area2);
    printf("\n PIB: %.2f", PIB2);
    printf("\n Pontos Turísticos: %d", PontosTuristicos2);
    printf("\n Densidade populacional: %.2f hab/km²", DensidadePop2);
    printf("\n PIB per Capita: R$ %.2f", PIBperCapita2);
    printf("\n\n");

    // Imprimindo comparação de cartas
    printf("\n\nTecle enter para mostrar a Comparação "); getchar();
    printf("\n\nComparação de Cartas - Quem venceu?");
    printf("\n\n1 = SIM    e   0 = NÃO\n\n");
    printf("Carta 1 (%s) vs Carta 2 (%s)\n\n", Cidade, Cidade2);
    printf("População: Carta 1 (%s) venceu? (%s)\n", Cidade, Populacao > Populacao2 ? "Sim" : "Não");
    printf("Área: Carta 1 venceu? (%s)\n", Area > Area2 ? "Sim" : "Não");
    printf("PIB: Carta 1 venceu? (%s)\n", PIB > PIB2 ? "Sim" : "Não");
    printf("Pontos Turísticos: Carta 1 venceu? (%s)\n", PontosTuristicos > PontosTuristicos2 ? "Sim" : "Não");
    printf("Densidade Populacional: Carta 2 venceu? (%s)\n", DensidadePop2 > DensidadePop ? "Sim" : "Não");
    printf("PIB per Capita: Carta 1 venceu? (%s)\n", PIBperCapita > PIBperCapita2 ? "Sim" : "Não");
    printf("Super Poder: Carta 1 venceu? (%s)\n", SuperPoder > SuperPoder2 ? "Sim" : "Não");
    printf("\n\n\n\n");

return 0;
} 
