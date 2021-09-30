/* Name- Karan Medhi
Scholar id: 2012031
CS201 mini-project to find nth fibonacci number*/


#include<stdio.h>

//creating a function to add two strings and storing in the third
void sum(char num1[], char num2[], char fibnum[]){
    int carry= 0;
    
    for(int l=4500-1; l>=0; l--){
        int k= (num1[l]-'0') + (num2[l]-'0') + carry;
        fibnum[l]= (k%10) + '0';
        carry=((num1[l]-'0')+(num2[l]-'0')+carry)/10;
    }
}

//creating a function to copy one string to another
void shift(char num1[], char num2[]){
    for(int l=4500-1; l>=0; l--){
        num1[l]=num2[l];
    }
}

int main(){

    //taking input of the value of n to find nth fibonacci number
    int b;
    printf("This program is to find nth number in the fibonacci serie \n Enter the value of n: \n");
    scanf("%d", &b);

    char num1[4500], num2[4500], fibnum[4500];   
    for(int i=0; i<4500; i++){
        num1[i]=num2[i]=fibnum[i]='0';
    }

    num2[4500-1]='1';

    printf("The value of %dth fibonacci number is: \n", b);
    if(b==0 || b==1){
        printf("%d", b);
    }

    else{
            for(int i=2; i<=b; i++){
            sum(num1, num2, fibnum);
            shift(num1, num2);
            shift(num2, fibnum);
        }

        int firstdigit=0;

        for(int i=0; i<4500; i++){
            if(firstdigit==0 && fibnum[i]=='0'){
                continue;
            }

            else if(firstdigit==0 && fibnum[i]!='0'){
                firstdigit=1;
            }

            printf("%c", fibnum[i]);
        }
    }
    return 0;
}  



