#include <iostream>
#include <conio.h>
using namespace std;
class Graph
{
	private :
		int **arr;
		int size;
		
	public :
		Graph(int S);
		void getdata();
		void prints();
	
};
Graph::Graph(int S)
{
	size=S;
	arr=new int*[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=new int(size);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			arr[i][j]=0;
		}
	}
	
	
}
void Graph::getdata()
{
	cout<<"Enter 1 if edge exist between node else 0 "<<endl;
		for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(j>i){
			
			   cout<<"Enter the edge between  ("<<i<<")  and ("<<j<<") :";
		    	cin>>arr[i][j];
			}
		}
	}
	
}
void Graph::prints()
{
		for(int i=0;i<size;i++)
		{
		for(int j=0;j<size;j++)
		{
		    cout<<arr[i][j]<<" , ";
		}
		cout<<endl;
	}
}
int main()
{
	int v;
	cout<<"Enter the number of vertex : ";
	cin>>v;
	Graph  obj(v);
	
	obj.getdata();
	obj.prints();
	
	getch();
	return 0;
}
