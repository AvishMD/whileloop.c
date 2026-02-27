#include <stdio.h>
int main() {
    int n,dh,sum=0,count=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&dh);
        sum+=dh;
        if(dh>2)
        count++;
        i++;
    }
    printf("Total Delay: %d \n",sum);
    printf("Delayed Days: %d",count);

    return 0;
}
