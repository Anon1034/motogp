

int main ()
{

if (strcasecmp(circuit, "valencia") == 0)
{
    printf("Enter your average velocity:");
    scanf("%g", &vmedia);

    if (158 < vmedia > 161)
    {
        v1 = 2;
    }


    printf("Enter your Delta v of corner 1:");
    scanf("%g", &v_curva1);

    if (v_curva1 < 191 ) {
        x1 = 0.5;
    }
    else if (v_curva1 >= 191 && v_curva1 <= 200)
    {
        x1 = 1.2;
    }

    





}

printf("recap %g\n", v_curva1);
printf("recap %g\n", x1);



return 0;


}