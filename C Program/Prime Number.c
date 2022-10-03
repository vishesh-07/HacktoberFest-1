#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("%d is not a prime number",num);
        return 0;
    }else{
        int flag=1;
        for(int i=2;i*i<num;i++){
            if(num%i==0){
                printf("%d is not a prime number",num);
                flag=0;
                break;
            }
        }
        if(flag){
            printf("%d is a prime number",num);
        }
    }
    return 0;
}
