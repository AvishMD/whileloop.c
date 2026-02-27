#include <stdio.h>

int main() {
    int n,ch,wa,count=0,sum=0,rem,sums=0;
    scanf("%d",&ch);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&wa);
        sum+=wa;
        if(sum<ch){
            sums+=wa;
            count++;
        }
        else 
        break;
        i++;
    }
    rem=ch-sums;
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",rem);

    return 0;
}
