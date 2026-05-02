#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   // Definindo as variáveis
    char Estado[50];
    char Codigo[10];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float DensidadePop; // População/Área
    float PIBperCapita; // PIB/População

    char Estado2[50];
    char Codigo2[10];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePop2;
    float PIBperCapita2;

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
    printf("\n\n\n\n\n")


return 0;
} 
