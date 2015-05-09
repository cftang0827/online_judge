#include <iostream>



using namespace std;

int main()
{
	int b1=0,b2=0,b3=0;
	int g1=0,g2=0,g3=0;
	int c1=0,c2=0,c3=0;
	int BCG=0,BGC=0,CBG=0,GBC=0,CGB=0,GCB=0;
	int max=0;
	
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
	{
		BCG = b2+b3+c1+c3+g1+g2;
		BGC = b2+b3+g1+g3+c1+c2;
		CBG = c2+c3+b1+b3+g1+g2;
		GBC = g2+g3+b1+b3+c1+c2;
		CGB = c2+c3+g1+g3+b1+b2;
		GCB = g2+g3+c1+c3+b1+b2;
		
		if (BGC > BCG)
		max = BGC;
		else 
		max = BCG;
		
		if (CBG > max)
		max = CBG;
		
		if (CGB > max)
		max = CGB;
		
		if (GBC > max)
		max = GBC;
		
		if (GCB > max)
		max = GCB;
		
		

	}
    
	
	system("PAUSE");






}