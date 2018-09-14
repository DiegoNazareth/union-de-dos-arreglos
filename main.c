#include <iostream>
void unir(int [],int []);
void inclusion(int [],int []);
void interseccion(int [],int []);
using namespace std;


int main(){
	int A[5]={2,3,8,6,3};
	int B[3]={1,2,1};
	unir(A,B);
	inclusion(A,B);
	interseccion(A,B);
	return 0;
}

void unir(int A[5],int B[3]){
	int i,j,band,k=0;
	int C[5];
	cout<<"Union de A,B"<<endl;
	for(i=0;i<5;i++){
		band=0;
		for(j=0;j<5;j++){
			if(A[i]==C[j]){
				band=0;
				break;
			}
			band=1;
		}
		if(band==1){
			C[k++]=A[i];	
		}
	}
	for(i=0;i<3;i++){
		band=0;
		for(j=0;j<5;j++){
			if(B[i]==C[j]){
				band=0;
				break;
			}
			band=1;
		}
		if(band==1){
			C[k++]=B[i];	
		}
	}
	for(i=0;i<5;i++){
		cout<<" "<<C[i];
	}
}

void inclusion(int A[5],int B[3]){
	int i,j,band;
	cout<<endl<<"Inclusion de A,B";
	for(i=0;i<5;i++){
		band=1;
		for(j=0;j<3;j++){
			if(A[i]==B[j]){
				band=0;
				break;
			}
		}
		if(band==1){
			cout<<endl<<"A no esta incluido en B";
			break;
		}
	}
	if(band==0){
		cout<<endl<<"A esta incluido en B";
	}
}

void interseccion(int A[5],int B[3]){
	int i,j,k,band,ind=0;
	int C[8];
	cout<<endl<<"Interseccion de A,B";
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(A[i]==B[j]){
				for(k=0;k<5;k++){
					band=0;
					if(A[i]==C[k]){
						band=1;
						break;
					}
				}
				if(band==0){
					C[ind++]=A[i];
				}
			}
		}
	}
	C[ind]='\0';
	cout<<endl;
	for(i=0;C[i]!='\0';i++){
		cout<<" "<<C[i];
	}
}
