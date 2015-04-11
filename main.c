#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definisci le costanti

// Definisci il tipo di dato struct s_studente

// Definisci studente come struct s_studente

int main(int argc, char** argv) {
    struct s_alunno{
        char Nome[30];
        char Cognome[30];
        int Eta;
    };
    struct s_alunno a , b , c;
    
    strcpy(a.Nome , "Elia" );
    strcpy(a.Cognome , "Sforna");
    a.Eta = 16;
            
    strcpy(b.Nome , "Nicola" );
    strcpy(b.Cognome , "Malfagia");
    b.Eta = 18;
    
    strcpy(c.Nome , "Alessio");
    strcpy(c.Cognome , "Picciafuoco");
    c.Eta = 16;
    
    printf("Nome : %s\n" , a.Nome);
        printf("Cognome :%s\n" , a.Cognome);
            printf("Eta :%d\n" , a.Eta);
                printf("Nome :%s\n" , b.Nome);
                    printf("Cognome :%s\n" ,b.Cognome);
                        printf("Eta :%d\n" , b.Eta);
                            printf("Nome : %s\n" , c.Nome);
                                printf("Cognome :%s\n" , c.Cognome);
                                    printf("Eta :%d\n" , c.Eta);
        
    // Codice per l'inserimento, da parte dell'utente, dei dati
    
    // Codice per la stampa dei dati (uno studente per riga)
    
    return (EXIT_SUCCESS);
}

