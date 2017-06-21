#include <stdio.h>

#define b 10.0
#define a 5.0
#define n 250
#define func(x) (x*x);

int simpson();

int main()
{
	simpson();
	return 0;
}

float simpson()
{
	float h=(b-a)/n;
	float p1=0.0,p2=0.0,p3=0.0; //formuldeki parantezler
	float y[n];
	float arg=0.0;
	float sonuc = 0.0;
	//fonksiyonun a'dan b'ye kadar olan değerlerini dolduruyoruz
	for(int i=0;i<n;i++)
	{
		arg=(a+(i*h));
		
		y[i] = func(arg);
		printf("y%d : %f \n",i,y[i]);
		
	}

	p1 = y[0]+y[n-1];//y0 + yn
	
	printf(" p1 = %f ",p1); 
	for(int i=0;i<n;i+=2)
		{p2+=y[i];}
	p2*=2;//2(çift indisliler)
	printf(" p2 = %f ",p2);
	
	for(int i=1;i<n;i+=2)
		{p3+=y[i];}
	p3*=4;//4(tek indisliler)
	printf(" p3 = %f ",p3);
	printf("\n h:%f",h);
	sonuc = (p1 + p2 + p3)*(h/3);
	printf ("\n sonuc = %f ",sonuc);
	
	return sonuc;
}
