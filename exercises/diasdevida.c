//Questão 07
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	int i;
	printf("Informe sua idade: ");
	scanf("%d", &i);
	printf("Você viveu aproximadamente %d dias.", i * 365);
return(0);
}
