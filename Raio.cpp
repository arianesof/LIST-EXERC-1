#include<stdio.h> 
#include<math.h> 
#define PI 3.14159 
int main(){
	float raio, area;

	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	area = PI * pow(raio,2); 
	area = 3.14159 * pow(raio,2); 
	area = 3.14159 * raio * raio; 

	printf("Area: %f", area);

}
