//Introduction of class

#include <iostream>

using namespace std;

class person
{
int age,dj;
char name[30];

public:
	void getdata(void);
	void display(void);

};
void person :: getdata(void)
{
	cout<< "Enter name:";
	cin>> name;
	cout<< "\nEnter age:";
	cin>> age;
}
void person :: display(void)
{
cout<<"\nName:"<<name;
cout<<"\nAge:"<<age;
cin>>dj;
}

int main()
{
person p;
p.getdata();
p.display();
return 0;
}

//Programming#2 on class

#include<iostream>
#include<string>

using namespace std;
/////////////////////////////////////////////////////////////////////////////////
class dj
{
public: 
		void setname(string x)
{
		name=x;
}
string getname()
{
return name;
}

private:
	string name;/// Never make your variable public,it should be private always///
};
     ///OOP::: For big data analysis,structured analysis///


int main()
{
dj m;
m.setname("MitunTalukder");
cout<<m.getname()<<endl;
system ("pause");
return 0;
}