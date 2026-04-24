#include <stdio.h>
int main(){
    int n,m,a[300005],l,r,p=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=m;j++){
        scanf("%d %d",&l,&r);
        for(int i=1;i<=n;i++){
            if(a[i]<l||a[i]>r){
                p++;
            }
        }
    }
    printf("%d",p%10007);
}
