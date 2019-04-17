#include <stdio.h>

//encryption(char name[], int key);

int main(){

char name[25] = {'D', 'O', 'U', 'G', 'L', 'a', 'S'};

int key;
char encription[7];
int size = 7;

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


return 0;
}