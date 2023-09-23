#include <stdio.h>

int main()
{
    int battery;
    printf("enter battery as %d\n");
    scanf("%d",&battery);
    printf("you have enter your battery as %d\n",battery);

    if(battery<15){
        printf("showing notification");
    }    
    else{
        printf("not showing notification");
    }
    return 0;
}
