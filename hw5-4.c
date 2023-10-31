#include <stdio.h>
#include <math.h>

int main()
{
    int H,M;
    scanf("%d%d",&H,&M);
    if(M==0){
        H=H*30;
        if(H>180){
            H=H-180;
            printf("%d",H);
        }
        
    }else{
        float a,b;
        b=(H*5-M)*6;
        a=M*0.5;
        
        float ans =a+b;
        printf("%.3f",ans);
    }
    
        
}
