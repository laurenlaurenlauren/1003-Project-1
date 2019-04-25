#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void E_rotation (char message[], int shift); //function for encrypting with rotation cipher
void D_rotation (char message[], int shift); //function for decrypting with rotation cipher
void E_substitution (void); //function for encrypting with substitution cipher

int main () {
 
  int x, value, shift;
  char message[1024];
 
 printf("enter a message:"); //enter in all capitals
 scanf("%s", message); //scans message to be implemented in any function
  
  printf("select an option\n");
  printf("1: encrypt rotation\n");
  printf("2: decrypt rotation\n");
  printf("3: encrypt substitution\n");
  printf("4: decrypt substitution\n");
         scanf("%d", &x); //hard coded selection menu
         
  switch(x) {
        
   case 1: 
        printf("enter a key:\n");
        scanf("%d", &shift);
        E_rotation (message, shift); //E_rotation function reads input and inserts into E_rotation function
        
    case 2: 
        printf("enter a key");
        scanf("%d", &shift);
        D_rotation (message, shift); //D_rotation function reads input and inserts into D_rotation function
   
   case 3:
       E_substitution (); //E_substitution function implements
    
   case 4:
   Int j = 0;
   for (j = 0; j < 26; j++) {  
  (message[i] == subltr[j])
  { message[i] = ‘A’ + j; break; }
  }       
return 0;
  }
 
 
 /* Encryption of message using rotation cipher given shift value */
 
void E_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') { 
    if ((message[i] + shift) >= 65 && (message[i] + shift) <= 90) {
      message[i] += (shift);
    } else {
      message[i] += (shift - 25); 
    }
    i++; //reads each letter as ascii value between 65 and 90, and adds shift amount to each, unless it exceeds 90 in which case 25 is subtracted.
  }
  printf("%s", message); //prints new ascii character
} 
 /* Decryption of message using rotation cipher given shift value*/ 
 
void D_rotation (char message[], int shift) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] - shift) >= 65 && (message[i] - shift) <= 90) {
      message[i] -= (shift);
    } else {
      message[i] -= (shift + 25); 
    }
    i++; //reads each letter and subtracts number of shifts from ascii value, if it is below 65, 25 is added to the value
  }
  printf("%s", message); //prints new ascii characters
} 
 /* Encryption using substitution ciphers, given alphabet substitution */
 
 void E_substitution () { 
     const char origltr [27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     char subltr [27];
     int i, k;
     printf ("enter new alphabet:\n");
     scanf("%s", subltr);
     for (k=0, message[k] != '\0'; k++); {
      if (message[k] < 65 && message[k] > 90);
       printf("%s", &message[k]);
      for (i=0; i<26; i++); {
         if (message[i] == origltr[i]) {
             printf("%s\n", subltr);
         }
     }
 }
