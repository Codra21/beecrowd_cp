#include<stdio.h>
int main(){
    int N,i,j,k,l,s,p,q;
    scanf("%d",&N);
    for(j=1,k=j*j,l=k*j;j<=N;j++,k=j*j,l=k*j){
            printf("%d %d %d\n",j,k,l);
            for(s=j,p=k+1,q=l+1;s<=j;s++){
                printf("%d %d %d\n",s,p,q);
            }
     }
    return 0;
}