#include<stdio.h>

int main () {
    int small=0,capital=0,Digit=0,space=0,special=0;
    char a[30];
    gets(a);

    for(int i=0;a[i];i++) {
        if(a[i]>='a' && a[i]<='z'){
            small++;
        }else if(a[i]>='A' && a[i]<='Z'){
            capital++;
        }else if(a[i]>='0' && a[i]<='9'){
            Digit++;
        }else if(a[i]==' '){
            space++;
        }else {
            special++;
        }
    }
    printf("The small characters are %d\n",small);
    printf("The capital characters are %d\n",capital);
    printf("The number of digits are %d\n",Digit);
    printf("The number of spaces is  %d\n",space);
    printf("The special characters are  %d\n",special);

    return 0;

}