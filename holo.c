#include <stdio.h>
#include <string.h>

int greetings(char *temp1 , char *temp2){
          char name[412];
          strcpy(name , temp2);
          printf("Hello %s %s \n ", temp1 , temp2 );

}
int main(int agrc , char * argv[]) {
       greetings( argv[1] , argv[2]);
       printf("bye %s %s", argv[1] , argv[2]);


}
