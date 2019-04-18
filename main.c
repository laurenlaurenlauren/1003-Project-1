#include <stdio.h>

void E_rotation (char message[], int shift);

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
        E_rotation (message, shift);
   
   }       
return 0;
  }
void E_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] += shift) >= 65 && (message[i] += shift) <= 90) {
      message[i] += (shift);
    } else {
      message[i] += (shift - 25); 
    }
    i++;
  }
  printf("%s", message);
} 
