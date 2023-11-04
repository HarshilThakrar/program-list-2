#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
float area(float r, float PI=3.14);
void main()
{
	float r,ans;
	clrscr();

	cout<<"Enter Radius of given Circle :: ";
	cin>>r;

	ans=area(r);

	cout<<"Area of given Circle is :: "<<setprecision(3)<<ans;

	getch();

}
float area(float r, float PI)
{
	return PI*r*r;
}