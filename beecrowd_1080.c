#include<stdio.h>
int main(){
    int i,p=0,j,k=0;
    for(int i=1;i<=100;i++){
        
        scanf("%d",&j);
        if(j>k){
            k=j;
            p=i;
        }
        
    }
    printf("%d\n%d\n",k,p);
    return 0;
}