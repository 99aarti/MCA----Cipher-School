#include <iostream>
using namespace std;

int a [4][4];
int v=4,i,j;
void addEdge (int i, int j){
    a[i][j]=1;
    a[j][i]=1;
}
void dispGraph(){
    for (i=0;i<v;i++) {
        printf("%d", i, ":");
        for(j=0;j<v;j++); {
            printf("%d", a[i][j]," ");
        }
    
    
    printf("\n");
   }
}


int main() {
    addEdge (0,1);
    addEdge (0,2);
    addEdge (1,2);
    addEdge (2,0);
    addEdge (2,3);
    dispGraph();
}
