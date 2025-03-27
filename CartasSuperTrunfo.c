#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
char Estado[50];
char codigo[50];
char cidade[50];
int Populacao;
float Area;
float PIB;
int Pontos;
float Densidade;
float Per;
float Poder;

printf ("Estado: \n");
scanf("%s", &Estado);

printf ("Digite o Codigo: \n");
scanf("%s", &codigo);

printf("Digite a Cidade: \n");
scanf("%s", &cidade);

printf("Digite a População: \n");
scanf("%d", &Populacao);

printf ("Digite a Área: \n");
scanf("%f", &Area);

printf ("Digite o PIB: \n");
scanf ("%f", &PIB);

printf ("Digite os Pontos turisticos: \n");
scanf ("%d", &Pontos);

printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", codigo);
printf("cidade: %s\n", cidade);
printf("Populaçao: %d\n", Populacao);
printf("Area: %f\n", Area);
printf("PIB: %f\n", PIB);
printf("Pontos turisticos: %d\n", Pontos);

Densidade =(float) (Populacao / Area);

Per =(float) (PIB / Populacao);

printf("A Densidade é: %.1f", Densidade);

printf("O PIB per capita é: %.1f", Per);





    return 0;
}



