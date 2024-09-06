#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,g,a,b,s,i,j=0,n,r,m1[50],g1[50],p[50];
	int t[50],temp[50],temp1[50];
	printf("Enter the size of message:");
	scanf("%d",&m);
	printf("Enter the message in (0s and 1s):");
	for(i=0;i<m;i++)
	{
		scanf("%d",&m1[i]);
	}
	printf("Enter the size of generator:");
	scanf("%d",&g);
	printf("Enter the generator in (0s and 1s):");
	for(i=0;i<g;i++)
	{
		scanf("%d",&g1[i]);
	}
	printf("Number of terms in genrator:%d",g);
	r=g-1;
	printf("\nThe value of r is:%d",r);
	s=m+r;
	for(i=0;i<m;i++)
	{
		p[j++]=m1[i];
	}
	for(i=m;i<s;i++)
	{
		p[j++]=0;
	}
	for(i=0;i<s;i++)
	{
		printf("\n%d",p[i]);
	}
	
//	temp[a++]=p[j++];
	//XOR division
   for(i=0;i<m;i++)
	{
		if(p[i]==1)
		{
			for(j=0;j<g;j++)
			{
				p[i+j]=p[i+j]^g1[j];
			}
		}
	}

	for(i=0;i<s;i++)
	{
		printf("%d",p[i]);
		temp[a++]=p[i];
	}

/*	//Transmitted data
	for(i=0;i<s;i++)
	{
		temp1[i]=temp[i]^p[i];
	}
	for(i=0;i<s;i++)
	{
		printf("\n%d",temp1[i]);
	}*/
	return 0;
}
