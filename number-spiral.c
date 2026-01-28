#include <stdio.h>
#include <math.h>
int main(){
    long long n, x, y, z, ans;
    scanf("%lld", &n);

    for(int i = 0; i<n; i++){
        scanf("%lld", &y);
        scanf("%lld", &x);
        
        z = (y>x) ? y : x;
        if (z % 2 == 0){
            if(z==y) {
                ans = z*z - (x-1);
            }
            else{
                ans = (z-1)*(z-1) + y;
            }
        } else{
            if(z==x){
                ans = z*z - (y-1);
            }
            else{
                ans = (z-1)*(z-1) + x;
            }
        }

        printf("%lld\n", ans);
    }
    return 0;
}
