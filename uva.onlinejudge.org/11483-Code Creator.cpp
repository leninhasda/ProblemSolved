#include<iostream>
using namespace std;

void print_head()
{
	cout<<"#include<string.h>"<<endl;
	cout<<"#include<stdio.h>"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
}
void print_foot()
{
	cout<<"printf(\"\\n\");"<<endl;
	cout<<"return 0;"<<endl;
	cout<<"}"<<endl;
}

int main()
{
	int N,cnt=1,i,j;
	char line[105][105],c;
	
	while(cin>>N)
	{
		if(!N)
			break;
		c=getchar();
		if(c==10)
			c=getchar();
		
		for(i=0;i<N;i++)
			cin.getline(line[i],100);

		cout<<"Case "<<cnt<<":"<<endl;
		print_head();

		int f=0;

		for(i=0;i<N;i++)
		{
			cout<<"printf(\"";

			if(f==0)
			{
				if(line[i][j]==34) 
					cout<<char(92);
				if(line[i][j]==92)
					cout<<char(92);
				cout<<c;
				f=1;
			}
			
			for(j=0;j<strlen(line[i]);j++)
			{
				if(line[i][j]==34) 
					cout<<char(92);
				if(line[i][j]==92)
					cout<<char(92);
				cout<<line[i][j];
			}

			cout<<"\");"<<endl;
		}

		print_foot();
		cnt++;
	}

	return 0;
}