#include <iostream>
#include <string>



using namespace std;

int main()
{
	int b1,b2,b3,g1,g2,g3,c1,c2,c3;
	int min;
	int BCG,BGC,CBG,GBC,CGB,GCB;
	
	
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
	{
		BCG = b2+b3+c1+c3+g1+g2;
		BGC = b2+b3+g1+g3+c1+c2;
		CBG = c2+c3+b1+b3+g1+g2;
		GBC = g2+g3+b1+b3+c1+c2;
		CGB = c2+c3+g1+g3+b1+b2;
		GCB = g2+g3+c1+c3+b1+b2;
		string max_name ;
		/*
		BCG=0;
		BGC=0;
		CBG=0;
		GBC=0;
		CGB=0;
		GCB=0;
		max=0;
	    string max_name = 0;
		*/
		if (BGC < BCG)
		{
			min = BGC;
			max_name = "BGC";
		}	
		else
        {		
			min = BCG;
			max_name = "BCG";
		}
		
		if (CBG < min)
		{
			min = CBG;
			max_name = "CBG";
		}
		if (CGB < min)
		{
			min = CGB;
			max_name = "CGB";
		}
		if (GBC < min)
		{
			min = GBC;
			max_name = "GBC";
		}
		if (GCB < min)
		{
			min = GCB;
			max_name = "GCB";
		}
		
        cout<<max_name<<" "<<min<<endl;
		
		BCG=0;
		BGC=0;
		CBG=0;
		GBC=0;
		CGB=0;
		GCB=0;
		min=0;
	    max_name = '\0';
		
		
	}
	
	
	
	
    
	
	






}