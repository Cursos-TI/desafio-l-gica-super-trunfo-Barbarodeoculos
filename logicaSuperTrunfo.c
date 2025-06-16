#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){
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

//Cartas já cadastradas.
char estado[25] = ("São Paulo"), estado2[25] = ("Rio de Janeiro");
char cod[6] = ("BRSP1");
char cod2[6] = ("BRRJ1");
char cidade[25] = ("São Paulo");
char cidade2[25] = ("Rio de Janeiro");
long unsigned int populacao = 11450, populacao2 = 6211 ; 
int turistico = 340, turistico2 = 360, opcao,opcao2;
int resultado1,resultado2;
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
    //Cartas
        printf("Carta 1\n Estado: %s\n Código da carta: %s  \n ",estado,cod);
        printf("Cidade: %s\n População: %lu Milhões de Habitantes\n Área: %.2f Km²\n ",cidade,populacao,area);
        printf("PIB: %.2f Bilhões de Reais\n Pontos Turísticos: %d \n",pib,turistico);
        puts("");
        printf("Carta 2\n Estado: %s\n Código da carta: %s \n ",estado2,cod2);
        printf("Cidade: %s\n População: %lu Milhões de Habitantes\n Área: %.2fKm²\n ",cidade2,populacao2,area2);
        printf("PIB: %.2f Bilhões de Reais\n Pontos Turísticos: %d\n\n",pib2,turistico2);

    printf("### Super Trunfo ###\n");
    printf("1 - Comparar População.\n");
    printf("2 - Comparar Área.\n");
    printf("3 - Comparar PIB.\n");
    printf("4 - Comparar Ponto Turístico.\n");
    printf("5 - Comparar Densidade demográfica.\n");
    printf("Escolha uma Opção.\n");
    scanf("%d", &opcao);
    puts("");

//Nivel Aventureiro   
/*
    switch (opcao)
    {
    case 0:
        printf("Carta 1\n Estado: %s\n Código da carta: %s  \n ",estado,cod);
        printf("Cidade: %s\n População: %lu Milhões de Habitantes\n Área: %.2f Km²\n",cidade,populacao,area);
        printf("PIB: %.2f Bilhões de Reais\n Pontos Turísticos: %d \n",pib,turistico);
        printf("Carta 2\n Estado: %s\n Código da carta: %s \n ",estado2,cod2);
        printf("Cidade: %s\n População: %lu Milhões de Habitantes\n Área: %.2fKm²\n ",cidade2,populacao2,area2);
        printf("PIB: %.2f Bilhões de Reais\n Pontos Turísticos: %d\n",pib2,turistico2);
    break;
    case 1:
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
    case 2:
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
    case 3:
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
    case 4:
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
    case 5:
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
    case 6:
        printf("Saindo...(T^T)\n");
    break;
    default:
        printf("Opção Invalida.\n");
    break;
    }
*/
//Nivel Mestre
    switch (opcao)
    {
    case 1:
    printf("Você escolheu População!\n");
    resultado1 = populacao > populacao2 ? 1 : 0;

    if (populacao > populacao2) { printf("carta 1 venceu com %lu Milhões de habitantes.\n",populacao);
    }else{printf("carta 2 venceu com %lu Milhões de habitantes.\n", populacao2);}

    break;

    case 2:
    printf("Você escolheu Área!\n");
    resultado1 = area > area2 ? 1 : 0;

    if (area > area2) { printf("carta 1 venceu com %.2f Km²\n",area);
    }else{printf("carta 2 venceu com %.2f Km²\n",area2);}

    break;

    case 3:
    printf("Você escolheu PIB!\n");
    resultado1 = pib > pib2 ? 1 : 0;

    if (pib > pib2 ){ printf("carta 1 venceu com %.2f Bilhões de reais.\n",pib);
    }else{printf("carta 2 venceu com %.2f Bilhões de reais.\n",pib2);}

    break;

    case 4:
    printf("Você escolheu Ponto Turístico\n");
    resultado1 = turistico > turistico2 ? 1 : 0;

    if (turistico > turistico2){ printf("carta 1 venceu com %d Pontod turísticos.\n",turistico);
    }else{printf("carta 2 venceu com %d Pontos turísticos.\n",turistico2);}

    break;

    case 5:
    printf("Você escolheu Densidade!\n");
    resultado1 = densidade < densidade2 ? 1 : 0;

    if (densidade < densidade2){ printf("carta 1 venceu com %.2f de Densidade demográfica.\n",densidade);
    }else{printf ("carta 2 venceu com %.2f de Densidade demográfica.\n",densidade2);}

    break;

    default:
    printf("Opção Invalida.\n\n");
    break;

    }  
    puts("");
    printf("Escolha um segundo atributo para comparação.\n");
    printf("1 - Comparar População.\n");
    printf("2 - Comparar Área.\n");
    printf("3 - Comparar PIB.\n");
    printf("4 - Comparar Ponto Turístico.\n");
    printf("5 - Comparar Densidade demográfica.\n");
    printf("Escolha um atributo diferente do primeiro.\n");
    scanf("%d", &opcao2);
    puts("");
    
    if (opcao == opcao2)
    {
        printf("Você escolheu o mesmo atributo!");
    }else
    {
        switch (opcao2)
        {
        case 1:
        printf("Você escolheu População!\n");
        resultado2 = populacao > populacao2 ? 1 : 0;

            if (populacao > populacao2){ printf("carta 1 venceu com %lu Milhões de habitantes.\n",populacao);
            }else{printf("carta 2 venceu com %lu Milhões de habitantes.\n",populacao2);}
            
        break;

        case 2:
        printf("Você escolheu Área!\n");
        resultado2 = area > area2 ? 1 : 0;

            if(area > area2){ printf("carta 1 venceu com %.2f Km²\n",area);
            }else{printf("carta 2 venceu com %.2f Km²\n",area2);}

        break;

        case 3:
        printf("Você escolheu PIB!\n");
        resultado2 = pib > pib2 ? 1 : 0;

            if (pib > pib2){ printf("carta 1 venceu com %.2f Bilhões de reais.\n",pib);
            }else{printf("carta 2 venceu com %.2f Bilhões de reais.\n",pib2);}

        break;

        case 4:
        printf("Você escolheu Ponto Turístico\n");
        resultado2 = turistico > turistico2 ? 1 : 0;

            if (turistico > turistico2) {printf("carta 1 venceu com %d Pontod turísticos.\n",turistico);
            }else{printf("carta 2 venceu com %d Pontos turísticos.\n",turistico2);}

        break;

        case 5:
        printf("Você escolheu Densidade!\n");
        resultado2 = densidade < densidade2 ? 1 : 0;

           if (densidade < densidade2) {printf("carta 1 venceu com %.2f de Densidade demográfica.\n",densidade);
           }else{printf("carta 2 venceu com %.2f de Densidade demográfica.\n",densidade2);}

        break;

        default:
        printf("Opção Invalida.\n\n");
        break;
        }   
        puts("");
        if (resultado1 && resultado2){   
        printf("Carta 1 Venceu a Rodada!\n\n");

        }else if (resultado1 != resultado2){
        printf("Empate!\n\n");

        }else{
        printf("Carta 2 Venceu a rodada!\n\n");
        }
        }
    }
    

