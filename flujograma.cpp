#include <iostream>
 using namespace std;
 int main(){
    float x=0,y=0,c=0;
    cout<<"Ingrese la varible x: \n";
    cin>>x;
    if(x>0){
        cout<<"Ingrese la variable y: \n";
        cin>>y;

        if(y>0){
            c=x/y; 
        }
        cout<<"¿cuanta corriente electrica circula a traves de ella al encenderse? \n "<<c ;
        
    } else {
        cout<<"Error \n";
    }
    return 0;

    }