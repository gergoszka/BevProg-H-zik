#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
	int a=1;
	int szamlalo=0;
	
	while(a!=0)
	{	
		a=a<<1;
		++szamlalo;
	}
	
	cout <<"Egy gépi szó hossza: " <<szamlalo <<"\n"; 
}
