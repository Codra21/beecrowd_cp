#include<stdio.h>
int main(){
    int x,y,j=1,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
        if(i!=x && i%x!=0){
        printf("%d ",i);
        }
        else if(i==x || i%x==0){
            printf("%d",i);
        }
    if(j==x){
        printf("\n");
        j=0;
        }
    j=j+1;    
    }
    return 0;
}