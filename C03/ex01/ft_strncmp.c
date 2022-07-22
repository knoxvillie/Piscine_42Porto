#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void){
    char s1[100] = "hello world", s2[100] = "hellO world", s3[100] = "hello world";
    
    printf("%d\n", ft_strncmp(s1, s2, 6));
    printf("%d\n", ft_strncmp(s1, s3, 100));
    printf("%d\n", ft_strncmp(s1, s3, 200));
    return 0;
}

int ft_strncmp(char *s1, char *s2, unsigned int n){

    unsigned int i;

    for(i=0; i<n && (s1[i] && s2[i]); i++){
        if(s1[i] < s2[i]){
            return -1;
        }
        else if(s1[i] > s2[i]){
            return 1;
        }
    }
    return 0;
}