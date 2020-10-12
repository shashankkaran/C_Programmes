#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int nterm(int n, int a, int b, int c) {
  //Write your code here.
int sum ;
if(n<=3 || n>=20){
    return 1;
}
else {
sum = a+b+c;
return sum ;
}



}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = nterm(n, a, b, c);

    printf("%d", ans);
    return 0;
}
