#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
const int n=3;
const int m=4;
int matrice[n][m];
int array[m];
void CaricaMatrice ()
{
	cout <<"Inserisci i valori"<<endl;
	for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
				{
					cin>>matrice[i][j];
					
				}
		}	
}
void StampaMatrice ()
{
	cout <<"I valori salvati sono"<<endl;
	for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
				{
					cout<<" "<<matrice[i][j];
					
				}
				cout<<endl;
		}	
}
void SalvaMassimi()
{
	int Max=0;
	for (int i=0; i<n; i++)
		{
			Max=matrice[0][i];
			for (int j=0; j<m; j++)
				{
					if(matrice[i][j]>Max )
						{
						Max=matrice[i][j];
						
						}
				}
				array[i]=Max;
		}	
}
StampaMassimi()
{

	for( int i=0; i<n; i++)
		{
	cout<<array[i];
	
		}
}
int main () 
{
CaricaMatrice();
StampaMatrice();
SalvaMassimi();
StampaMassimi();
}

