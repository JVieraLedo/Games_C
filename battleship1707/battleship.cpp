#include <iostream>
#include <cstdlib>
#include <string>
#include "console.h"

using namespace std;

struct punto{
int X;
int Y;       
};

void print(char[][11], int=10);
punto* colocar(char [][11],int);

int main(){
char matrix[11][11]={' '};  

punto* p=colocar(matrix,5);
  print(matrix);
 
    
    system("PAUSE");
    return 0;
    }

punto* colocar(char m[][11],int size){
   punto* p=new punto[size];
   for(int i=0;i<5;i++){
    cout<<"Coordenada X , Y ";
    cin>>p[i].X;//leer
    cout<<" ";
    char c;
    cin>>c;//leer
    p[i].Y=static_cast<char>(c)-64;
   }        
   return p;                  
   for(int i=1;i<11;i++)
    for(int j=1;j<11;j++){
     if(m[i][j]!=' '
    }                      
}     


   void print(char  x[][11] , int t){
for ( int i=0;i<=t;i++){
	       if(i>0 && i<10)
		   cout<<i;
           else 
           cout<<i-i;
           
		   for (int j=0;j<=t;j++){
			   if(i==0 ){
				   if(i==j)
		            cout<<"  ";
				   if(j>0)
                cout<<static_cast<char>(64+j)<<" ";
			   }
			   if(i>0 && j>0 )
				  if(i==j)
					  cout<<" "<<" ";
				  else
				   cout<<" "<<x[i][j];
			    

			   
		   }
 cout<<endl;
  }
}
