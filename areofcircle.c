#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593

float daire(float y);

int main()
{
    float r;
    printf("dairenin yaricapini giriniz : ");
    scanf("%f",&r);
    printf("dairenin alani : %f",daire(r));
}

float daire(float y)
{

    return(PI*y*y);

}
