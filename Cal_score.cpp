#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sc;
	cout<<"Input C++ Score : " ;
	cin >>sc;
	cout<<((sc>=50)?"You pass with score "  :"You fail with score " )<< sc <<endl;

	system("pause");
	return(0);
}
