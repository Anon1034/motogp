#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <math.h>

int main()
{

char circuit[30];
float somma = 0.0;
float media = 0.0;
float sommaScarti = 0.0;
float deviazioneStandard = 0.0;
float voto;
float calcoloDevS = 0.0;
float Vmax = 0.0;
float Vcorner = 0.0;
float CVmax = 0.0;
float CVcorner = 0.0;
float pesoD = 0.30;
float pesoV = 0.20;
float pesoC = 0.50;
float mediaponderata;
char wet;



printf("Enter the circuit: ");
scanf("%20s", circuit);


/*valencia*/
if (strcasecmp(circuit, "valencia") == 0) /*devo ancora importare il circuito valencia*/
{



    printf("Pioveva? Y o N\n");
    scanf(" %c", &wet);




    if (wet == 'Y') 
    {


        int laps = 27; 
    /* si potrebbe fare anche senza inserire questo valore ma per comodità lo mettiamo*/

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

     



if (deviazioneStandard >= 0.15 && deviazioneStandard <= 0.25) {
    calcoloDevS = 10;
}

else if (deviazioneStandard < 0.15) {
    calcoloDevS = 11;
}

else if (deviazioneStandard > 0.25 && deviazioneStandard < 0.45) {
    calcoloDevS = 8;
}

else if (deviazioneStandard > 0.45 && deviazioneStandard < 0.60) {
    calcoloDevS = 6;
}

else if (deviazioneStandard > 0.60 && deviazioneStandard <= 1) {
    calcoloDevS = 4.5;
}

else if (deviazioneStandard > 1 && deviazioneStandard <= 1.50) {
    calcoloDevS = 3.5;
}

else if (deviazioneStandard > 1.50) {
    calcoloDevS = 2;

}






printf("Inserisci la tua velocità di picco (in km/h): ");
scanf("%f", &Vmax);

if (Vmax > 325)
{
    CVmax = 11;
}

else if (Vmax > 315 && Vmax <= 325) 
{
    CVmax = 10;
}

else if (Vmax < 315 && Vmax >= 300)
{
    CVmax = 6;
}

else if (Vmax < 300 && Vmax >= 285)
{
    CVmax = 3.5;
}

else if (Vmax < 285)
{
    CVmax = 2;
}






printf("Inserisci la tua velocità media in curva (in km/h): ");
scanf("%f", &Vcorner);


if (Vcorner > 145)
{
    CVcorner = 11;
}

else if (Vcorner > 135 && Vcorner <= 145) 
{
    CVcorner = 10;
}

else if (Vcorner < 135 && Vcorner >= 105)
{
    CVcorner = 6;
}

else if (Vcorner < 105 && Vcorner >= 90)
{
    CVcorner = 3.5;
}

else if (Vcorner < 65)
{
    CVcorner = 2;
}






mediaponderata = ((calcoloDevS * pesoD) + (CVmax * pesoV) + (CVcorner * pesoC));







printf("La tua velocità media in curva è (in km/h): %g\n", Vcorner);
printf("La tua velocità di picco è (in km/h): %g\n", Vmax);
printf("Voto deviazione standard dei tempi è: %g\n", calcoloDevS);
printf("Il tuo voto è: %g\n", mediaponderata);


}



else {
    int laps = 27; 
    /* si potrebbe fare anche senza inserire questo valore ma per comodità lo mettiamo*/

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

     


if (deviazioneStandard >= 0.08 && deviazioneStandard <= 0.15) {
    calcoloDevS = 10;
}

else if (deviazioneStandard < 0.08) {
    calcoloDevS = 11;
}

else if (deviazioneStandard > 0.15 && deviazioneStandard <= 0.30) {
    calcoloDevS = 8;
}

else if (deviazioneStandard > 0.30 && deviazioneStandard < 0.60) {
    calcoloDevS = 6;
}

else if (deviazioneStandard > 0.60 && deviazioneStandard <= 0.90) {
    calcoloDevS = 4.5;
}

else if (deviazioneStandard > 0.90 && deviazioneStandard <= 1.20) {
    calcoloDevS = 3.5;
}

else if (deviazioneStandard > 1.20) {
    calcoloDevS = 2;

}





printf("Inserisci la tua velocità di picco (in km/h): ");
scanf("%f", &Vmax);

if (Vmax > 342)
{
    CVmax = 11;
}

else if (Vmax > 332 && Vmax <= 342) 
{
    CVmax = 10;
}

else if (Vmax < 335 && Vmax >= 332)
{
    CVmax = 6;
}

else if (Vmax < 323 && Vmax >= 318)
{
    CVmax = 3.5;
}

else if (Vmax < 318)
{
    CVmax = 2;
}






printf("Inserisci la tua velocità media in curva (in km/h): ");
scanf("%f", &Vcorner);


if (Vcorner > 155)
{
    CVcorner = 11;
}

else if (Vcorner > 145 && Vcorner <= 155) 
{
    CVcorner = 10;
}

else if (Vcorner < 120 && Vcorner >= 115)
{
    CVcorner = 6;
}

else if (Vcorner < 75 && Vcorner >= 65)
{
    CVcorner = 3.5;
}

else if (Vcorner < 65)
{
    CVcorner = 2;
}






mediaponderata = ((calcoloDevS * pesoD) + (CVmax * pesoV) + (CVcorner * pesoC));







printf("La tua velocità media in curva è (in km/h): %g\n", Vcorner);
printf("La tua velocità di picco è (in km/h): %g\n", Vmax);
printf("%g\n", calcoloDevS);
printf("Il tuo voto è: %g\n", mediaponderata);






}

}




return 0;


}