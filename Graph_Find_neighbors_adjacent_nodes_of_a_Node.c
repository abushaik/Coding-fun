#include <stdio.h>

int adj[50][50];

int main()
{
    freopen("input.txt","r",stdin);
    int node,edge,node1;
    int i,j;
    int num1,num2;
    scanf("%d",&node);  //number of nodes.
    scanf("%d",&edge);  // number of edge.
    for(i=0;i<edge;i++)
    {
      scanf("%d %d",&num1,&num2); //undirected graph start and end node.
      adj[num1][num2]=1;
      adj[num2][num1]=1;
    }
    // Add Node number for find neighbor in the input text file.
    scanf("%d",&node1);
    for(i=0;i<node;i++)
    {
        if(adj[node1][i]==1)
        {
            printf("%d\n",i);
        }
    }
}

