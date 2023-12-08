#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, nota4, media;
	
	printf("escreva as 4 notas do aluno (ex: n1 n2 n3 n4)\n");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("a media do aluno e: %.2f\n", media);

	if(media >= 7){
		printf("aprovado");
	} 
	else printf("reprovado");

	return 0;
}
