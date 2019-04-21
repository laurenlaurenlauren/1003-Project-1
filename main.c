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
  printf("4: decrypt substitution\n"); //hard coded menu
         scanf("%d", &x);
         
  switch(x) {
        
   case 1: 
        printf("enter message to encrypt:\n"); 
        scanf("%s\n",message);
        printf("enter a key:\n"); //enter amount of shifts required in rotation
        scanf("%d", &shift);
        E_rotation (message, shift); 
        
    case 2: 
        printf("enter message to decrypt:\n");
        scanf("%s\n", message);
        printf("enter a key");
        scanf("%d", &shift);
        D_rotation (message, shift);
   
   }       
return 0;
  }
void E_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] + shift) >= A && (message[i] + shift) <= Z) { //ASCII value must be between A and Z
      message[i] += (shift); //the ascii character is now equal to its value plus the shift
    } else {
      message[i] += (shift - 25); //if the value plus the shifty exceeds Z, then minus 25 to bring the number to the begining of the alphabet
    }
    i++;
  }
  printf("%s", message);
} 
void D_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] - shift) >= A && (message[i] - shift) <= Z) { //ASCII value must be between A and Z
      message[i] -= (shift); //the ascii character is now equal to its value plus the shift
    } else {
      message[i] -= (shift + 25); //if the value plus the shifty exceeds Z, then minus 25 to bring the number to the begining of the alphabet
    }
    i++;
  }
  printf("%s", message);
} 

