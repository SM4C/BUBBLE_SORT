// Inserire nomi e voti nel compito di informatica. 
// Visualizzare in ordine alfabetico i nomi degli alunni insufficienti.
#include <iostream>
using namespace std;
int main()
{
    int n,k, scambio;
    cout<<"Quante sono gli alunni? ";
    cin>>n;
    string nomi[n], nomiins[n], appn;
    float voti[n], votiins[n], app;
    for(int i=0; i<n; i++)
    {
    	cout<<"Nome ";
    	cin>>nomi[i];
    	cout<<"Voto ";
    	cin>>voti[i];
    }
    k=0;
	for (int i=0; i<n; i++)
	{
		if (voti[i]<6)
		{
			nomiins[k]=nomi[i];
			votiins[k]=voti[i];
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
				app=votiins[i];
				votiins[i]=votiins[i+1];
				votiins[i+1]=app;
				scambio=1;
			}
		}
	}
	while (scambio==1);
	cout<<"Gli insufficienti sono:"<<endl;
	for (int i=0; i<k; i++)
	{
		cout<<nomiins[i]<<"  "<<votiins[i]<<endl;
	}
		
    //system ("pause");
    return 0;
}
