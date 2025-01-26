#include<stdio.h>
int main(){
    for(int i=1;i!=0;i++){
        scanf("%d",&i);
        if(i==0) break;
        for(int j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("%d\n",i);
    }
    return 0;
}