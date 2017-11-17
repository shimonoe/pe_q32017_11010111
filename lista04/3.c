#include <stdio.h>
#include <stdlib.h>

typedef struct FichaAluno {
	char nome[100];
	char numMatricula[5];
	float p1;
	float p2;
	float p3;
} FichaAluno;



int main() {

	FichaAluno alunos[50];

	FILE * arquivo_r;
	char * line;
	size_t len = 0;
	ssize_t read;

	// Leitura
	arquivo_r = fopen("./lista_alunos.txt", "r");
	if (arquivo_r == NULL)
		exit(EXIT_FAILURE);

	for ( int i = 0; i < 50; i++ ) {
		fscanf(arquivo_r, "%s %s %f %f %f", &(alunos[i].nome), &(alunos[i].numMatricula), &(alunos[i].p1), &(alunos[i].p2), &(alunos[i].p3));
	}

	fclose(arquivo_r);

	// Escrita
	FILE * arquivo_w;
	arquivo_w = fopen("./media_alunos.txt", "w");

	for ( int i = 0; i < 50; i++ ) {
		float media = 0;
		media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3.0;
		fprintf(arquivo_w, "%s %s %.2f\n", alunos[i].nome, alunos[i].numMatricula, media);
	}

	fclose(arquivo_w);

	return 0;
}
