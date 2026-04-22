#include <stdio.h>
int main(){
    int n,a[3005],i,j,k,h,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n-3;i++){
        for(j=i+1;j<=n-2;j++){
            if(a[j]>a[i]){
              for(k=j+1;k<=n-1;k++){
                   if(a[k]==a[j]){
                      for(h=k+1;h<=n;h++){
                           if(a[h]<a[k]){
                               x++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d",x % 10007);
    return 0;
    }
