#include<stdio.h>
int main(){
	float nota[3];
	int i;
	float media;

	for (i=0; i<3; i++){
		printf("Digite a nota%i: ",i+1);
		scanf("%f", &nota[i]);
	}
	
	media = (nota[0]+nota[1]+nota[2])/3;

	printf("Nota: %2.2f\n", media);	
	



}
