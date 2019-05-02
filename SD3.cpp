#include<iostream>
using namespace std;

class cost
{
	int n_v,n_e,u,v,value;
	int G[100][100];
	public:
	cost()
	{
		cout<<"enter the no of cities in path ";
		cin>>n_v;
		
		for(int i=0;i<n_v;i++)
		{
		for(int j=0;j<n_v;j++)
		{
			G[i][j]=0;
			}	
			
		}
		
	}
	
	void assign()
	{
		cout<<"enter the no of paths in between cites ";
		cin>>n_e;
		
		for(int i=0;i<n_e;i++)
		{
			cout<<"enter the statring city ending city and the cost of fuel";
			cin>>u>>v>>value;
			
			G[u][v]= G[v][u]=value;
			
		}	
		
	}
	
	void display()
	{
		
			for(int i=0;i<n_v;i++)
		{
			cout<<endl;
		for(int j=0;j<n_v;j++)
		{
		cout<<	G[i][j]<<"\t";
			}	
			
		}
		
	}
		
		
};
	
int main()
{
	cost t;
	
	t.assign();
	t.display();
	return 0;
	
	
	}	
/*enter the no of cities in path 4
enter the no of paths in between cites 5
enter the statring city ending city and the cost of fuel0
1
12
enter the statring city ending city and the cost of fuel1
2
23
enter the statring city ending city and the cost of fuel3
4
56
enter the statring city ending city and the cost of fuel1
4
57
enter the statring city ending city and the cost of fuel0
3
89

0       12      0       89
12      0       23      0
0       23      0       0
89      0       0       0
--------------------------------
Process exited after 24.81 seconds with return value 0
Press any key to continue . . .
*/

























































