#include <stdio.h>
int main() {
    int n,c,hv,count=0,counts=0;
    scanf("%d",&c);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&hv);
        if(hv<c)
        count++;
        if(hv>c)
        counts++;
        i++;
    }
    printf("Safe Hours: %d\n",count);
    printf("Failure Count: %d",counts);
    
    return 0;
}
