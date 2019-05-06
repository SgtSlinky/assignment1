
#include <stdio.h>

int
main (){
  
int size;
int menu;
  
                                                    // Menu options
printf ("1.Encryption of a message with a rotation cipher\n");
printf ("2.Decryption of a message encrypted with a rotation cipher\n");
printf ("3.Encryption of a message with a substitution cipher given message text and alphabet substitution\n");
printf ("4.Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n");
printf ("5.Decryption of a message encrypted with a rotation cipher given cipher text only\n");
printf ("6.Decryption of a message encrypted with a substitution cipher given cipher text only\n");
printf ("7.Quit\n\n");
 
printf ("Select program to run ");
  
scanf ("%d", &menu);
  
 
if (menu == 1){                                     //menu option 1 encription with rotation cipher of users choice
    char name[] = "Attack At Dawn!";                //message to be encoded
    size = sizeof (name);                           //size of message
    int key;
    char encription[size];
      
    printf ("Enter the key ");
    scanf ("%d", &key);
      
        while (key < -25 || key > 25){
	  
            printf ("Key must be between -25 and 25. Enter a new key ");
	        scanf ("%d", &key);
	        }
      

	        for (int i = 0; i < size; i++){
	  
                if (name[i] >= 97 && name[i] <= 122){
	                name[i] = name[i] - 32;
	                }
	  
                if ((name[i] >= 0 && name[i] <= 64) || (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123)){
	      
                    encription[i] = name[i];
	                }
	  
	            else{
	                encription[i] = name[i] + key;
	      
 
                if (encription[i] > 90){
		            encription[i] = 65 + (encription[i] - 91);
		            }
        }

    printf ("%c ", encription[i]);

    }
      
printf ("\n");
return 0;

}
  
if (menu == 2){                                                         //menu option 2 decription 
    char name[] = "IBBIKS IB LIEV!";                                    //IBBIKS IB LIEV!
    int key;
    char encription[size];
    printf ("Enter the key ");
    scanf ("%d", &key);
      
    while (key < -25 || key > 25){
	    printf ("Key must be between -25 and 25. Enter a new key ");
        scanf ("%d", &key);
	    }
      
    for (int i = 0; i < size; i++){
	    //if (name[i] >= 97 && name[i] <= 122){
	    //    name[i] = name[i] - 32;
	    //    }
	  
        if ((name[i] >= 0 && name[i] <= 64)|| (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123)){
            encription[i] = name[i];
	        }
	  
    else{
	    encription[i] = name[i] - key;
    }  

 
    if (encription[i] < 65){
        encription[i] = 91 - 65 + (encription[i]);
        }
	    
    
    printf ("%c ", encription[i]);
	
}
      
printf ("\n");
return 0;

}
  
 
if (menu == 3){

    #include <string.h>

    
        char* ciphertext = "qwertyuiopasdfghjklzxcvbnm";    // cipher lookup

        char input[500];                                    // input buffer
        printf("Enter text: ");
        fgets(input, sizeof(input), stdin);                 // safe input from user
        input[strlen(input) - 1] = 0;                       // remove the \n (newline)
        int count = strlen(input);                          // get the string length

        char output[count];                                 // output string
        for(int i = 0; i < count; i++) {                    // loop through characters in input
        int index = ((int) input[i]) - 97;                  // get the index in the cipher by subtracting 'a' (97) from the current character
        if(index < 0) {
            output[i] = ' ';                                // if index < 0, put a space to account for spaces
        }
        else {
            output[i] = ciphertext[index];                  // else, assign the output[i] to the ciphertext[index]
        }
    }
    output[count] = 0;                                      // null-terminate the string

    printf("output: %s\n", output);                         // output the result

    
}
  
 
if (menu == 4)
    {
      
;
    
}
  
 
if (menu == 5)
    {
      
;
    
}
  
 
if (menu == 6)
    {
      
;
    
}
  
if (menu == 7)
    {
      
printf
	("Thank you have a nice day \nProgran will self destruct in 5 seconds \n5\n4\n3\n2\n1\nfzzt (insert puff of smoke) ");
    
}

return 0;

}


 





