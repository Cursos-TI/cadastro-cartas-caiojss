#include <stdio.h>
#include <locale.h> //Para leitura de acentos corretamente
#include <string.h> //Precisa para o fgets do nome da cidade com o strcspn
 
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	// Para localidade em português para mostrar os acentos das palavras
	
    char estado1;
    char cCarta1[4];
	char cidade1[30];
	int populacao1;
	float area1;
	float pib1;
	int nPTuristico1;
	//Acima as variáveis para a Carta 1
	
	char estado2;
    char cCarta2[4];
	char cidade2[20];
	int populacao2;
	float area2;
	float pib2;
	int nPTuristico2;
	//Acima as variáveis para a Carta 2
	
	
	printf("Criando cartas do Super Trunfo de países!\n");
	printf("Para a carta número 1 vamos começar a inserir os dados\n");
	printf("Insira a letra de um estado de A a H: ");
	scanf(" %c", &estado1);
	//Acima começaremos a inserir a letra do estado
	//%c indica ser um unico caractere e em seguida há o "&" que vai gravar o dado na variavel estado
	printf("Insira o numero da carta de 01 a 04 junto da letra do estado já inserida: ");
	scanf(" %s", &cCarta1);
	//Acima será o codigo da carta que deve ser inserido entre 01 a 04
	//%s indica ser uma string pois precisará colocar tanto letra quanto numero junto
	getchar();
	//Acima é o getchar utilizado antes do fgets para não ler o Enter
	printf("Insira o nome da cidade: ");
	fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
	//Acima é o codigo da cidade e no formato de fgets pois poderá ser um nome composto para pegar o espaço
	printf("Insira o número de habitantes da cidade: ");
	scanf(" %d", &populacao1);
	//Acima deverá ser  inserido o tanto de habitantes e %d indica que deve ser um numero inteiro
	printf("Insira a área da cidade em quilômetros quadrados: ");
	scanf(" %f", &area1);
	//Acima é deve ser inserido a area da cidade em float com %f
	printf("Insira o PIB(Produto Interno Bruto) da cidade: ");
	scanf(" %f", &pib1);
	//Acima é o PIB da cidade em float com %f
	printf("Insira a quantidade de pontos turísticos da cidade: ");
	scanf(" %d", &nPTuristico1);
	//Acima deve ser a quantidadede pontos turistico com numero inteiro %d
	printf("\n");
	//Apenas para pular uma linha para começar a inserir os dados da segunda carta
	printf("Agora vamos inserir os dados da segunda carta\n");
	printf("Insira a letra de um estado de A a H: ");
	scanf(" %c", &estado2);
	printf("Insira o numero da carta de 01 a 04 junto da letra do estado já inserida: ");
	scanf(" %s", &cCarta2);
	getchar();
	printf("Insira o nome da cidade: ");
	fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
	printf("Insira o número de habitantes da cidade: ");
	scanf(" %d", &populacao2);
	printf("Insira a área da cidade em quilômetros quadrados: ");
	scanf(" %f", &area2);
	printf("Insira o PIB(Produto Interno Bruto) da cidade: ");
	scanf(" %f", &pib2);
	printf("Insira a quantidade de pontos turísticos da cidade: ");
	scanf(" %d", &nPTuristico2);
	printf("\n");
	//Espaço para pular e começar a mostrar na tela os valores inseridos
	printf("Aqui estão os valores inseridos das respectivas cartas\n");
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", cCarta1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d", nPTuristico1);
	printf("\n");
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", cCarta2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	//Area e PIB decidi colocar .2f para que seja mais facil de visualizar os valores
	printf("Número de Pontos Turísticos: %d", nPTuristico2);
	
	
	return 0;
	
	 
}
