#include<stdio.h>
int main(){
	int hora[10], minuto[10], segundo[10];
	int i;
	char nomeUsuario[50]; 
		for (i=0; i<1; i++){ 
		printf("digite nome de Usuario: ");
		scanf("%s", &nomeUsuario[i]);
		
	}
	
	for (i=0; i<1; i++){ 
		printf("Digite o valor da hora: "); 
		scanf("%i", &hora[i]); 
		minuto[i] = hora[i] * 60; 
		segundo[i] = minuto[i] * 60;
		printf("Horas: %d\n", hora[i]);
		printf("Minutos: %d\n", minuto[i]);
		printf("Segundos: %d\n", segundo[i]);
	}


}

