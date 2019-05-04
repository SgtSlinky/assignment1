#include <stdio.h>

//encryption(char name[], int key);

int main(){
    int size;
int menu;
                                                                            // Menu options
printf("1.Encryption of a message with a rotation cipher\n");
printf("2.Decryption of a message encrypted with a rotation cipher\n");
printf("3.Encryption of a message with a substitution cipher given message text and alphabet substitution\n");
printf("4.Decryption of a message encrypted with a substitution cipher given cipher text and substitutions\n");
printf("5.Decryption of a message encrypted with a rotation cipher given cipher text only\n");
printf("6.Decryption of a message encrypted with a substitution cipher given cipher text only\n");
printf("7.Quit\n\n");

printf("Select program to run ");
scanf("%d",&menu);


if (menu == 1){    
                                                                            //menu option 1 encription with rotation cipher of users choice
    char name[] = "Attack At Dawn!";
    size = sizeof(name); 
    //printf("size of test array is: %d", size);
    
    int key;
    char encription[size];
    
    
                printf("Enter the key ");
                scanf("%d",&key);
                    while(key <-25 || key>25){
                        printf("Key must be between -25 and 25. Enter a new key ");
                        scanf("%d",&key);
                    }
                
                
                //char name[] = char name
                for(int i=0; i<size; i++){
                    
                    if(name[i] >= 97 && name[i] <= 122){
                    name[i] = name[i] - 32;
                    }
                    if((name[i] >=0 && name[i]<=64) || (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123 )){
                        encription[i] = name[i];
                    }
                    else{
                    encription[i] = name[i] + key;
                    
                        if(encription[i] > 90){
                        encription[i] = 65 + (encription[i] - 91);
                    //   printf("%c ", encription[i]);
                    }  
                }
                
                    printf("%c ", encription[i]);
        
    
    
    }
     printf("\n");
  }  
if (menu == 2){
                                                            //menu option 2 decription 
    char name[] = "IBBIKS IB LIEV!";
                                                            //IBBIKS IB LIEV!
    int key;
    char encription[size];
    
    
                printf("Enter the key ");
                scanf("%d",&key);
                    while(key <-25 || key>25){
                        printf("Key must be between -25 and 25. Enter a new key ");
                        scanf("%d",&key);
                    }
                
                
                
                for(int i=0; i<size; i++){
                    
                    if(name[i] >= 97 && name[i] <= 122){
                    name[i] = name[i] - 32;
                    }
                    if((name[i] >=0 && name[i]<=64) || (name[i] >= 91 && name[i] <= 96) || (name[i] >= 123 )){
                        encription[i] = name[i];
                    }
                    else{
                    encription[i] = name[i] - key;
                    
                        if(encription[i] < 65){
                            encription[i] = 91 - 65 + (encription[i]);      //if(encription[i] > 90)
                            //printf("%d ", encription[i]);                                                //encription[i] = 65 + (encription[i] - 91);
                            
                        }
                             
                }
                
                    printf("%c ", encription[i]);
        
    
    
    }
     printf("\n");
    
}

if (menu == 3){
    ;
}

if (menu == 4){
    ;
}

if (menu == 5){
    ;
}

if (menu == 6){
    ;
}
if (menu == 7){
    printf("Thank you have a nice day \nProgran will self destruct in 5 seconds \n5\n4\n3\n2\n1\nfzzt (insert puff of smoke) ");
}





    return 0;
    }
    
    
