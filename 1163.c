/**
	Arquivo:1163.c
	Implementa:angry ducks
	Autor:gustavo antonio martini
	Data:28/06/2021
*/


#include <stdio.h>

#include <math.h>
#define g 9.80665
#define pi 3.14159


double senoDe(double angulo)
{
    return (sin((angulo * pi) / 180.0));
}

double cossenoDe(double angulo)
{
    return (cos((angulo * pi) / 180.0));
}

int main(int argc, char *argv[])
{
    double Voy, Vox, v, alcance, altura, h, angulo, h0;
    int n, p1, p2;
    while (scanf("%lf",&h0)!= EOF)
    {
        h = 0.0;
        scanf("%d %d",&p1,&p2);
        scanf("%d" ,&n); 
        for (int i = 0; i < n; i++)
        {
            scanf ("%lf %lf", &angulo, &v); 
            altura = ((v * senoDe(angulo)) * (v * senoDe(angulo))) / (2 * g); 
            h = h0 + altura; 
            Voy = v*senoDe(angulo);
            Vox = v*cossenoDe(angulo);
            alcance=((Vox*Voy)/g)+(Vox*(sqrt((2*h)/g)));
            if (!(alcance >= p1 && alcance <= p2))
            {
                printf("%.5lf -> NUCK\n",alcance); 
            }
            else
            {
                printf("%.5lf -> DUCK\n",alcance);
            }
        }

    }
    return 0;
}