#include <stdio.h>

int main () {
 
  int x, value, key;
  char message[1024];
  
  Printf("select an option");
  printf("1: encrypt rotation\n");
  printf("2: decrypt rotation\n");
  printf("3: encrypt substitution\n);
  printf("4: decrypt substitution\n);
         scanf("%d", &x);
         
  switch(x) {
        case 1: 
        printf("enter message to encrypt:\n");
        scanf("%char\n",message);
        printf("enter a key:\n");
        scanf("%d", &key);
        for(value = 0; (value < 100 && message[value] != '\0'); value++)
        message[value] = message[value] + key; //key added to ascii value, doesnt work yet

      printf("Encrypted message: %s\n", message);
      break;
         }       

return 0;
}
