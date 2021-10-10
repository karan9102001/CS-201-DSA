#include<stdio.h>

int identify_break(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='@'){
            return i;
        }
    }
}
int check_recipient(char str[], int num){
    if(num==0){
        return 0;
    }
    int check=0;
    if((str[0]>=48 && str[0]<=57)||(str[0]>=65 && str[0]<=90)||(str[0]>=97 && str[0]<=122)){
    for(int i=1; i<num; i++){
        if((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)||str[i]=='!' ||str[i]=='#' ||str[i]=='$' ||str[i]=='%' ||str[i]=='&' ||str[i]=='*' || str[i]=='+' || str[i]=='-' || str[i]=='/' || str[i]=='=' || str[i]=='?' || str[i]=='^' || str[i]=='_' || str[i]=='{' || str[i]=='|'|| str[i]=='.'){
            check++;
        }
        else return 0;
    }
    }
    if(check==num-1){
        return 1;
    }
    else{
        return 0;
    }
}
int check_domain(char str[], int num){
    int check;
    if(str[num+1]=='\0'){
        return 0;
    }
    for(int i= num+1; str[i]!='\0'; i++){
        if((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)||str[i]=='-'||str[i]=='.'){
        if(str[i]=='.'){
           if(str[i+1]!='.' || str[i+1]!='\0'){
               return 1;
           } 
        }
        }
        else{
            return 0;
        }
    }
    

}
int main(){
    printf("Enter the e-mail id: \n");
    char str[1000];
    scanf("%s", &str);
    int num= identify_break(str);
    if(check_recipient(str, num)==1 && check_domain(str, num)==1){
        printf("Valid \n");
    }
    else{
        printf("invalid \n");
    }
    return 0;
}