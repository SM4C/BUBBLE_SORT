#include <iostream>
using namespace std;
int main()
{
    int n, scambio;
    cout<< "Quanti sono gli elementi? ";
    cin>>n;
    float v[n], app;
    string nomi[n], appn;
    for(int i=0; i<=n-1; i++)
    {
        cout<<"Nome=";
        cin>>nomi[i];
        cout<<"Voto=";
        cin>>v[i];
    }
    do
    {
         scambio=0;
         for(int i=0; i<=n-2; i++)
         {
             if(nomi[i]>nomi[i+1])
             {
                app=v[i];
                v[i]=v[i+1];
                v[i+1]=app;
                appn=nomi[i];
                nomi[i]=nomi[i+1];
                nomi[i+1]=appn;
                scambio=1;
             }
         }
    }
    while (scambio==1);
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[i]<<"  "<<nomi[i]<<endl;
    }
    //system("pause");
    return 0;
}
