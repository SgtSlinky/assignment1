#include <stdio.h>

//encryption(char name[], int key);

int main(){

char name[25] = {'d', 'o', 'u', 'g', 'l', 'a', 's'};

int key = 1;
char encription[7];
int size = 7;


//char name[] = char name
for(int i=0; i<size; i++){
    
    encription[i] = name[i] - key;
    
    
    if(encription[i] < 97){
       encription[i] = 122; //- (key--);
    }  
    
    printf("%c ", encription[i]);
    


}



return 0;
}