#include<iostream>
using namespace std; 

int main(){
	int n,m;	
	cin>>n;
	cin>>m;
	
	int tmp=0;
	int cont;
	int ICopy;

	for(int i=n;i<=m;i++){
            cont=1;   
	    ICopy=i;
            while(ICopy!=1){
                 if(ICopy%2!=0)
                         ICopy=ICopy*3+1;
                 else
                         ICopy=ICopy/2;
                 
	     	cont=cont+1;
         	}
	    if(cont>tmp){
	    	tmp=cont;
	    }
	     
	}


	cout<<n<<" "<<m<<" "<<tmp<<endl;


	return 0; 
}
