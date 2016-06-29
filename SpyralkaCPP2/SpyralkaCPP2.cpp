#include "SpyralkaCPP2.h"

void main()
{
	int a=0;
	//long long int a=1;
	while(1==1)
	{
	cout<<"Size spyral'ky: ";
	cin>>a;
	//printq(a);
	printspyralka(a);
	cout<<"Continue?Y/N";
	char b;
	cin>>b;
	if(b=='N')
		break;
	}
}