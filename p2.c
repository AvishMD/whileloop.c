#include <stdio.h>

int main() {
    int n,bal,trn,count=0;
    scanf("%d",&n);
    scanf("%d",&bal);
    int i=1;
    while(i<=n){
        scanf("%d",&trn);
        bal=bal+trn;
        if(bal<2000)
        count++;
        i++;
    }
    printf("%d\n",bal);
    printf("%d",count);

    return 0;
}
