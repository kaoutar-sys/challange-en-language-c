#include <stdio.h>
#include <math.h> 
int main()

{
   float temperatureC ;
    printf("veuille entrer la temperature en celsius : ");
    scanf("%f",&temperatureC);

    if (temperatureC < 0) 
    {
        printf("la temperature  est solide.\n");
    }
    else if( 0 <= temperatureC < 100){
    printf("la temperature est liquide.\n");
    }
    else 
    {
        printf("la temperature est gazeuse.\n");

    }
    return 0;
}
