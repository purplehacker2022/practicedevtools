#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&x,&y);
        if(x<=y*10)
        printf("NO\n");
        else 
        printf("YES\n");
	    
	}
	return 0;
}

