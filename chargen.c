#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int getchar(){
	srand(time(NULL));
	return '~'-rand()%105;
}
void main(){
	printf("%c\n",getchar());
}
