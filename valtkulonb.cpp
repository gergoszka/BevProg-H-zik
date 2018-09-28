#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
	int a =7;
	int b =1;

	cout << "Számok felcserélés előtt: "<< a <<" és "<< b <<".\n";

	a = a+b;
	b = a-b;
	a = a-b;	
	
	cout <<"Felcserélés után: " << a<<" és "<<b<<".\n";
}
