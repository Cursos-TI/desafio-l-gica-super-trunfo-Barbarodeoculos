#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
      
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


char estado[25], estado2[25];
char cod[4], cod2[4];
char cidade[25] = ("São Paulo"), cidade2[25] = ("Rio de Janeiro");
unsigned long int populacao = 11450, populacao2 = 6211 ; //6211.000
int turistico = 380, turistico2 = 310, opcao;
float area = 1521, area2 = 1200; //1521202  1200329
float pib = 828.98, pib2 = 359.64;
float densidade, densidade2;
float capita, capita2;
    
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
            
    capita = (float) pib / populacao;
    capita2 = (float) pib2 / populacao2;

float super = populacao + area + pib + turistico + capita + (1 / densidade);
float super2 = populacao2 + area2 + pib2 + turistico2 + capita2 + (1/ densidade2);

/* nivel novato
   if (populacao > populacao2)
    {
       printf("%s venceu! com a população de %d contra %d de %s", cidade, populacao, populacao2, cidade2);
    }else{
       printf("%s venceu com a população de %d, contra %d de %s",cidade2, populacao2, populacao, cidade);
    }
*/
//Nivel Aventureiro  
printf("### Super Trunfo ###");
printf("1 - Exibir Cartas\n");
printf("2 - População.\n");
printf("3 - Área.\n");
printf("4 - PIB.\n");
printf("5 - Ponto Turístico.\n");
printf("6 - Densidade demográfica.\n");
printf("7 - Sair...\n");
printf("Escolha uma propriedade que deseja comparar ou sair do jogo.\n");
scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("%s X %s");
    break;
    case 2:
        printf("Você escolheu População\n");
        if (populacao > populacao2)
        {
        printf("São Paulo venceu com %lu contra %lu de Rio de Janeiro\n",populacao,populacao2);
        }else if (populacao2 > populacao){
        printf("Rio de Janeiro venceu com %lu contra %lu de São Paulo\n",populacao2, populacao);
        }else{
        printf("Empate!\n");
        }
        
    break;
    case 3:
        printf("Você escolheu Área\n");
        if (area > area2)
        {
        printf("São Paulo venceu com %.2f contra %.2f de Rio de Janeiro\n",area, area2);
        }else if (area2 > area){
        printf("Rio de Janeiro venceu com %.2f contra %.2f de São Paulo\n",area2, area);
        }else{
        printf("Empate!\n");
        }
    break;
    case 4:
        printf("Você escolheu Pib\n");
        if (pib > pib2)
        {
        printf("São Paulo venceu com %.2f contra %.2f de Rio de Janeiro\n",pib,pib2);
        }else if (pib2 > pib){
        printf("Rio de Janeiro venceu com %.2f contra %.2f de São Paulo\n",pib2,pib2);
        }else{
        printf("Empate!\n");
        }
    break;
    case 5:
        printf("Você escolheu Pontos Turísticos\n");
        if (turistico > turistico2)
        {
        printf("São Paulo venceu com %d contra %d de Rio de Janeiro\n",turistico,turistico2);
        }else if (turistico2 > turistico){
        printf("Rio de Janeiro venceu com %d contra %d de São Paulo\n",turistico2,turistico);
        }else{
        printf("Empate!\n");
        }
    break;
    case 6:
        printf("Você escolheu Densidade Demográfica\n");
    if (densidade < densidade2)
        {   
        printf("São Paulo venceu com %.2f contra %.2f de Rio de Janeiro\n",densidade, densidade2);
        }else if (densidade2 < densidade)
        {   
        printf("Rio de Janeiro venceu com %.2f contra %.2f de São Paulo\n",densidade2, densidade);
        }else{
        printf("Empate!\n");
    }
    break;
    case 7:
        printf("Saindo...(T^T)\n");
    break;
    default:
        printf("Opção Invalida.\n");
    break;
    }

    return 0;
}