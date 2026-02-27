#include <stdio.h>

int main() {
    int n,ov,count=0,sum=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&ov);
        sum+=ov;
        if(ov>4)
        count++;
        i++;
    }
    printf("Total Overtime: %d\n",sum);
    printf("Total Overtime: %d\n",count);

    return 0;
}
