#include <stdio.h>

int main() 
{
    int x;
    float y;
	scanf("%d%f",&x,&y);
    if(y>=x+0.50){
	    if(x%5!=0){
	    printf("%.2f",y);
	}else{
	    y=y - x - 0.50;
	    printf("%.2f",y);
	}
}
else{
    printf("%.2f",y);
}

	return 0;
}

