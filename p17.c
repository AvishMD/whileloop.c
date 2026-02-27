#include <stdio.h>
int main() {
    int n,wb,pa,count=0,sum=0,sums=0,rem;
    scanf("%d",&wb);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pa);
        sum+=pa;
        if(sum<wb){
            sums+=pa;
            count++;
        }
        i++;
    }
    rem=wb-sums;
    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",rem);
    return 0;
}
