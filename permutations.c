// A permutation of intergers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1. Given n, construct a beautiful permutation if such a permutation exists.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
   
    if(n==1){
        printf("1");
        return 0;
    }

    if(n == 2 || n == 3){
        printf("NO SOLUTION");
        return 0;
    }

    for(int i = 2; i<=n; i+=2) printf("%d ", i);
    for(int i = 1; i<=n; i+=2) printf("%d ", i);
    return 0;
}
