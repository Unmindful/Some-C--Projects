//Programming on File
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream djFile;
djFile.open("dj.txt");
if(djFile.is_open())
{
cout<<"The file is open!!!!"<<endl;
}
else
{
cout<<"The file is not open!!!!"<<endl;
}
djFile<<"This is my first file creation by C++\n";
djFile.close();
system("pause");
return 0;
}

//2nd Program on File

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
ofstream djFile;
djFile.open("dj1.txt");
cout<<"Enter player id,name and money::"<<endl;
cout<<"Press ctrl+z to quit\n";
int playerid;
string name;
double money;

while (cin>>playerid>>name>>money)
{
djFile<<playerid<<"  "<<name<<"   " <<money<<endl;
}
djFile.close();
system("pause");
return 0;
}

//3rd program on File

//Enter the value from file to output screen to the C++ program//

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
ifstream djFile;
djFile.open("dj1.txt");
int id;
string name;
double money;
while(djFile>>id>>name>>money)
{
cout<<id<<"   "<<name<<"  "<<money<<endl;
}
system("pause");
return 0;
}

//4th program on File

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int getwhattheywant();
void displayItems(int x);

//main funciton

int main()
{
	int whattheywant;
	whattheywant=getwhattheywant();
	while(whattheywant!=4)
	{
	whattheywant=getwhattheywant();
	switch(whattheywant)
	{
		    case 1:
			displayItems(1);
			break;
			case 2:
			displayItems(2);
			break;
			case 3:
			displayItems(3);
			break;
	}
	}


	system("pause");
	return 0;
	
}

///prototype function//

int getwhattheywant()
{
int choice;
cout<<"1-Just plain items"<<endl;
cout<<"2-Helpful items"<<endl;
cout<<"3-Harmful palin items"<<endl;
cout<<"4-Quit Program\n"<<endl;
cin>>choice;
return choice;
}


//displayItems Fucntion

void displayItems(int x)
{
	ifstream objectFile;
	objectFile.open("objects.txt");
	string name;
	double power;
	if(x==1)
	{  
	while(objectFile>>name>>power)
	{
	if(power==0)
	{
	cout<<name<<"   "<<power<<endl;
	}
	}
	}
    if(x==2)
	{  
	while(objectFile>>name>>power)
	{
	if(power>0)
	{
	cout<<name<<"   "<<power<<endl;
	}
	}
	}
	if(x==3)
	{  
	while(objectFile>>name>>power)
	{
	if(power<0)
	{
	cout<<name<<"   "<<power<<endl;
	}
	}
	}
}
