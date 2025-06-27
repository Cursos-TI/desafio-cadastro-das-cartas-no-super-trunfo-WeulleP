#include <stdio.h>

/*
    Desafio super trunfo (Trabalho feito para faculdade estacio - engenharia de software)
Feito por: Weulle Porfirio

Super trunfo: Desafo iniciante
Regras: Preencha os dados solicitados, abaixo há alguns exemplos de estados, cidades e dados
para serem preenchidos ao decorrer do "Jogo".
_____________________  _____________________  _____________________  _____________________  
|COD: A01            | |COD: A02            | |COD: B01            | |COD: B02            |
|                    | |                    | |                    | |                    |
|                    | |                    | |                    | |                    |
|Estado:Alabama      | |Estado:Texas        | |Estado:Kentucky     | |Estado:Goias        |
|Cidade:Birmingham   | |Cidade:Austin       | |Cidade:Louisville   | |Cidade:Goiânia      |
|Área(km²):131.171   | |Área(Km²):695.662   | |Área(Km²):104.656   | |Área(Km²):739,2     |
|População: 5mi      | |População:29,5 mi   | |População:4,5 mi    | |População:1,5 mi    |
|PIB:235 bi          | |PIB:1,9 tri         | |PIB:219 bi          | |PIB:58 bi           |
|Pts. turisticos:12  | |Pts. Turisticos:15  | |Pts. Turisticos:10  | |Pts. Turisticos:8   |
|____________________| |____________________| |____________________| |____________________|

*/
int main() {

    //Declarando as variaveis(Sem atribuir valores).
    char cod1[9], cod2[9];
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int ptsturisticos1, ptsturisticos2;
    float pib1, pib2;
    float area1, area2;

    //Entrada de dados utilizando "printf" e "scanf" para atribuir dados as variaveis
    //CARTA01
    printf("BEM VINDOS AO SUPER TRUNFO (CIDADES)\nPara iniciar o jogo, preencha os dados solicitado a seguir\n");
    printf("Carta01\n");
    printf("Digite o codigo da carta: \n");
    scanf("%s", cod1);
    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a área em KM²: \n");
    scanf("%f", &area1);
    printf("Digite o tamanho populacional: (Sem 'pontos ou virgula')\n");
    scanf("%d", &populacao1);
    printf("Digite qual o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &ptsturisticos1);

    //CARTA 02
    printf("Agora digite os dados para a carta 02\n");
    printf("Carta 02\n");
    printf("Digite o codigo da carta: \n");
    scanf("%s", cod2);
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a área em KM²: \n");
    scanf("%f", &area2);
    printf("Digite o tamanho populacional: (Sem 'pontos ou virgula')\n");
    scanf("%d", &populacao2);
    printf("Digite qual o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &ptsturisticos2);

    //saida dos dados (Mostrando as informações das cartas, armazenadas nas variaveis)
    //Carta01
    printf("Carta01\n");
    printf("Codigo: %s\n", cod1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", ptsturisticos1);

    //carta02
    printf("Carta02\n");
    printf("Codigo: %s\n", cod2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", ptsturisticos2);

    return 0;
}
