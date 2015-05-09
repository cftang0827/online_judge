#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int size = sqrt(2147483647);
	bool* table = new bool[size];

	for(int i=0; i<size;i++)
	{
		table[i] = true;
	}
	
	table[0] = false;
	table[1] = false;
	table[2] = true;
	table[3] = true;
	table[4] = false;
	table[5] = true;
	table[6] = false;
	table[7] = true;
	
	
	
	for(int i=7;i<size;i=i+6)
	{
		if(table[i])
		{
			for(int j = 2*i; j<size ; j = j+i)
			{
				table[j] = false;
			}
		}
	}
	
	
	for(int i=11;i<size;i=i+6)
	{
		if(table[i])
		{
			for(int j = 2*i; j<size ; j = j+i)
			{
				table[j] = false;
			}
		}
	}
	
	
	//cout<<"cc"<<endl;
	int  inp;
	while(cin>>inp)
	{
		if(inp <6)
		{
			if(table[inp])
			{
				cout<<"借计"<<endl;
			}
			else 
			{
				cout<<"獶借计"<<endl;
			}
		}
		else if(inp >=6 && inp <size)
		{
			if(inp%2 == 0)
			{
				cout<<"獶借计"<<endl;
			}
			else if(inp % 6 == 1 || inp%6 == 5)
			{
				if(table[inp])
				{
					cout<<"借计"<<endl;
				}
				else 
				{
					cout<<"獶借计"<<endl;
				}
			}
			else if(inp % 6 == 2 || inp % 6 ==3 || inp% 6 ==4)
			{
				if(table[inp])
				{
					cout<<"借计"<<endl;
				}
				else 
				{
					cout<<"獶借计"<<endl;
				}
			}
		}			
	}
}