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

	a=a xor b;
	b=b xor a;
	a=a xor b;	
	
	cout <<"Felcserélés után: " << a<<" és "<<b<<".\n";
}
