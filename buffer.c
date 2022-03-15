//#include<stdio.h>
//
// int main(int argc , int* argv){
  //
//  int buffer[40] = argv;
  //printf("buffer is %d" , buffer);
//}
#include<stdio.h>
#include<string.h>
 int main(int argc , int* argv){

  int fbuffer[4]; 
  int *strncpy(argv, fbuffer);
  
  printf("buffer is %d" , &fbuffer);
}
