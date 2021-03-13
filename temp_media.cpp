//Riempire due vettori paralleli con i nomi delle città di una regione e le temperature medie annuali. Costruire un programma che permetta di visualizzare i nomi delle città (in ordine alfabetico) dove si sono registrate temperature superiori alla media generale

#include <iostream>
using namespace std;
int main()
{
    int n,k, scambio;
    cout<<"Quante sono le città? ";
    cin>>n;
    string nomi[n], appn, nomiins[k];
    float temp[n],tempins[k], app, med, sum=0;
    for(int i=0; i<n; i++)
    {
    	cout<<"Nome città: ";
    	cin>>nomi[i];
    	cout<<"Temperatura registrata:  ";
    	cin>>temp[i];
	sum=sum+temp[i];
    }
	med=sum/n;
    k=0;
	for (int i=0; i<n; i++)
	{
		if (temp[i]>med)
		{
			nomiins[k]=nomi[i];
			tempins[k]=temp[i];
			k++;
		}
	}
	do
	{
		scambio=0;
		for (int i=0; i<k-1; i++)
		{
			if (nomiins[i]>nomiins[i+1])
			{
				appn=nomiins[i];
				nomiins[i]=nomiins[i+1];
				nomiins[i+1]=appn;
				app=tempins[i];
				tempins[i]=tempins[i+1];
				tempins[i+1]=app;
				scambio=1;
			}
		}
	}
	while (scambio==1);
	cout<<"Le città con temperature sopra la media sono:"<<endl;
	for (int i=0; i<k; i++)
	{
		cout<<nomiins[i]<<"  "<<tempins[i]<<endl;
	}
		
    //system ("pause");
    return 0;
}
