#include<stdio.h>
int main(){
	int hora[10], minuto[10], segundo[10];
	int i;
	char nomeUsuario[50]; //%s scanf("%s", &nomeUsuario)

	for (i=0; i<3; i++){ //i = 0
		printf("Digite o valor da hora: "); // 1
		scanf("%i", &hora[i]); // hora[0] = 1
		minuto[i] = hora[i] * 60; // minuto[0] = 1 * 60 = 60
		segundo[i] = minuto[i] * 60;//segundo [0] = 3600
		printf("Horas: %d\n", hora[i]);
		printf("Minutos: %d\n", minuto[i]);
		printf("Segundos: %d\n", segundo[i]);
	}



}
