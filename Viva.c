#include<reg51.h>

sbit RST=P3^0;

sbit IND=P2^0;
sbit BZ=P2^7;

sbit L1=P1^0;
sbit L2=P1^1;
sbit L3=P1^2;
sbit L4=P1^3;

sbit C1=P2^1;
sbit C2=P2^2;
sbit C3=P2^3;
sbit C4=P2^4;
sbit C5=P2^5;
sbit C6=P2^6;

sbit SVSG=P2^7;

void delay(long a)
{
   long i;
   for(i=0;i<a;i++);   //null statement
}

void cct_init(void)
{	
   P0 = 0xFF;
	 P1 = 0x00;
   P2 = 0x00;   
   P3 = 0x00;  
}
void P1Animate()
{
	  unsigned int i,j;
	  unsigned char ar[10]={0x10,0x20,0x30,0x40,0x50,0x60};
	  P1=0x00;
		
		for(j=0;j<6;j++)
		{
			if(RST==1)
			{
				break;
			}
			for(i=0;i<10;i++)
		  {
				if(RST==1)
			  {
					 BZ=1;
		       delay(30000);
		       BZ=0;
				   break;
			  }
			  delay(18000);
				P1++;
		  }
			P1=ar[j];
			L1=0;
			L2=0;
			L3=0;
			L4=0;
		  
		}
}

int main()
{
	P0=0xFF;
	P1=0x00;
	cct_init();
	if(C1==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0xF9;
		P1Animate();
		//delay(75000);
	}
	else if(C2==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0xA4;
		P1=0xA4;
		P1Animate();
		//delay(75000);
	}
	else if(C3==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0xB0;
		P1Animate();
		//delay(75000);
	}
	else if(C4==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0x99;
		P1Animate();
		//delay(75000);
	}
	else if(C5==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0x92;
		P1Animate();
    //delay(75000);
	}
	else if(C6==1)
	{ 
		//SVSG=1;
		IND=1;
		BZ=1;
		delay(30000);
		BZ=0;
		P0=0x82;
		P1Animate();
		//delay(75000);
	}
}