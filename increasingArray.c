#include <stdio.h>

int main(){
    int n;
    long long count = 0;

    scanf("%d",&n);
    
    int inputs[n];

    for(int i = 0; i <= n-1; i++){
        if(scanf("%d", &inputs[i]) == EOF) break;
    }

    for(int i=1; i<n; i++){
        if(inputs[i]<inputs[i-1]){
            count += inputs[i-1] - inputs[i];
            inputs[i] += inputs[i-1]-inputs[i];
        }
    }

    printf("%lld ", count);
    
    return 0;
}




