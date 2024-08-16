
#include<iostream>
#include<string>
using namespace std;
class library
{
public:
int cost;
string book;
void accept()
{
cout<<"\nEnter name of book:\n";
cin>>book;
cout<<"Enter the cost of book:\n";
cin>>cost;
}
};
int main()
{
library l1[10],obj[10];
int cost,new_arr,new_arr2,i,j,temp,count=0,flag=0,n,ch,choice,t=0,k;
string book[10];
cout<<"Enter the no. of books:";
cin>>n;
for(i=0;i<n;i++)
{
l1[i].accept();
}
do{
cout<<"__________________________________________________________________";
cout<<"\n1.Display the Books\n2.Book sort in ascending order\n3.Book sort in descending order\n4.Books less than cost 500\n5.count of Books more than cost 500\n6.delete duplicate entries\n7.Duplicate Entries display:\nEnter your Choice:";
cin>>ch;
switch(ch)
{
case 1:
cout<<"__________________________________________________________________";
cout<<"\nYour Book data is :";
for(i=0;i<n;i++)
{
cout<<"\nBook Name:"<<l1[i].book<<"\t\tCost:"<<l1[i].cost;
}
break;
case 2:
cout<<"__________________________________________________________________";
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(l1[j].cost>l1[j+1].cost)
{
temp=l1[j].cost;
string temp2=l1[j].book;
l1[j].cost=l1[j+1].cost;
l1[j].book=l1[j+1].book;
l1[j+1].cost=temp;
l1[j+1].book=temp2;
}
}
}
cout<<"\n\nBooks in ascending order is given below:";
for(i=0;i<n;i++)
{
cout<<"\nBook Name:"<<l1[i].book<<"\t\tCost:"<<l1[i].cost;
}
cout<<"\n";
break;
case 3:
cout<<"__________________________________________________________________";
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(l1[j].cost<l1[j+1].cost)
{
temp=l1[j].cost;
string temp2=l1[j].book;
l1[j].cost=l1[j+1].cost;
l1[j].book=l1[j+1].book;
l1[j+1].cost=temp;
l1[j+1].book=temp2;
}
}
}
cout<<"\nBooks in descending order is given below:";
for(i=0;i<n;i++)
{
cout<<"\nBook Name:"<<l1[i].book<<"\t\tCost:"<<l1[i].cost;
}
cout<<"\n";
break;
case 4:
cout<<"__________________________________________________________________";
cout<<"\nBooks less than 500 cost are:";
for(i=0;i<n;i++)
{
if(l1[i].cost<=500)
{
cout<<"\nBook Name:"<<l1[i].book<<"\t\tCost:"<<l1[i].cost;
}
else
{
count++;
}
}
break;
case 5:
cout<<"__________________________________________________________________";
cout<<"\n\nBook cost more than 500 is:\n"<<count;
cout<<"\n";
break;
case 6:
cout<<"__________________________________________________________________";

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(l1[i].book==l1[j].book)
{
obj[t].book=l1[j].book;
obj[t].cost=l1[j].cost;
t++;

for(k=j;k<n-1;k++)
{
l1[j].book=l1[j+1].book;
l1[j].cost=l1[j+1].cost;

}
n--;
j--;
}
}
}
cout<<"\nAfter deletion of duplicates our original array is:";
for(i=0;i<n;i++)
{
cout<<"\nBook Name:"<<l1[i].book<<"\t\tCost:"<<l1[i].cost;
}
break;
case 7:
cout<<"\nduplicate entries are:";
for(i=0;i<t;i++)
cout<<"\nBook Name:"<<obj[i].book<<"\t\tCost:"<<obj[i].cost;

break;
default:
cout<<"\nwrong choice....";
}
cout<<"\nPress 1 to continue:";
cin>>choice;
}while(choice==1);
return 0;
}

