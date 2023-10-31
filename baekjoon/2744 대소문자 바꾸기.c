	#include <stdio.h>
	#include <string.h>

	
	int main()
	{
	
		char ch[101] = { 0, };
		int num = 0;

		scanf("%s", ch);

		for (int i = 0; i < strlen(ch); i++) {

			if (ch[i] >= 97 && ch[i] <= 122) {
				ch[i] -= 32;
			}
			else if (ch[i] >= 65 && ch[i] <= 90) {
				ch[i] += 32;

			}
		}
		
		for (int i = 0; i < strlen(ch); i++) {
			printf("%c", ch[i]);
		}

		return 0;
	}