//Program-1
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
string text;
getline(cin,text);//**it will include space in string**
//cout<<"Size of text::"<<text.size()<<endl;
string text1="not";
if(text.compare(0,2,text1,0,2)==0)
{
cout<<"The output is::"<<text<<endl;
}
else
{
string text2="not ";
string text3=text2+text;
cout<<"The output is::"<<text3<<endl;
}
system("pause");
return 0;
}

//Program-2

#include<iostream>
#include<string>

using namespace std;

int main()
{
string text= "hello world";
cout<<"size of text::"<<text.size()<<endl;
string s1="Hello";
string s2="World";
string s3= s1+s2;
cout<<s3<<endl;
size_t found=s1.find("el");
cout<<"found of s1::"<<found<<endl;
string replacestr1="Debjoy";
string str2="Chowdhury";
replacestr1.replace(1,2,str2);
cout<<"Replacement of string::"<<replacestr1<<endl;
string email="tanu_ctg@yahoo.com";
size_t position=email.find("@");
if (position !=string::npos)
{
int pos=position+1;
string domain= email.substr(pos);
cout<<"Domain Name::"<<domain<<endl;
}

system("pause");
return 0;
}

//Program-3

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
int n,length,i;
string text;
cout<<"Enter string::";
cin>>text;
cout<<"\nEnter the value of integer::";
cin>>n;
length=text.size();
string text1;
text1=text[0];
if (n<length)
{
for (i=n;i<=length-1;i=i+n)
{
text1=text1+text[i];
}
if(i==length-n)
{
cout<<"\nThe output is::"<<text1;
}
else if(i!=length-n)
{
text1=text1+text[length-1];
cout<<"\nThe output is::"<<text1;
}
}
else
{
cout<<"\nInteger value is larger than string length!!!!";
}
system("pause");
return 0;
}

//Program-4

#include<iostream>
#include<string>

using namespace std;

int main()
{
int len1,len2,pos=0;
string text,text1,a,b;
cout<<"Enter first string::";
cin>>text;
cout<<"\nEnter second string::";
cin>>text1;
len1=text.size();
len2=text1.size();
for(int i=0;i<=len1-2;i++)
{
a=text.substr(i,2);
for(int j=0;j<=len2-2;j++)
{
b=text1.substr(j,2);
if (a.compare(b)==0)
{
pos=pos+1;
}
}
}
cout<<"The matched position is::"<<pos;
system("pause");
return 0;
}

//Program-5

#include<iostream>
#include<string>

using namespace std;

int main()
{
int len1,len2,pos=0;
string text,text1,a,b;
cout<<"Enter first string::";
cin>>text;
cout<<"\nEnter second string::";
cin>>text1;
len1=text.size();
len2=text1.size();
for (int i=0;i<=len1-2;i++)
{
a=text.substr(i,i+1);
for (int j=0;j<=len2-2;j++)
{
b=text1.substr(j,j+1);
if (a==b)
{
pos=pos+1;
}
}
}
cout<<"\nThe matched position is::"<<pos;
system("pause");
return 0;
}

//Program-6

#include<iostream>
#include<string>

using namespace std;

int main()
{
int len1,len2,avg1;
string str1,str2,newstring;
cout<<"Enter first string::";
getline(cin,str1);
cout<<"Enter word::";
getline(cin,str2);
len1=str1.length();//calculation of length of first string
len2=str2.length();//calculation of lenght of second string
avg1=len1/2;//averaging the length of first string
newstring=str1.insert(avg1,str2);//inserting second string into the middle of first string
cout<<newstring<<endl;
system("pause");
return 0;
}

//Program-7

#include<iostream>
#include<string>

using namespace std;

int main()
{
int len;
string str1,str2,str3,newstring,newstring1,newstring2,finalstring;
cout<<"Enter string::";
getline(cin,str1);
len=str1.length();
if (len>2)
{
str2=str1[len-2];
str3=str1[len-1];
newstring=str2+str3;
newstring2=newstring;
newstring1=newstring.insert(2,newstring);
finalstring=newstring1.insert(4,newstring2);
cout<<"The result is"<<finalstring<<endl;
}
else
{
cout<<"Invalid string input"<<endl;
}
system("pause");
return 0;
}

//Program-8

#include<iostream>
#include<string>

using namespace std;

int main()
{
int len;
string str1,str2,str3,str4;
cout<<"Enter string::";
getline(cin,str1);
len=str1.length();
cout<<"The result is::";
if(len>=2)
{
str2=str1[0];
str3=str1[1];
str4=str2+str3;
cout<<str4<<endl;
}
else
{
cout<<str1<<endl;
}
system ("pause");
return 0;
}

