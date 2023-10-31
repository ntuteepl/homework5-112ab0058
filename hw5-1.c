#include <stdio.h>
#include <math.h>

int main()
{
    float C;
    scanf("%f",&C);
    float f = (C*9/5)+32;
    printf("%.1f",f);
}

#include <stdio.h>
#include <math.h>

int main()
{
    int min;
    scanf("%d",&min);
    float price;
    if(min<=800){
        price=min*0.9;
    }else if(min>800&&min<1500){
        price=min*0.9*0.9;
    }else if(min>=1500){
        price=min*0.9*0.79;
    }
    printf("%.1f",price);
    }

