#include<stdio.h>

int main(){
    int n,sum,c=0;
    scanf("%d", &n);
    scanf("%d", &sum);
    int a[n];
    
    if(n<2)
        return 1;
    
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
        
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j] == sum)
                c++;
        }
    
    printf("%d", sum);
    
}