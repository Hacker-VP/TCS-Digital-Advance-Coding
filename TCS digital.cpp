#include<iostream> //headerfile
using namespace std;

int main()
{
	int date=0,dd=0,mm=0,dig[3]={0},i=3;
	cin>> date;

	while(date>0)
	{
		dig[i]=date%10;
		date=date/10;
		i-=1;
	}
	
	mm = dig[0]*10 + dig[1];
	dd = dig[2]*10 + dig[3];
	
	if(mm < 12 && mm > 0)
	 {
	  if((dd < 8 || dd >22) && (dd<32))
	  {
	  	if(mm==2)
	  	  if((dd > 22 || dd < 8 )&& dd < 29)
	  	    cout<<1;
	  	  else
	  	    cout<<0;
	  	if(mm==1 || mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	  	  if((dd > 22 || dd < 8 )&& dd < 32)
	  	    cout<<1;
	  	  else
	  	    cout<<0;
	  	if(mm==4 || mm==6||mm==9||mm==11)
	  	  if((dd > 22 || dd < 8 )&& dd < 31)
	  	    cout<<1;
	  	  else
	  	    cout<<0;
	  }
	  else
	    cout<<0;
	 }
	 else
	   cout<<0;
	return 0;
}
