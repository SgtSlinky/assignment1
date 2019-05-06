
#include <stdio.h>


int main (){
int i;
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
      
    printf ("Enter the key ");                      //ask for encoding key
    scanf ("%d", &key);
      
        while (key < -25 || key > 25){
	  
            printf ("Key must be between -25 and 25. Enter a new key ");        //only accept key between 
	        scanf ("%d", &key);
	        }
      

	        for (int i = 0; i < size; i++){
	  
                if (name[i] >= 97 && name[i] <= 122){                       //convert lower case letters to upper case letters
	                name[i] = name[i] - 32;
	                }
	  
                if ((name[i] >= 0 && name[i] <= 64) || (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123)){   //leave special charachters as they are
	               encription[i] = name[i];
	                }
	  
	            else{
	                encription[i] = name[i] + key;                             //apply encription key
	      
 
                    if (encription[i] > 90){                                    // prevent letters from becoming characters 
		                encription[i] = 65 + (encription[i] - 91);
		                }
                    }

    printf ("%c ", encription[i]);

    }
      
printf ("\n");
return 0;

}
  
if (menu == 2){                                                         //menu option 2 decription 
    char name[] = "IBBIKS IB LIEV!";                                    //8 letter rotation = IBBIKS IB LIEV!
    size = sizeof (name);                                               //size of message
    int key;
    char encription[size];
    printf ("Enter the key ");
    scanf ("%d", &key);
      
    while (key < -25 || key > 25){
	    printf ("Key must be between -25 and 25. Enter a new key ");
        scanf ("%d", &key);
	    }
      
    for (int i = 0; i < size; i++){
	    
        if ((name[i] >= 0 && name[i] <= 64)|| (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123)){    //leave special characters as they are
            encription[i] = name[i];
	        }
	  
        else{
	        encription[i] = name[i] - key;                                                                 //apply decription key
            }  
    
 
    if (encription[i] < 65){
        encription[i] = 91 - 65 + (encription[i]);                                                      //loop alphabet so letters dont become characters
        }
    
    
    printf ("%c ", encription[i]);
    
}
      
printf ("\n");
return 0;

}
  
 
if (menu == 3){

char name[] = "Attack At Dawn!";                            //message to be encoded
    size = sizeof (name);                                   //size of message
    
        
        
        
    for (int i = 0; i < size; i++){
    
        if (name[i] >= 97 && name[i] <= 122){               //convert lower case letters to upper case letters
	       name[i] = name[i] - 32;
	       }
        switch(name[i]) {
                                        //have array here
    
           case 'A': name[i] = 'Q';
           break;
       
           case  'B': name[i] = 'W';
           break;
           
           case  'C': name[i] = 'E';
           break;
       
           case  'D': name[i] = 'R';
           break;
       
           case  'E': name[i] = 'T';
         break;
       
         case 'F': name[i] = 'Y';
         break;
       
       case  'G': name[i] = 'U';
       break;
       
       case  'H': name[i] = 'I';
       break;
       
       case  'I': name[i] = 'O';
       break;
       
       case  'J': name[i] = 'P';
       break;
       
       case  'K': name[i] = 'A';
       break;
       
       case  'L': name[i] = 'S';
       break;
       
       case  'M': name[i] = 'D';
       break;
       
       case 'N': name[i] = 'F';
       break;
       
       case  'O': name[i] = 'G';
       break;
       
       case  'P': name[i] = 'H';
       break;
       
       case  'Q': name[i] = 'J';
       break;
       
       case  'R': name[i] = 'K';
       break;
       
       case  'S': name[i] = 'L';
       break;
       
       case  'T': name[i] = 'Z';
       break;
       
       case 'U': name[i] = 'X';
       break;
       
       case  'V': name[i] = 'C';
       break;
       
       case  'W': name[i] = 'V';
       break;
       
       case 'X': name[i] = 'B';
       break;
       
       case  'Y': name[i] = 'N';
       break;
       
       case 'Z': name[i] = 'M';
       break;
        }
    printf ("%c ", name[i]);
    }

printf ("\n");
return 0;

}    
    

  
 
if(menu == 4){

      
char name[] = "QZZQEA QZ RQVF!";                            //message to be encoded
    size = sizeof (name);                                   //size of message
    
        
        
        
    for (int i = 0; i < size; i++){
    
        
        switch(name[i]) {
    
       case  'Q': name[i]  = 'A';
       break;
       
       case  'W': name[i]  = 'B';
       break;
       
       case  'E': name[i]  = 'C';
       break;
       
       case  'R': name[i]  = 'D';
       break;
       
       case  'T': name[i]  = 'E';
       break;
       
       case 'Y': name[i]  = 'F';
       break;
       
       case  'U': name[i]  = 'G';
       break;
       
       case  'I': name[i]  = 'H';
       break;
       
       case  'O': name[i]  = 'I';
       break;
       
       case  'P': name[i]  = 'J';
       break;
       
       case  'A': name[i]  = 'K';
       break;
       
       case  'S': name[i]  = 'L';
       break;
       
       case  'D': name[i]  = 'M';
       break;
       
       case  'F': name[i]  = 'N';
       break;
       
       case  'G': name[i]  = 'O';
       break;
       
       case  'H': name[i]  = 'P';
       break;
       
       case  'J': name[i]  = 'Q';
       break;
       
       case  'K': name[i]  = 'R';
       break;
       
       case  'L': name[i]  = 'S';
       break;
       
       case  'Z': name[i]  = 'T';
       break;
       
       case  'X': name[i]  = 'U';
       break;
       
       case  'C': name[i]  = 'V';
       break;
       
       case 'V': name[i]  = 'W';
       break;
       
       case  'B': name[i]  = 'X';
       break;
       
       case 'N': name[i]  = 'Y';
       break;
       
       case 'M': name[i]  = 'Z';
       break;
        }
    printf ("%c ", name[i]);
    }

printf ("\n");
return 0;

}    
    

if (menu == 5)
    {
      
printf("404 not found");
    
}
  
 
if (menu == 6)
    {
      
printf("404 not found");
    
}
  
if (menu == 7)
    {
      
printf
	("Thank you have a nice day \nProgran will self destruct in 5 seconds \n5\n4\n3\n2\n1\nfzzt (insert puff of smoke) ");
    
}

return 0;

}


 




