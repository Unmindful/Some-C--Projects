#include <iostream>

using namespace std;

class number
{
int number1,number2,dj;

public:
	void getdata(void);
	void display(void);
};
void number :: getdata(void)
{
cout<<"Enter number1:";
cin>>number1;
cout<<"Enter number2:";
cin>>number2;
}

void number :: display(void)
{
	if (number1<number2)
	{
	cout<<number2<<":"<<"Number is larger";
	}
	else if (number2<number1)
	{
	cout<<number1<<":"<<"Number is larger";
	}
	else
	{
cout<<"Both numbers are equal";
	}
cin>>dj;	
}

int main()
{
number p;
p.getdata();
p.display();
return 0;
}