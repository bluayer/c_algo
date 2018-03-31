#include <stdio.h>
#include <string.h>

int main() {
	char n[12] =" ", temp;
	int i, j, length;

	gets(n);
	length = strlen(n);

	for(i = 0; i < length; i++)
  	{
		for(j = 0; j < length; j++)
    	{
			if(n[i] > n[j])
      		{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	puts(n);

	return 0;
}