#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,count=0;;
		scanf("%d",&N);
		int M[N][N];
		for(int r=0;r<N;r++)
		{
			for(int c=0;c<N;c++)
			{
				scanf("%d",&M[r][c]);
			}
		}
		for(int i=0;i<N;++i)
		{
			for(int j=0;j<N;++j)
			{
				for(int x=i;x<N;++x)
				{
					for(int y=j;y<N;++y)
					{
						if(M[i][j]>M[x][y]){count++;}

					}
				}
			}
		}
		printf("%d\n",count);
	}
}
