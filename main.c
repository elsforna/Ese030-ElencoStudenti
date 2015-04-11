#include <stdio.h>
#include <stdlib.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente{
    char Nome[MAX_STRLEN];
    char Cognome[MAX_STRLEN];
    unsigned int Eta;
    unsigned int Classe;
    char Sezione[MAX_STRLEN];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    
    studente hi[N];
    
    
    for(i=0;i<N;i++)
    {
        printf("Inserisci il Nome\n ");
        scanf("%s", &hi[i].Nome);
        printf("Inserisci il Cognome\n ");
        scanf("%s", &hi[i].Cognome);
        printf("Inserisci l'Eta'\n ");
        scanf("%d", &hi[i].Eta);
        printf("Inserisci la Classe\n ");
        scanf("%d", &hi[i].Classe);
        printf("Inserisci la Sezione\n ");
        scanf("%s", &hi[i].Sezione);
    }
    
    for(i=0;i<N;i++)
    {
      printf("%s; %s; %d; %d; %s\n",hi[i].Nome,hi[i].Cognome,hi[i].Eta,hi[i].Classe,hi[i].Sezione);
    }
       
    return (EXIT_SUCCESS);
}