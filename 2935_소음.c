#include <stdio.h>
#include <string.h>
int main()
{
    char a[101]={NULL}, b[101]={NULL}, op;
    scanf("%s %c %s", a, &op, b);
    int len_a=strlen(a), len_b=strlen(b);
    
    if(op == '*') {
    	printf("1");
    	int i;
    	for(i=0; i<len_a+len_b-2; i++)
    		printf("0");
	}
    else {
    	if(strcmp(a, b)==0) {
    		printf("2");
    		int i;
    		for(i=0; i<len_a-1; i++)
    			printf("0");
		}
    	else {
    		int i;
    		printf("1");
    		for(i=0; i<(len_a > len_b ? len_a-len_b : len_b-len_a)-1; i++)
    			printf("0");
    		printf("1");
    		for(i=0; i<(len_a > len_b ? len_b : len_a)-1; i++)
    			printf("0");
		}
	}
    return 0;
}
