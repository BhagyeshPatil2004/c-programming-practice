#include<stdio.h>
int main()
{
    int sp,mp,t;
    printf("Enter Your saling price of an product\n");
    scanf("%d",&sp);
    printf("Enter the MRP of that product\n");
    scanf("%d",&mp);
    
        if(sp>mp){
        t=sp-mp;
        printf("You get the profit of %d",t);
    }
    else if (sp<mp){
        t=mp-sp;
        printf("You get loss of %d",t);
    }
    else{ 
    printf("You not get profit neither loss");
    }
    return 0;
}