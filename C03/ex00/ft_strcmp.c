#include<stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void){
    char s1[100] = {"abcd123"}, s2[100] = {"abCd123"}, s3[100] = {"abcd123"};
    
    printf("%d\n", ft_strcmp(s1, s2));
    printf("%d", ft_strcmp(s1, s3));
    return 0;
}

int ft_strcmp(char *s1, char *s2){
    unsigned int i;

    for(i=0; s1[i] && s2[i]; i++){
       if(s1[i]>s2[i]){
        return 1;
       } 
       else if(s1[i]<s2[i]){
        return -1;
       }
    }
    return 0;
}