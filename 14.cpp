#include <iostream>
#include <cstdlib>
#define N   5
using namespace std;
 
int main(){
    int i;
    float total[N],numero1[N],numero2[N],exp1[N],exp2[N];
    char sign[N],c;
    for(i=0;i<N;i++)
    {
        do{
            cout<<"Ingrese el signo del "<<" x"<<"^"<<i<<": ";
            cin>>sign[i];
        }while((sign[i]!='+')&&(sign[i]!='-'));
               cout<<"Ingrese el NUMERADOR del coeficiente de: "<<" x"<<"^"<<i<<": ";
        cin>>numero1[i];
        cout<<"DENOMINADOR del coeficiente de: "<<" x"<<"^"<<i<<": ";
        cin>>numero2[i];
        cout<<"NUMERADOR del EXPONENTE del coeficiente de: "<<" x"<<"^"<<i<<": ";
        cin>>exp1[i];
        cout<<"DENOMINADOR del EXPONENTE del coeficiente de: "<<" x"<<"^"<<i<<": ";
        cin>>exp2[i];
        system("cls");
    }
    for(i=0;i<N;i++)
        total[i]=numero1[i]/numero2[i]*(exp1[i]/exp2[i]);
    cout<<"los numeros son;"<<endl;
    for(i=0;i<=N-1;i++)
        cout<<total[i]<<"x^"<<(exp1[i]/exp2[i])-1<<"+";
    for(i=N-1;i<N;i++)
      cout<<total[i]<<"x^"<<(exp1[i]/exp2[i])-1;
    cout<<endl;
    system("pause");
}