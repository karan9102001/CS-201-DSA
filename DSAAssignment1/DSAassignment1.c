#include<stdio.h>

int validfloat(char str[], int b){
    int c=0;
    for(int i=0; i<b; i++){
        if(str[i]=='.'&& str[i+1]!='\0'){
            if(c==0){
                c=1;
            }
            else{
                return 0;
            }
        }
        if(str[i]<46||str[i]>57||str[i]==47){
            return 0;
        }
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int b;
    printf("Enter the length of the number: \n");
    scanf("%d", &b);
    char str[b+2];
    printf("Enter the number: \n");
    scanf("%s", &str);
    if(validfloat(str, b)==1){
        printf("valid");
    }
    else{
        printf("not valid");
    }
    return 0;
}