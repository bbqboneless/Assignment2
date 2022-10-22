#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define LINELEN 80

int main(){
  char str1[LINELEN], str2[LINELEN];
  printf("Str1: ");
  fgets(str1,LINELEN,stdin);
  printf("Str2: ");
  fgets(str2,LINELEN,stdin);

  int length1,length2;
  length1 = strlen(str1);
  length2 = strlen(str2);

  if(length1 == length2){
    printf("0\n");
  } else if(length1 < length2){
    printf("-1\n");
  } else if(length1 > length2){
    printf("1\n");
  } else{
    printf("Error\n");
  }
}
