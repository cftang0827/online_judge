#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;



int main()
{
	string input1 ;
	char input[400] ;
	char output[400];
	
	int ascii_input[400];
	int ascii_output[400];
	while(cin>>input1)
	{
		
		strcpy(input,input1.c_str());
		
		for (int i=0;i<400;i++)
		{
			if (input[i] == '\0')
			break;
			ascii_input[i] = int(input[i])-7;
			output[i] = char(ascii_input[i]);
			cout<<output[i];
			
			
			
		}
		cout<<endl;
	}
	
	//system("PAUSE");


}