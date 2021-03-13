//     Ordinamento crescente con Bubble sort di un vettore di N elementi
//
#include <iostream>
using namespace std;
int main()
{
    int n, scambio;
    cout<< "Quanti sono i voti? ";
    cin>>n;
    int v[n];
    int app;
    for(int i=0; i<n; i++)
    {
        cout<<"Inserisci il voto: ";
        cin>>v[i];
    }
    do
    {
         scambio=0;
         for(int i=0; i<n-1; i++)
         {
             if(v[i]<v[i+1])
             {
               app=v[i];
               v[i]=v[i+1];
               v[i+1]=app;
               scambio=1;
             }
         }
    }
    while (scambio==1);
    cout<<"Ordine di voti (decrescente) ='"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<endl;
    }    
    // system("pause");
    return 0;
}             
