#include <iostream>

void max_min(int a[], int n)
{
	int vmin = 0;
	int vmax = 0;

	if(a[0] > a[1])
	{
		vmin = a[1];
		vmax = a[0];
	}
	else
	{
		vmin = a[0];
		vmax = a[1];
	}

	for(int i=2; i<=n-2; i++)
	{
		if(a[i] > a[i+1])
		{
			if(a[i] > vmax) vmax = a[i];
			if(a[i+1] < vmin) vmin = a[i+1];
		}
		else 
		{
			if(a[i+1] > vmax) vmax = a[i+1];
			if(a[i] < vmin) vmin = a[i];		
		}
		
	}


	std::cout<<vmin<<" : "<<vmax<<std::endl;
}

int main()
{
	int n = 8;
	int a[n] = {3,6,8,12,4,45,67,1};

	max_min(a,n);	

	return 0;
}
