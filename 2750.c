#include <stdio.h>

int main(void)
{
    int n, i;
    
    scanf("%d", &n);

    int temp;
 
    int input[1001];
 
    for (i = 0; i < n; i++) 
        scanf("%d", &input[i]);
        
    for(i = 0; i < n - 1; i++)
	{ 
        for (int j = i + 1; j < n; j++)
		{
            if (input[i] > input[j])
			{
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
 
    for (int i = 0; i < n; i++)
        printf("%d\n", input[i]); 
}