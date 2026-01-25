#include <stdio.h>

int main(){
    long long n,in;
    long long sum_inputs = 0;
    
    scanf("%lld", &n);

    for (int i = 0; i < n-1; i++){
        scanf("%lld", &in);
        sum_inputs += in;
    }
    
    printf("%lld", n * (n + 1) / 2 - sum_inputs);
    return 0;
}

// sum of inputs = n(n+1)/2 - missing number => missing number = n(n-1)/2 + sum of inputs
