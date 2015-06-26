#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	
	while(cin>>a)
	{
		vector<int> container;
		int p2 = 0;
		while(a%2 == 0)
		{
			p2++;
			a = a/2;
			container.push_back(2);
			
		}
		
		for(int i = 3; i<1000000; i=i+2)
		{
			if(a%i ==0)
			{
				container.push_back(i);
				a = a/i;
				i = i-2;
			}
			
		}

		// for(int i = 0; i<container.size();i++)
		// {
		// 	cout<<container[i]<<" ";
		// }
		// cout<<endl;



		int power = 1;
		cout<<container[0];
		for(int i = 1; i<container.size();i++)
		{

			if(container[i] == container[i-1])
			{
				power++;
			}
			else
			{
				if(power == 1)
				{
					cout<<" * "<<container[i];
					power = 1;
				}else
				{
					cout<<"^"<<power<<" * "<<container[i];
					power = 1;

				}

			}

			if(container[i] == container[i-1] && i == container.size()-1)
			{
				cout<<"^"<<power;
				power = 1;
			}



			

		
		}
		cout<<endl;

		
		
	}

	
	


}