
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{

	float R,r,th,k,l,p; // R (outer circle radius), r (inner circle radius) < R , distance p (from inner circle center)
	float x,y;
	// l (p/r) from 0 to 1
	// k (r/R) from 0 t0 1
	FILE *fp;
	fp = fopen("data_points.txt", "w");
	//100,2,80
	if (argc>1)
	{
		if (argc==4||argc==7)
		{
			R=atof(argv[1]);
			r=atof(argv[2]);
			p=atof(argv[3]);
//			n=atoi(argv[4]); // if n used for different itirations
			printf("R=%f, r=%f , p=%f\n",R,r,p);
			if (argc==7)
				fprintf(fp,"%f %f %f\n",atof(argv[4]),atof(argv[5]),atof(argv[6]));
			else
				fprintf(fp,"0 0 0\n");
		}
		else
			printf("Please make sure to give the values for R (outer circle radius), r(inner circle radius) , distance p ,and color as RGB values (optional).\nIf none provided, default values will be applied.\n");

	}
	else
	{
		R=100;
		r=2;
		p=80;
		fprintf(fp,"0 0 0\n");
	}
	k=r/R;
	l=p/r;

//	for (int j=1;j<=n;j++){
//		if (p>j ) p-=j;		
//		k=r/R;
//		l=p/r;
		for (int i = 0; i <= 2160; i += 1)
		{
			th = (i/6.0)*3.14159265/180;
			x = R*((1-k) * cos(th) + (l*k*cos(((1-k)/k)*th)));
			y = R*((1-k) * sin(th) - (l*k*sin(((1-k)/k)*th)));
//or		x = (R-r)*cos(th) + p*cos((R-r)*th/r);
//			y = (R-r)*sin(th) - p*sin((R-r)*th/r);
			fprintf(fp,"%f %f\n",x,y);
			
 
		}
//	}
}
