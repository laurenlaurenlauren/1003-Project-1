#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void E_rotation (char message[], int shift);
void D_rotation (char message[], int shift);

int main () {
 
  int x, value, shift;
  char message[1024];
 char subltr [27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char origltr [27];
 
 printf("enter a message:"); //all capitals
 scanf("%s", message);
  
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
        E_rotation (message, shift); //E_rotation function reads input and inserts into function
        
    case 2: 
        printf("enter a key");
        scanf("%d", &shift);
        D_rotation (message, shift); //D_rotation function reads input and inserts into function
   
   case 3:
       printf ("enter a key"); //enter capital all letters, no spaces
       scanf ("%s\n", subltr); 
      { message[i] = subltr[message[i] – ‘A’];}; 
      printf ("encrypted message is: %s\n", message);
    
   case 4:
   Int j = 0;
   for (j = 0; j < 26; j++) {  
  (message[i] == subltr[j])
  { message[i] = ‘A’ + j; break; }
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
