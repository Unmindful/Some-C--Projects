//1. Find element "9" in the array.

#include<iostream>

using namespace std;

int main()
{
int a[100],dj,n;
cout<<"Enter the number of element in array:";
cin>>n;
cout<<"\nEnter elements in array:\n";
for (int i=0;i<=n-1;i++)
{
	cin>>a[i];
}
for (int i=0;i<=n-1;i++)
{
if(a[i]==9)
{
cout<<"\nTRUE";
return 0;
}
}
cout<<"\nFALSE";
system("pause");
return 0;
}

//2. Find age of teen

#include<iostream>

using namespace std;

int main()
{
int a,b,c,n,dj;
cout<<"Enter three teen values:\n";
cin>>a;
cin>>b;
cin>>c;
if (13<=a&&a<=19)
{
cout<<"\nTRUE";
return 0;
}
if (13<=b&&b<=19)
{
cout<<"\nTRUE";
return 0;
}
if (13<=c&&c<=19)
{
cout<<"\nTRUE";
return 0;
}
cout<<"\nFALSE";
system("pause");
return 0;
}

//3. Mod of two integers

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
int a,b,c,d,dj;
cout<<"Enter two integer value:\n";
cin>>a;
cin>>b;
c=a%10;
d=b%10;
if(c==d)
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

//4. Logical program of array

int main()
{
int a[100],b,c,d,dj,n;
cout<<"Enter the element number in array:\n";
cin>>n;
cout<<"\nEnter elements:\n";
for (int i=0;i<=n-1;i++)
{
cin>>a[i];
}
for(int i=0;i<=n-1;i++)
{
	if(a[i]==1)
	{
b=1;	
		break;
	}
}
for (int i=0;i<=n-1;i++)
{
if(a[i]==2)
{
	c=2;
	break;
}
}
for (int i=0;i<=n-1;i++)
{
if(a[i]==3)
{
	d=3;
	break;
}
}
if(b==1&&c==2&&d==3)
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

//5. Logical program using array:

#include<iostream>

using namespace std;

int main()
{
int dj,a[100],n;
cout<<"Enter number of elements in the array:\n";
cin>>n;
cout<<"\nEnter elements:\n";
for (int i=0;i<=n-1;i++)
{
cin>>a[i];
}
if (a[0]==6)
{
cout<<"\nTRUE";
}
else if(a[n-1]==6)
{
cout<<"\nTRUE";
}
else 
{
cout<<"\nFALSE";
}
return 0;
system("pause");
}

//6. Logical porgram of array

#include<iostream>

using namespace std;

int main()
{
int dj,a,b,c,d;
cout<<"Enter two integer values:\n";
cin>>a;
cin>>b;
c=abs(a-10);
d=abs(b-10);
cout<<"The result will be:\n";
if(c>d)
{
cout<<b;
}
else if (d>c)
{
cout<<a;
}
else if(c==d)
{
cout<<"0";
}

system("pause");
return 0;
}

//7. Logical program of array

#include<iostream>

using namespace std;

int main()
{
int a[100],n,dj;
cout<<"Enter the elements number in the array:\n";
cin>>n;
cout<<"The elements are:\n";
for (int i=0;i<=n-1;i++)
{
cin>>a[i];
}
for (int i=0;i<=n-1;i++)
{
if(a[i]==1)
{
for (int i=0;i<=n-1;i++)
{
if(a[i]==2)
{
for (int i=0;i<=n-1;i++)
{
if (a[i]==3)
{
cout<<"\nTRUE";
return 0;
}
}
}
}
}
}
cout<<"\nFALSE";
system("pause");
return 0;
}

//8. Object oriented programming with array

#include<iostream>
#include<string>

using namespace std;

class input
{
private:
	int a[100],n,i;
public:
	void getdata();
	int function();
};

void input::getdata()
{
cout<<"Enter the number of elements::";
cin>>n;
cout<<"Enter the elements::"<<endl;
for (i=0;i<=n-1;i++)
{
cin>>a[i];
}
}

int input::function()
{
for (i=0;i<=n-2;i++)
{
if(i==0)
{	
if (a[i]==100&&a[i+1]==100)
{
cout<<"TRUE"<<endl;
return 0;
}
}
if (a[i]==100&&a[i+1]==100|a[i]==100&&a[i-1]==100)
{
cout<<"TRUE"<<endl;
return 0;
}
}
cout<<"FALSE"<<endl;
}

int main()
{
input p;
p.getdata();
p.function();
system("pause");
return 0;
}

//9. Logical Program with array

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
int a[100],n;
cout<<"Enter the number of elements::";
cin>>n;
cout<<"The elements are(in increasing manner)::"<<endl;
for (int i=0;i<=n-1;i++)
{
cin>>a[i];
}
for (int i=0;i<=n-2;i++)
{
if (i==0)
{
if (a[i+1]-a[i]<=2&&a[i+2]-a[i]<=2&&a[i+2]-a[i+1]<=2)
{
cout<<"TRUE"<<endl;
system("pause");
return 0;
}
else
{
if (a[i+1]-a[i]<=2&&a[i+2]-a[i]<=2&&a[i+2]-a[i+1]<=2)
{
cout<<"TRUE"<<endl;
system("pause");
return 0;
}
}
}
}
cout<<"FALSE"<<endl;
system("pause");
return 0;
}