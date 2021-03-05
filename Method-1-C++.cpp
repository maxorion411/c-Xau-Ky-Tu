#include <stdio.h>
#include <string.h>

void chuanHoa( char str[] ){
	while(str[0] == ' ') strcpy(&str[0], &str[1]);
	
	for(int i = 0; i< strlen(str) - 1; i++)
	    if(str[i] == ' ' && str[i+1] == ' ')
		{
			strcpy( &str[i], &str[i+1] );
			i--;
		}
	while(str[strlen(str) - 1] == ' ')
		strcpy(&str[strlen(str) - 1], &str[strlen(str)]); 
}

int main(){
	char str[200];
	gets( str );
	chuanHoa( str );
	printf("KQ: \"%s\"", str);
	return 0;
}
