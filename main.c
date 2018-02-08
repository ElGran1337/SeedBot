#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
    
    int numberOfPlayers;
    int a, c, d, e, f;
    int antallGrupper, treere, firere;
    
    printf("Hvor mange spillere\n");
    
    scanf("%d", &numberOfPlayers);
    
    printf("%d spillere\n", numberOfPlayers);
    
    char spillerListe[numberOfPlayers][20];
    char sortNavn[numberOfPlayers][20];
    int poengListe[numberOfPlayers];
    
    for (a = 0; a < numberOfPlayers; a++)//ENTER NAVN
    {
        printf("Spiller %d\n", a+1);
        scanf("%s", spillerListe[a]);
    }

   
    
    for (c = 0; c < numberOfPlayers; c++)//ENTER POENG
    {
        printf("Hvor mange poeng har %s\n", spillerListe[c]);
        scanf("%d", &poengListe[c]);
    }
    
    
    

    
    
    for (d=0;d<numberOfPlayers;d++)//SORTING
    {
        for (e=d+1;e<numberOfPlayers;e++)
        {
            if (poengListe[d] > poengListe[e])
            {
                f = poengListe[d];
                poengListe[d] = poengListe[e];
                poengListe[e] = f;
                
                
                strcpy(sortNavn[d], spillerListe[d]);
                strcpy(spillerListe[d], spillerListe[e]);
                strcpy(spillerListe[e], sortNavn[d]);
            
            }
        }
    }
    
    
    printf("Poeng sortert stigende:\n");//PRINT SORTERT LISTE
    for (d = 0; d < numberOfPlayers; d++)
    {
        printf("%s har %d poeng\n", spillerListe[d], poengListe[d]);
    }
    
    
    
    
    //FINN ANTALL GRUPPER
    if (numberOfPlayers % 4 == 0)
    {
        treere = 0;
    }
    else if(numberOfPlayers % 4 == 1)
    {
        treere = 3;
    }
    else if(numberOfPlayers % 4 == 2)
    {
        treere = 2;
    }
    else
    {
        treere = 1;
    }
    
    antallGrupper = ((numberOfPlayers - (treere*3))/4)+treere;
    firere = antallGrupper - treere;
    
    printf("Treere: %d\n", treere);
    printf("Firere: %d\n", firere);
    printf("Totalt antall grupper: %d\n", antallGrupper);
    
    time_t seconds;
    
    seconds = time(NULL);
    
    if (seconds % 2 == 0)
    {
        if (treere == 0)
        {
            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+1);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)-a], poengListe[numberOfPlayers-1-a]);

                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+a], poengListe[(numberOfPlayers/2)+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-a-1], poengListe[(numberOfPlayers/2)-a-1]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a], poengListe[a]);

            }
        }

        else if (treere == 1)
        {
            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+1);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)-a], poengListe[numberOfPlayers-1-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1+a], poengListe[(numberOfPlayers/2)+1+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1-a], poengListe[(numberOfPlayers/2)-1-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a], poengListe[a]);
            }
            printf("Gruppe %d\n", firere+1);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[numberOfPlayers-1-firere], poengListe[numberOfPlayers-1-firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[numberOfPlayers/2]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere], poengListe[firere]);


        }

        else if (treere == 2)
        {

            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+1);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)-a], poengListe[numberOfPlayers-1-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1+a], poengListe[(numberOfPlayers/2)+1+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-2-a], poengListe[(numberOfPlayers/2)-2-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a], poengListe[a]);
            }
            printf("Gruppe %d\n", firere+1);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-2-firere)], poengListe[numberOfPlayers-2-firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1], poengListe[(numberOfPlayers/2)-1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere], poengListe[firere]);

            printf("Gruppe %d\n", firere+2);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1-firere)], poengListe[numberOfPlayers-1-firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[(numberOfPlayers/2)]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere+1], poengListe[firere+1]);


        }

        else if (treere == 3)
        {
            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+1);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)-a], poengListe[numberOfPlayers-1-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+2-a], poengListe[(numberOfPlayers/2)+2-a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-2-a], poengListe[(numberOfPlayers/2)-2-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a], poengListe[a]);
            }

            printf("Gruppe %d\n", firere+1);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1-firere)], poengListe[numberOfPlayers-1-firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[numberOfPlayers/2]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere], poengListe[firere]);

            printf("Gruppe %d\n", firere+2);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+2+firere], poengListe[(numberOfPlayers/2)+2+firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1], poengListe[(numberOfPlayers/2)-1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere+1], poengListe[firere+1]);

            printf("Gruppe %d\n", firere+3);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+3+firere], poengListe[(numberOfPlayers/2)+3+firere]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1], poengListe[(numberOfPlayers/2)+1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[firere+2], poengListe[firere+2]);


        }

        else
        {
            printf("wat");
        }
    return 0;
    }
    
    else
    {
        if (treere == 0)
    {
        for (a = 0; a < firere; a++)
        {
            printf("Gruppe %d\n", a+1);

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)-a], poengListe[numberOfPlayers-1-a]);
            
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+a], poengListe[(numberOfPlayers/2)+a]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-a-1], poengListe[(numberOfPlayers/2)-a-1]);
            printf("Seed 4 er %s med %d poeng\n", spillerListe[a], poengListe[a]);
            
        }
    }

        else if (treere == 1)
        {
            printf("Gruppe 1\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)], poengListe[numberOfPlayers-1]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[numberOfPlayers/2]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[0], poengListe[0]);
            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+2);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-2)-a], poengListe[numberOfPlayers-2-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1+a], poengListe[(numberOfPlayers/2)+1+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1-a], poengListe[(numberOfPlayers/2)-1-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a+1], poengListe[a+1]);
            }

        }

        else if (treere == 2)
        {
            printf("Gruppe 1\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)], poengListe[numberOfPlayers-1]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[numberOfPlayers/2]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[0], poengListe[0]);

            printf("Gruppe 2\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-2)], poengListe[numberOfPlayers-2]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1], poengListe[(numberOfPlayers/2)-1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[1], poengListe[1]);
            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+3);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-3)-a], poengListe[numberOfPlayers-3-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1+a], poengListe[(numberOfPlayers/2)+1+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-2-a], poengListe[(numberOfPlayers/2)-2-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a+2], poengListe[a+2]);
            }

        }

        else if (treere == 3)
        {

            printf("Gruppe 1\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-1)], poengListe[numberOfPlayers-1]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)], poengListe[numberOfPlayers/2]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[0], poengListe[0]);

            printf("Gruppe 2\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-2)], poengListe[numberOfPlayers-2]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-1], poengListe[(numberOfPlayers/2)-1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[1], poengListe[1]);

            printf("Gruppe 3\n");

            printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-3)], poengListe[numberOfPlayers-3]);
            printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+1], poengListe[(numberOfPlayers/2)+1]);
            printf("Seed 3 er %s med %d poeng\n", spillerListe[2], poengListe[2]);

            for (a = 0; a < firere; a++)
            {
                printf("Gruppe %d\n", a+4);

                printf("Seed 1 er %s med %d poeng\n", spillerListe[(numberOfPlayers-4)-a], poengListe[numberOfPlayers-4-a]);
                printf("Seed 2 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)+2+a], poengListe[(numberOfPlayers/2)+2+a]);
                printf("Seed 3 er %s med %d poeng\n", spillerListe[(numberOfPlayers/2)-2-a], poengListe[(numberOfPlayers/2)-2-a]);
                printf("Seed 4 er %s med %d poeng\n", spillerListe[a+3], poengListe[a+3]);
            }
        }

        else
        {
            printf("wat");
        }
        return 0;
    }

}