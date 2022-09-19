#include <stdio.h>
 
int jose(int n, int k){
    if(n<=1){
        return 1;
    }
    return (jose(n-1,k) + k-1) %n + 1;
        
}
int main() {
    
    int n;
    int k = 2;
    int times;
    scanf("%d", &times);
    
    for(int i = 1; i <= times; i++){
        scanf("%d", &n);
        scanf("%d", &k);
    
        int m = jose(n, k);
        printf("Case %d: %d\n", i, m);
    }
    return 0;
}