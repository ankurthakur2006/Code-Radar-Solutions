#include <stdio.h>


int main() {
    char x[100],z[100];
    int y;
    scanf("%s %d",&x,&y);
    scanf("%s",&z);
    printf("Name: %s\nAge: %d\nHobby : %s",x,y,z);
    return 0;
}