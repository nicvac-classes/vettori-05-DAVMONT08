#include <iostream>
#include <vector>
using namespace std;

int main() {
              int N,i,s,m,countsup;
              cout<<"inserisci quanti numeri devo generare"<<endl;
              cin>>N;
              vector<int> v(N);
              s=0;
              for(i=0;i<N;i=i+1)
              {
                v(i)=rand(1001);
                s=s+v(i);
              }
           m=s/N;
           cout<<"la media è"&m;
           countsup=0;
           for(i=0;i<N;i=0)
           {
            if v(i)>m
            {
                cout<<"i valori superiori alla media sono" <<v(i) << "la loro posizione è"<< i;
                countsup=countsup+1;
            }
           }
           cout<<"gli elementi superiori alla media sono " <<countsup;













}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
