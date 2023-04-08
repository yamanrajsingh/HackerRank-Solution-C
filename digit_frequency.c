    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>

    int main() {

        /* Enter your code here. Read input from STDIN. Print output to STDOUT */           char s[1000];
        scanf("%s",s);
        int count=0;
        for (char j='0'; j<='9'; j++) {
            count=0;
            for (int i=0; i<strlen(s); i++) {
              if (j==s[i]) {
               count++;
              }
        }
        printf("%d ",count);
           }
      
       
        return 0;
    }
