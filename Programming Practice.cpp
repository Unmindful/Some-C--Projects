//1. Programming Practice-Monkey Smile
#include<iostream>

using namespace std;

int main()
{
int a,b;
cout<<"Enter 1 if 1st monkey is smiling otherwise enter 0:";
cin>>a;
cout<<"Enter 1 if 2nd monkey is smiling otherwise enter 0:";
cin>>b;
if((a^b)==0)
{
cout<<"\nTRUE";
}
else
{
cout<<"\nFALSE";
}
system("pause");
return 0;
}

//2. Return Summation

#include <iostream>

using namespace std;

int main()
{
int a,b,sum,sum1;
cout<<"Enter 1st number:";
cin>>a;
cout<<"\nEnter 2nd number:";
cin>>b;
if(a==b)
{
sum=a+b;
sum1=sum*2;
cout<<"\nDouble of sum:"<<sum1;
}
else
{
	sum=a+b;
	cout<<"\nSum:"<<sum;
}
return 0;
}

//3. Return Summation-Program-2

#include <iostream>

using namespace std;

int main()
{
int a,b,sum;
cout<<"Enter 1st number:";
cin>>a;
cout<<"\nEnter 2nd number:";
cin>>b;
sum=a+b;
if(a==10)
{
cout<<"\nTRUE";
}
else if (b==10)
{
cout<<"\nTRUE";
}
else if(sum==10)
{
cout<<"\nTRUE";
}
else 
{
cout<<"\nFALSE";
}
return 0;
}


//4. Programming on student data entry

#include<iostream>
#include<string>
using namespace std;

int main()
{
int a,b,n,age[100],dj;
string name[100];
cout<<"Enter number of students:\n";
cin>>n;
for (int i=1;i<=n;i++)
{
cout<<"\nEnter name:";
cin>>name[i];
cout<<"\nEnter age:";
cin>>age[i];
}
cout<<"\nName"<<"                       "<<"age";
for (int i=1;i<=n;i++)
{
cout<<"\n"<<name[i]<<"                   "<<age[i];
}
cin>>dj;
return 0;
}

//5. Summation

#include<iostream>

using namespace std;

int main()
{
int a[100],b,sum=0,dj;
cout<<"Enter numbers and press negative number to show addition:\n";
for (int i=1;i<=100;i++)
{
	cin>>a[i];
	if(a[i]>=0)
	{
	sum=sum+a[i];
	}
if(a[i]<0)
{
	break;
}
}

cout<<"\nTotal summation is:"<<sum;
cin>>dj;
return 0;
}

