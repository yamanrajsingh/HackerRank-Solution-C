#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int AND=0,OR=0,XOR=0;
  for (int i=1; i<n; i++) {
       for (int j=i+1; i<=n; i++) {
      int and= i&j;
       if (and<k) {
       AND=and;
        }
       int or= i|j;
        if (or<k) {
       OR++;
        }
        int xor= i^j;
         if (xor<k) {
       XOR++;
        }
       
      
 }
 }
 printf("%d\n",AND);
 printf("%d\n",OR);
 printf("%d\n",XOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
