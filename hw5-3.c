#include <stdio.h>
#include <math.h>

int main()
{
    int hours,salary;
    scanf("%d%d",&hours,&salary);
    float money;
    if(hours<=60){
        money=salary*hours;
        printf("%.1f",money);
    }else if(hours>60&&hours<=120){
        money=(60*salary)+((hours-60)*salary*1.33);
        printf("%.1f",money);
    }else if(hours>120){
        money=(60*salary)+(60*salary*1.33)+((hours-120)*salary*1.66);
        printf("%.1f",money);
        
    }
        
    }

