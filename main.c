#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int peso;
    int distanza;
    bool urgenza;
    float prezzo;

    printf("Inserisci il peso del carico (in kg)\n");
    scanf("%d", &peso);
    printf("Inserisci la distanza da percorrere (in km)\n");
    scanf("%d", &distanza);
    printf("La spedizione è urgente?\n|Si=1 No=0|\n");
    scanf("%d", &urgenza);

    if (urgenza == true)
    {
        if (distanza < 100)
        {
            prezzo = 2.5 * peso;
        }
        else if (distanza >= 100 && distanza <= 300)
        {
            prezzo = 3.5 * peso;
        }
        else if (distanza > 300)
        {
            prezzo = 4 * peso;
        }
    }
    else if(urgenza == false)
    {
        if (distanza < 100)
        {
            prezzo = 1 * peso;
        }
        else if (distanza >= 100 && distanza <= 300)
        {
            prezzo = 2 * peso;
        }
        else if (distanza > 300)
        {
            prezzo = 3 * peso;
        }
    }
    printf("Le spese della spedizione saranno %.02f", prezzo);

    return 0;
}
