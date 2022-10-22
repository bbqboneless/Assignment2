#include <stdio.h>
#include <string.h>
#define LINE_LEN 80

int main(){
	char line_buf[LINE_LEN];
	
	while(fgets(line_buf,LINE_LEN,stdin) != NULL){
		char *ptr = strchr(line_buf,'\n');
		if(ptr){
			*ptr = '\0';
		}
		puts(line_buf);
	}
}
