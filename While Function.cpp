//Program-1

#include<iostream>

using namespace std;

int main()
{
int number=0,dj;
cout<<"Finding odd and even numbers~";
cout<<"\nEnter numbers:";
cin>>number;
for(int i=1;i<=number;i++)
{
	if(i%2==0)
	{
		cout<<i<<":is even\n";
	}
	else
	{
	cout<<i<<"is odd\n";
	}
}
cin>>dj;
return 0;

}

//Program-2

#include<iostream>

using namespace std;

int main()
{
int age=0,totalage=0,totalperson=0;
cout<<"Enter age or -1 to quit::";
cin>>age;
while(age!=-1)
{
totalage=totalage+age;
totalperson=totalperson+1;
cout<<"Enter age or -1 to quit::";
cin>>age;
}
cout<<"Total Person::"<<totalperson<<endl;
cout<<"Total age::"<<totalage<<endl;
system("pause");
return 0;
}