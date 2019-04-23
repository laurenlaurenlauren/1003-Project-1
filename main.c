#include <stdio.h>

void E_rotation (char message[], int shift);
void D_rotation (char message[], int shift);

int main () {
 
  int x, value, shift;
  char message[1024];
  
  printf("select an option\n");
  printf("1: encrypt rotation\n");
  printf("2: decrypt rotation\n");
  printf("3: encrypt substitution\n");
  printf("4: decrypt substitution\n");
         scanf("%d", &x);
         
  switch(x) {
        
   case 1: 
        printf("enter message to encrypt:\n");
        scanf("%s\n",message);
        printf("enter a key:\n");
        scanf("%d", &shift);
        E_rotation (message, shift);
        
    case 2: 
        printf("enter message to decrypt:\n");
        scanf("%s\n", message);
        printf("enter a key");
        scanf("%d", &shift);
        D_rotation (message, shift);
   
   case 3:
       char origltr [27] = ABCDEFGHIJKLMNOPQRSTUVWXYZ;
       char subltr [27];
       printf ("enter a key");
       scanf ("%s\n", subltr);
      { message[i] = subltr[message[i] – ‘A’];};
      printf ("encrypted message is: %s\n", message);
       
   
   }       
return 0;
  }
void E_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] + shift) >= 65 && (message[i] + shift) <= 90) {
      message[i] += (shift);
    } else {
      message[i] += (shift - 25); 
    }
    i++;
  }
  printf("%s", message);
} 
void D_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] - shift) >= 65 && (message[i] - shift) <= 90) {
      message[i] -= (shift);
    } else {
      message[i] -= (shift + 25); 
    }
    i++;
  }
  printf("%s", message);
} 
