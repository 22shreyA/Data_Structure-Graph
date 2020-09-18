/********************************************
********* Code By Shreya ********************
********************************************/


/********************************************
*******Code of DFS for directed Graph********
*****Through Adjaency List Method**********
********************************************/

#include <bits/stdc++.h>
#include <list>
using namespace std;

class graph{
	int vertices;
	list<int> *a;
	 DFS_recur(int start,int visit[]);
	
	public:
		 graph(int vertices);
		 
		 add_to_list(int x,int y);
	   
	     DFS(int start);	
	   
};

graph::graph(int v){
	this->vertices=v;
	a = new list <int> [v] ;
}
 graph::add_to_list(int x,int y){
 	a[x].push_back(y);	
 }
 
 graph:: DFS_recur(int start,int visit[]){
 	
 	
 	 visit[start]=1;
 	 cout<<start<<" ";
 	 
 	 list <int>::iterator it; 
	
	 
	 for(it=a[start].begin();it!=a[start].end();it++){
	 	if(!visit[*it])
	 		DFS_recur(*it,visit);	
	}
 }
 graph::DFS(int start){
 	int *visit = new int[vertices];
 	
 	for(int i=0;i<vertices;i++)
 	   visit[i]=0;
 	   
 	 
 	  DFS_recur(start,visit);
 	  
}

 	   
	 
 
int main(){
	
	int v,e;
	cin>>v>>e;
	graph obj(v);
	while(e--){
		int x,y;
		cin>>x>>y;
		obj.add_to_list(x,y);		
	}
	int r;
	cin>>r;
	
	 obj.DFS(r);
	
	
	return 0;
}

/***********************************************
***************OUTPUT***************************
***********************************************/


/*
4 6   enter vertex and edges respectively
0 1   enter edges times vertices linked together
0 2
1 2
2 0
2 3
3 3
2     the verteices from where the traversal starts
2 0 1 3   output
--------------------------------
Process exited after 26.62 seconds with return value 0
Press any key to continue .
*/

