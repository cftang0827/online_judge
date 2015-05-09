#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	//cout<<"aaaaaaa"<<endl;
	int size = sqrt(2147483647);
	bool* table = new bool[size];
	/*
	for(int i=3;i<size;i=i+2)
	{	
		table[i] = true;
	}*/
	//cout<<"bb"<<endl;
	table[0] = false;
	table[1] = false;
	table[2] = true;
	table[3] = true;
	
	for(int i=3;i<size;i=i+2)
	{
		table[i] = true;
		if(table[i])
		{
			//cout<<"aa"<<endl;
			for(int  j = i*i; j< size ; j = j+ 2*i)
			{
				table[j] = false;
			}
		}
		
	}
	//cout<<"cc"<<endl;
	int  inp;
	while(cin>>inp)
	{
		if(inp%2 ==0 && inp !=2)
		{
			cout<<"獶借计"<<endl;
		}
		else if(inp ==2)
		{
			cout<<"借计"<<endl;
		}
		else if(inp<size && inp%2!=0)
		{
			if(table[inp])
			{
				cout<<"借计"<<endl;
			}
			else{
				cout<<"獶借计"<<endl;
			}
		}else if(inp>=size &&inp%2!=0)
		{
			bool flag = true;
			for(int i=0;i<sqrt(inp);i++)
			{
				if(table[i])
				{
					if(inp % i ==0)
					{
						flag = false;
						break;
					}
				}
			}
	
			if(flag)
			{
				cout<<"借计"<<endl;
			}else{
				cout<<"獶借计"<<endl;
			}
		}
		/*
		if(table[inp-1])
			cout<<"借计"<<endl;
		else 
			cout<<"獶借计"<<endl;
		*/
	}
	
	//delete [] table;
}