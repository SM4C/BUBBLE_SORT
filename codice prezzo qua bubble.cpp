//Inserire N quantità di articoli venduti, per ogni articolo inserire codice / prezzo / quantità parallelamente, ordinare in ordine decrescente il prezzo e il codice
#include <iostream>
using namespace std;
int main()
{
	int n, scambio;
	cout<< "Quanti sono gli elementi? ";
	cin>>n;
	float codice[n], prezzo[n], qua[n], app;	for(int i=0; i<=n-1; i++)
		{
			cout<<"Codice Articolo=";
			cin>>codice[i];
			cout<<"Prezzo Articolo=";
			cin>>prezzo[i];
			cout<<"Quantità Articolo=";
			cin>>qua[i];
		}
	do
		{
			scambio=0;
			for(int i=0; i<=n-2; i++)
				{
					if(codice[i]>codice[i+1])
						{
							app=codice[i];
							codice[i]=codice[i+1];
							codice[i+1]=app;
							scambio=1;
						}
				}
		}
	while (scambio==1);
	for(int i=0; i<=n-1; i++)
		{
			cout<<"CODICE: "<<codice[n]<<"PREZZO: "<<prezzo[n]<<"QUANTITA: "<<qua[n]<<endl;
		}    
	//system("pause");
	return 0;
}             
