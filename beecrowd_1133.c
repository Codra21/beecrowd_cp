#include<stdio.h>
int main(){
    int i,x,y,n,m;
    scanf("%d%d",&x,&y);
    if(x<y){
    for(i=x+1;i<y;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
    }
    else if(x>y){
        n=y;
        m=x;
        for(i=n+1;i<m;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }    
    }
    return 0;
}