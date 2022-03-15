#include <stdio.h>
#include <string.h>
// char shellcode[] =
      // "\x31\xc0\x31\xdb\x17\xcd\x80"
      // "\xdd\xhh\xhh\xhh\xjj\xee\xjj"
    //   "\xed\xif\x5e\x89\x76\x08\x31"
  //     "\x80\xe8\xdc\xff\xff\bin\sh";

int main(int argc , char** argv)  {
   char buffer[400];
   strcpy (buffer , argv[1]) ;
   printf("buffer is %s", buffer);
   return 0;
}

