#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("escreva as 2 notas do aluno (ex: n1 n2)\n");
	scanf("%f %f", &nota1, &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("a media do aluno e: %.2f\n", media);

	if (media < 3) printf("reprovado");
	else if (media < 7) printf("exame");
	else printf("aprovado");

	return 0;
}
