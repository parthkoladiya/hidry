#include<iostream.h>
#include<conio.h>
class A
{
 public:
		void setdata_A()
		{
		  cout<<"Class A ";
		}

};
class B: public A
{

 public:
		void setdata_B()
		{
		 cout<<"Class B";
		}
};
class C : public B
{

 public:
		void setdata_C()
		{
		  cout<<"Class C";
		}

};
class D : public C
{
 public:
		void setdata_D()
		{
		  cout<<"Class D\n";
		}
};
void main()
{
 D obj;
 clrscr();
 obj.setdata_D();
 obj.setdata_A();
 getch();
}