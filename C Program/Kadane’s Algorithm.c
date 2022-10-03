#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxi=0,cur=0;
    for(int i=0;i<n;i++){
        cur+=a[i];
        if(cur>maxi){
            maxi=cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    printf("Maximum Subarray Sum is %d",maxi);
    return 0;
}
