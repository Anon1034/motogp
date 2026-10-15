#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include "valencia.h"
#include "mugello.h"
#include "silverstone.h"

int main()
{

char circuit[20];
float somma = 0.0;
float media = 0.0;
float sommaScarti = 0.0;
float deviazioneStandard = 0.0;
float vMax, vCorner, v1Avg;
float calcoloDevS;
float pesoD = 0.20;
float pesoVA = 0.10;
float pesoV = 0.20;
float pesoC = 0.50;
float mediaponderata;
char wet;
int laps;
float devStandard;



printf("Enter the circuit: ");
scanf("%19s", circuit);



if (strcasecmp(circuit, "valencia") == 0)
{
    laps = 27;
}
else if (strcasecmp(circuit, "mugello") == 0)
{
    laps = 23;
}
else if (strcasecmp(circuit, "silverstone") == 0)
{
    laps = 20;
}
else
{
    printf("No valid circuit!\n");
}

    float tempi[laps];

    for (int i = 0; i < laps; i++)
    {
        printf("inserisci il tempo al giro (in secondi)%d: ", i + 1);
        scanf("%f", &tempi[i]);
        somma = somma + tempi[i];
    }
    
    media = somma / laps;

    for (int i = 0; i < laps; i++)
    {
        float differenza = tempi[i] - media;
        sommaScarti = sommaScarti + (differenza * differenza);
    }

    calcoloDevS = sqrt(sommaScarti / (laps - 1));
    printf("%g secondi\n", calcoloDevS);


    printf("Inserisci la tua velocità di picco (in km/h): ");
    scanf("%f", &vMax);

    printf("Inserisci la tua velocità media in curva (in km/h): ");
    scanf("%f", &vCorner);

    printf("Inserisci la tua velocità media (in km/h): ");
    scanf("%f", &v1Avg);


if (strcasecmp(circuit, "valencia") == 0)
{
    devStandard = voto1V1(calcoloDevS);
    vMax = voto2V1(vMax);
    vCorner = voto3V1(vCorner);
    v1Avg = voto4V1(v1Avg);
}
else if (strcasecmp(circuit, "mugello") == 0)
{
    devStandard = voto1M1(calcoloDevS);
    vMax = voto2M1(vMax);
    vCorner = voto3M1(vCorner);
    v1Avg = voto4M1(v1Avg);
}
else if (strcasecmp(circuit, "silverstone") == 0)
{
    devStandard = voto1M1(calcoloDevS);
    vMax = voto2M1(vMax);
    vCorner = voto3M1(vCorner);
    v1Avg = voto4M1(v1Avg);
}



mediaponderata = ((devStandard * pesoD) + (vMax * pesoV) + (vCorner * pesoC) + (v1Avg * pesoVA));


//calcolo voti
printf("La tua deviazione standard dei tempi ha un voto di: %g\n", devStandard);
printf("La tua velocità media in curva ha un voto di: %g\n", vCorner);
printf("La tua velocità di picco ha un voto di: %g\n", vMax);
printf("La tua velocità media ha un voto di: %g\n", v1Avg);
printf("\n");
printf("Il tuo voto finale è: %g\n", mediaponderata);



return 0;

}