#include <stdio.h>
#include <stdlib.h> 
    typedef struct{

        char nome[50];
        int codigo;
        int codigoDisciplina;
    
    }Aluno;




    typedef struct{
        char nome[50];
        int codigo;
        int cargaH;
    }Disciplina;

    Aluno novoAluno(){
        Aluno aluno;
        printf("Digite o nome do Aluno: ");
        scanf("%s",aluno.nome);
        aluno.codigo = rand() % 100;
        printf("%d",aluno.codigo);
        

        return aluno;
        
    }
    
    Disciplina novaD(){
        Disciplina disciplina;
        printf("Código da Disciplina: ");
        scanf("%d",&disciplina.codigo);
        printf("Nome da Disciplina: ");
        scanf("%s",disciplina.nome);
        printf("Carga Horaria");
        scanf("%d",&disciplina.cargaH);

        return disciplina;
    }

    void GravaAluno(Aluno aluno){
        FILE *pont_arq;
        pont_arq = fopen("teste.txt","a");
        if (pont_arq == NULL){
            printf("Erro na abertura do arquivo!");
            
        }
        //Gravar o struct 
        fprintf(pont_arq, "########################\nNome do Aluno: %s\n",aluno.nome);
        fprintf(pont_arq, "Codigo do aluno: %d\n", aluno.codigo);
        //Codigo do Aluno: ",aluno.codigo
        printf("%s",aluno.nome);


        fclose(pont_arq);

        printf("Dados gravados com sucesso");
    }

int main (){
    int i = 0 ,j = 0;
    Disciplina disciplina [5];
    Aluno aluno[5];
    //GravaAluno(aluno[5]);
    
    aluno[i] = novoAluno();
    i++;

    disciplina[j] = novaD();
    j++;

    


    printf("%s",aluno[0].nome);



    
}