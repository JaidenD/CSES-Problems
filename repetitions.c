#include <stdio.h>

int main(){
    char c;
    char c_prev = '\0';

    int best = 0, counter = 0;
    while(scanf("%c", &c)!=EOF){
        if(c == c_prev){
            counter++;
        }
        else{
            counter = 1;
        }
        if(counter>best) best = counter;
        
       c_prev = c;
    }
    printf("%d", best);
    return 0;
}
