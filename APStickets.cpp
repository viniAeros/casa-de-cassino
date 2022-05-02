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
		printf("Digite um número de 1 a 5 para tentar adivinhar o número da roleta e receber um prêmio: \n");
			scanf("%d", &numRoleta);
			
porcentagem=calculo(aposta); //Chamada função principal
resultadoDado=dado(); //Chamada função secundária onde a passagem do valor será um número aleatório entre 1 e 5

	tickets=porcentagem/10.00;
	
	printf("O valor com percentual bônus que você terá é de R$ %2.2f assim tendo %d tickets. \n \n", porcentagem, tickets);
	printf("O número escolhido foi: %d \n \n", numRoleta);
	printf("O número sorteado foi: %d \n \n", resultadoDado);
	
		if(resultadoDado==numRoleta){
			printf("Parabéns você ganhou um prêmio! \n");
		} else{
			printf("Infelizmente você não ganhou o prêmio. \n");
		}
		
		system("pause");
		return 0;				
}
