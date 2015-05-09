#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int i =0;
	int j =0;
	
	int c =1;
	char ar[102][102];
	float number[102][102]={};
	
	while(scanf("%d %d", &i, &j) == 2 && i && j)
	{
		if (c != 1) printf("\n"); 
		
		//if (c != 1) printf("\n"); 
		//if (i ==0&&j ==0)
		//continue;
		
		for (int o = 0; o < i; o ++)
            scanf("%s", ar[o]);
		//cout<<endl;
		//cout<<"Field #"<<c<<":"<<endl;
	
		
		for (int m=0;m<i;m++)
		{
			for (int n=0;n<j;n++)
			{
				if (ar[m][n] == '*') continue;
				else
				{
					int count =0;
				
				if (m!=0&&n!=0&&ar[m-1][n-1] =='*') count++;
				if (m!=0&&ar[m-1][n] =='*') count++;
				
				if (m!=0&&n!=j-1&&ar[m-1][n+1] =='*') count++;
				if (n!=j-1&&ar[m][n+1] =='*') count++;
				if (m!=i-1&&n!=j-1&&ar[m+1][n+1] =='*') count++;
				if (m!=i-1&&ar[m+1][n] =='*') count++;
				if (m!=i-1&&n!=0&&ar[m+1][n-1] =='*') count++;
				if (n!=0&&ar[m][n-1] =='*') count++;
				
				ar[m][n] = count+'0';

				
			    }
			}
		}
		printf("Field #%d:\n", c ++);
		
		
		for (int u = 0; u < i; u ++)
            printf("%s\n", ar[u]);
        
		
		
		//cout<<endl;
		
		
		//number[102][102]= {0};
	

	
	}

return 0;

}