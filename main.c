#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include "valencia.h"


int main()
{

char circuit[20];
float somma = 0.0;
float media = 0.0;
float sommaScarti = 0.0;
float deviazioneStandard = 0.0;
float vMax, vCorner, vAvg;
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


/*Valencia Circuit*/
if (strcasecmp(circuit, "valencia") == 0)
{
    laps = 27;

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

    deviazioneStandard = sqrt(sommaScarti / (laps - 1));
    printf("%g secondi\n", deviazioneStandard);


    calcoloDevS = voto1V1(devStandard);
    printf("Inserisci la tua velocità di picco (in km/h): ");
    scanf("%f", &vMax);
    vMax = voto2V1(vMax);
    printf("Inserisci la tua velocità media in curva (in km/h): ");
    scanf("%f", &vCorner);
    vCorner = voto3V1(vCorner);
    printf("Inserisci la tua velocità media: ");
    scanf("%f", &vAvg);
    vAvg = voto4V1(vAvg);



}






mediaponderata = ((calcoloDevS * pesoD) + (vMax * pesoV) + (vCorner * pesoC) + (vAvg * pesoVA));



printf("La tua velocità media in curva è (in km/h): %g\n", vCorner);
printf("La tua velocità di picco è (in km/h): %g\n", vMax);
printf("%g\n", calcoloDevS);
printf("La tua velocità media è (in km/h): %g\n", vAvg);
printf("Il tuo voto è: %g\n", mediaponderata);








return 0;


}