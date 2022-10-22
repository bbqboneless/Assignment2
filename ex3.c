#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LINE_LEN 80

int main(){
	char line_buf[LINE_LEN];
	while(fgets(line_buf,LINE_LEN,stdin) != NULL){
		char *ptr = strchr(line_buf,'\n');
		if(ptr){
			*ptr = '\0';
		}
		for(int i = 0;i < strlen(line_buf);i++){
			if(islower(line_buf[i])){
				line_buf[i] = toupper(line_buf[i]);
			} else{
				line_buf[i] = tolower(line_buf[i]);
			}
		}
		puts(line_buf);
	}
}
