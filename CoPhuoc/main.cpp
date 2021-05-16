#include <string.h>
#include <stdio.h>
#include <iostream>
//
using namespace std;

void layHo(char* input){
	int i;
    char *p;

    	p = strtok(input, " ");
	printf("%s\n", p);
}

 int main(void)
 {	
 	char input[32];
 	cin>>input;
    layHo(input);
    return 0;
 }
 
 
