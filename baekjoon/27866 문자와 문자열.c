#include <stdio.h>
#include <string.h>
#define max 1001
	
	int main()
{
	
		char ch[max] = { 0, };
		int num;
		
		scanf("%s",ch);
		scanf("%d", &num);
		
		printf("%c", ch[num-1]);
		return 0;
	}