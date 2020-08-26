#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
private :
char name[10];
char address[10];
//creating public methods or functions
public:
void getdata(char n[10],char a[10])
{
strcpy(name,n);
strcpy(address,a);
}
void printdata()
{
cout <<endl  << " name is " << name;
cout <<endl << " address is " << address;
}
};
//creating an inherited class student
class student : public person
{
int rno;
float marks;
public :
void getdata(int r,float m,char n[10],char a[10])
{
person::getdata(n,a); //calling the base class getdata method
rno=r;
marks=m;
}
void printdata()
{
person::printdata(); //calling base class printdata method
cout <<endl << "rno " << rno;
cout <<endl << "marks " << marks;
}

} ;


void main()
{
student p1;
int rno;
float marks;
char name[10];
char address[10];
clrscr();
cout << "enter rno , marks, name and address";
cin >> rno >> marks >> name >> address;
p1.getdata(rno,marks,name,address);
p1.printdata();
getch();

}




































