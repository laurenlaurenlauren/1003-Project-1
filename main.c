#include <stdio.h>
#include <string.h>

void E_rotation (char message [], int shift); //function to encrypt using rotation cipher
void D_rotation (char message [], int shift); //function to decrypt using rotation cipher
void E_substitution (void); //function to encrypt using substitution cipher
void D_substitution (void); //function to decrypt using substitution cipher
/*all of the above functions requre a given key*/

int main () {
    int x, value, shift;
    char message [1024];
    
    printf("select an option:\n");
    printf("1: encrypt rotation\n");
    printf ("2: decrypt rotation\n");
    printf ("3: encrypt substitution\n");
    printf ("4: decrypt substitution\n");
    scanf("%d", &x); //hard coded selection menu
    
    switch(x) {
        
        case 1:
        E_rotation (message, shift); //encrypt rotation function
        break;
        
        case 2:
        D_rotation (message, shift); //decrypt rotation function
        break;
        
        case 3:
        E_substitution (); //encrypt substitution function
        break;
        
        case 4:
        D_substitution (); //decrypt substitution function
        return 0;
        
    }
}

/* Encryption rotation function */

 void E_rotation (char message [], int shift) {
     int i = 0;
     printf("enter a message:\n"); //enter a message in all capitals
    scanf("%s", message);
    printf("enter a key\n"); //number of shifts in the alphabet used to encrypt
        scanf("%d", &shift);
     while (message[i] != '\0') { //this loop adds the shift amount to each letter whilst that amount is between A and Z
         if ((message[i] + shift) >= 65 && (message[i] + shift) <= 90){
             message[i] += (shift);
         } else {
             message[i] += (shift - 25); //if the amount exceeds Z, 25 in subtracted to bring the answer back to the begining of the alphabet
         }
         i++;
     }
     printf("%s", message); //prints encrypted message
 }
 
 /* decryption rotation function */
 
 void D_rotation (char message [], int shift) {
     int i = 0;
     printf("enter a message:\n"); //enter message in all capitals
     scanf("%s", message);
       printf("enter a key\n"); //amount of shifts
        scanf("%d", &shift);
      while (message[i] != '\0') { //this loop subtracts the shift amount from each letter of the message whilst that mount is between A and Z
         if ((message[i] - shift) >= 65 && (message[i] - shift) <= 90){
             message[i] -= (shift);
         } else {
             message[i] -= (shift + 25); //if the amount subceeds A then 25 is added to bring the answer to the end of the alphabet
         }
         i++;
     }
     printf("%s", message); //prints decrypted message
 }
 
 /* encryption substitution function */
 
 void E_substitution () { 
    char message [1024], subltr[27];
	const char origltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k, i;
	printf ("enter a message\n"); //enter a message in all capitals
	scanf("%s", message);
	printf ("enter new alphabet:\n"); //enter a substituted alphabet, no spaces, all capitals, 26 characters
    scanf("%s", subltr);
     for(k=0; message[k]!='\0'; k++){ //this loop tests each letter of the message and equals that to the original alphabet
        for(i=0; i<26; i++){
            if (message[k] == origltr[i]){ //then each subsequent letter in the original alphabet is compared to its corresponding letter in the substitute alphabet
                printf("%c", subltr[i]); //the substitute alphabets corresponding letters to that in the message are printed
            }
        }
    }
 }
 
/* decryption substitution function */
void D_substitution () {
    char message [1024], subltr[27];
	const char origltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k, i;
	printf ("enter a message\n"); //enter a message in all capitals
	scanf("%s", message);
	printf ("enter new alphabet:\n"); //enter a substituted alphabet, no spaces, all capitals, 26 characters
    scanf("%s", subltr);
     for(k=0; message[k]!='\0'; k++){ //this loop tests each letter of the message and equals that to the original alphabet
        for(i=0; i<26; i++){
            if (message[k] == subltr[i]){ //then each subsequent letter in the original alphabet is compared to its corresponding letter in the substitute alphabet
                printf("%c", origltr[i]); //the substitute alphabets corresponding letters to that in the message are printed
            }
        }
    }
 }
    
   
