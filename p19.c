#include <stdio.h>
int main() {
    int n,mc,pa,sum=0,rem;
    scanf("%d",&mc);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pa);
        sum+=pa;
        i++;
    }
    rem=sum-mc;
    if(sum>mc){
        printf("Treated Patients: %d\n",mc);
        printf("Rejected Patients: %d",rem);
    }
    else {
        printf("Treated Patients: %d\n",sum);
        printf("Rejected Patients: 0");
    }

    return 0;
}
