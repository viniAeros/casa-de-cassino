#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

float calculo(float aposta1){
	float r;
	r=aposta1+(aposta1*0.15)*100/100;
	return r;
}

int dado(){
	srand(time(NULL));
	int x = rand() % 5 +1;
	return x;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float aposta, porcentagem;
	int tickets, numRoleta, resultadoDado;
	
		printf("----- A CADA R$10,00 VALE 1 TICKET ----- \n");
		printf("\n");
		printf("Digite um valor para comprar os tickets: \n");
			scanf("%f", &aposta);
		printf("Digite um n�mero de 1 a 5 para tentar adivinhar o n�mero da roleta e receber um pr�mio: \n");
			scanf("%d", &numRoleta);
			
porcentagem=calculo(aposta); //Chamada fun��o principal
resultadoDado=dado(); //Chamada fun��o secund�ria onde a passagem do valor ser� um n�mero aleat�rio entre 1 e 5

	tickets=porcentagem/10.00;
	
	printf("O valor com percentual b�nus que voc� ter� � de R$ %2.2f assim tendo %d tickets. \n \n", porcentagem, tickets);
	printf("O n�mero escolhido foi: %d \n \n", numRoleta);
	printf("O n�mero sorteado foi: %d \n \n", resultadoDado);
	
		if(resultadoDado==numRoleta){
			printf("Parab�ns voc� ganhou um pr�mio! \n");
		} else{
			printf("Infelizmente voc� n�o ganhou o pr�mio. \n");
		}
		
		system("pause");
		return 0;				
}
