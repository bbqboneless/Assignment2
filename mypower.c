#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define LINELEN 10

int main(void) {
  char str[LINELEN],b[LINELEN],p[LINELEN];
  char delim[] = " ";
  char *ptr2,*ptr3,*ptr4;
  double base,power,result;
  fgets(str,LINELEN,stdin);
  //quitar el salto de línea
  char *ptr = strchr(str,'\n');
  if(ptr){
    *ptr = '\0';
  }
  //printf("String = %s\n",str);
  //dividir la string
  int length = strlen(str);
  if(length > 2){
    strtok_r(str," ",&ptr2);
    base = strtod(str,&ptr3);
    power = strtod(ptr2,&ptr4);
    result = pow(base,power);
    printf("%lf\n",result);
  } else{
    base = strtod(str,&ptr3);
    result = pow(base,2);
    printf("%lf\n",result);
    }
}
