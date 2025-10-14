// Online C compiler to run C program online
#include <stdio.h>

int main() {

int add(int a,int b){ 
    return a+b;
}

int max(int a,int b){
    int max;
    if(a>b) max=a;
    else max=b;
    return max;
}

float average(float arr[],int n){
    float sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main()
{
    int a,b,c,n;
    printf("donne a et b et c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("the add=%d\n",add(a,b));
    printf("the max=%d\n",max(max(a,b),c));
    
    printf("donne n: ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0; i<n; i++){ 
        printf("donne element=%d",i+1); 
        scanf("%f",&arr[i]);
    }
    printf("the average=%.2f\n",average(arr,n));
 return 0;
}


    
