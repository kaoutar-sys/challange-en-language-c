#include <stdio.h>
int main()
{

float cellisius, kilvin;
printf("entrer la temperature en celcius:\n");
scanf("%f", &cellisius);
kilvin=cellisius+273.15;
printf("la temperature en kilvin est: %f\n", kilvin);

    return 0;
}