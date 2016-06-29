#include <iostream>
using namespace std;


void printq(int a)
{
	cout<<a+a;
}
void printspyralka(int StoronaKvadrata)
{
	char massive[999][999];
	/*char **massive= new char*[StoronaKvadrata];
	for (int count = 0; count < StoronaKvadrata; count++)
        massive[count] = new char [StoronaKvadrata];*/
	for(int i=0;i<StoronaKvadrata;i++)
		for(int j=0;j<StoronaKvadrata;j++)
		{
			massive[i][j]=' ';
		}
	for(int i=0;i<StoronaKvadrata;i++)
	{
		massive[0][i] = '0';
		massive[i][StoronaKvadrata-1] = '0';
		massive[StoronaKvadrata-1][i]='0';
	}
	bool check = false;
	int index = 3;
	int NomerKruga=0;
	while(!check)
	{
		if(index==3)
		{
			int counter=0;
			int i=StoronaKvadrata-1-NomerKruga*2;
			while(massive[i-1][NomerKruga*2]!='0')
			{
				massive[i][NomerKruga*2]='0';
				i--;
				counter++;
			}
			if(counter==2)
			{
				break;
			}
			index=0;
			NomerKruga++;
		}
		else if(index==0)
		{
			int counter=0;
			int i=NomerKruga*2-2;
			while(massive[NomerKruga*2][i+1]!='0')
			{
				massive[NomerKruga*2][i]='0';
				i++;
				counter++;
			}
			if(counter==3)
				break;
			index++;
		}
		else if(index==1)
		{
			int counter=0;
			int i=NomerKruga*2;
			while(massive[i+1][NomerKruga*2]!='0')
			{
				massive[i][StoronaKvadrata-NomerKruga*2-1]='0';
				i++;
				counter++;
			}
			if(counter==2)
			{
				break;
			}
			index++;
		}
		else
		{
			int counter=0;
			int i=StoronaKvadrata-NomerKruga*2-1;
			while(massive[StoronaKvadrata-NomerKruga*2-1][i-1]!='0')
			{
				massive[StoronaKvadrata-NomerKruga*2-1][i]='0';
				i--;
				counter++;
			}
			index++;
			if(counter==3)
				break;
		}
		
	}
	for(int i=0;i<StoronaKvadrata;i++)
	{
		for(int j=0;j<StoronaKvadrata;j++)
		{
			cout<<massive[i][j];
		}
		cout<<"\n";
	}
	/*for (int count = 0; count < StoronaKvadrata; count++)
        delete [] massive[count];*/

}