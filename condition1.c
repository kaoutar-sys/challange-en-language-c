#include <stdio.h>
int main()
{
float nombre; 
printf ("veuillez entrer un nombre : ");
scanf ("%f",&nombre);
if (nombre > 0)
{
printf ("le nombre est positif.\n");
}
else if (nombre < 0)
{
printf ("le nombre est negatif.\n");
}
else 
{
printf ("le nombre est nul.\n");
}
return 0;
}