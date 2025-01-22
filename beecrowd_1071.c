#include<stdio.h>
int main(){
    int a,b,i,c,sum=0;
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("0\n");
    }
    else if(a>b){
        for(i=b+1;i>b&&i<a;i++){
            c=i;
            if(c%2!=0){
                sum=sum+c;
            }
        }
        printf("%d\n",sum);
    }
    else if(b>a){
        for(i=a+1;i<b&&i>a;i++){
            c=i;
            if(c%2!=0){
                sum=sum+c;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}