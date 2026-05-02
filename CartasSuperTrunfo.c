#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Definindo as variáveis
    char Estado[50];
    char Codigo[5];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    char Estado2[50];
    char Codigo2[5];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

  // Área para entrada de dados
    // Primeira Rodada de Perguntas
    printf("SUPER TRUNFO\n\n");
    printf("Digite os dados da 1ª Carta:\n");
    printf("Estado: "); fgets(Estado,50,stdin); Estado[strcspn(Estado,"\n")] = '\0'; 
                            //RETIRANDO O ENTER \n ARMAZENADO PELO fgets:
                            //Usando strcspn para Remover o newline das strings. Incluir string.h
                            //Strcspn: STRing Complement SPN (span, "alcance"): conta quantos caracteres até encontrar o que procura
    printf("\n Codigo: "); fgets(Codigo,5,stdin); Codigo[strcspn(Codigo,"\n")] = '\0'; 
    printf("\n Cidade: "); fgets(Cidade,50,stdin); Cidade[strcspn(Cidade,"\n")] = '\0';
    printf("\n Populacao: "); scanf(" %d", &Populacao);
    printf("\n Area: "); scanf(" %f", &Area);
    printf("\n PIB: "); scanf(" %f", &PIB);
    printf("\n Pontos Turísticos: "); scanf(" %d", &PontosTuristicos);
    getchar();  
                // Consumir o '\n' leftover
                // Note que o espaço antes de % no scanf também elimina possíveis leftover

   // Segunda Rodada de Perguntas
    printf("Agora digite os dados da 2ª Carta:\n");
    printf("Estado: "); fgets(Estado2,50,stdin); Estado2[strcspn(Estado2,"\n")] = '\0'; 
    printf("\n Codigo: "); fgets(Codigo2,5,stdin); Codigo2[strcspn(Codigo2,"\n")] = '\0';
    printf("\n Cidade: "); fgets(Cidade2,50,stdin); Cidade2[strcspn(Cidade2,"\n")] = '\0';
    printf("\n Populacao: "); scanf("%d", &Populacao2);
    printf("\n Area: "); scanf("%f", &Area2);
    printf("\n PIB: "); scanf("%f", &PIB2);
    printf("\n Pontos Turísticos: "); scanf("%d", &PontosTuristicos2);


  // Área para exibição dos dados da cidade
       // Imprimindo 1ª carta
    printf("\n\nSUPER TRUNFO - EXIBINDO CARTAS\n\n");
    printf("1ª Carta:\n");
    printf("Estado: %s", Estado);
    printf("\n Codigo: %s", Codigo);
    printf("\n Cidade: %s", Cidade);
    printf("\n Populacao: %d", Populacao);
    printf("\n Area: %.2f", Area);
    printf("\n PIB: %.2f", PIB);
    printf("\n Pontos Turísticos: %d", PontosTuristicos);

       // Imprimindo 2ª carta
    printf("SUPER TRUNFO - EXIBINDO CARTAS\n\n");
    printf("2ª Carta:\n");
    printf("Estado: %s", Estado2);
    printf("\n Codigo: %s", Codigo2);
    printf("\n Cidade: %s", Cidade2);
    printf("\n Populacao: %d", Populacao2);
    printf("\n Area: %.2f", Area2);
    printf("\n PIB: %.2f", PIB2);
    printf("\n Pontos Turísticos: %d", PontosTuristicos2);


return 0;
} 
