#include <iostream>
#include <string>
using namespace std;
int main(){
    
string nombre, sexo, respuesta;
int acu1=0, acu2=0, acu3=0;
do{
cout<<"indique su nombre"<<endl;
cin>>nombre; 
if(nombre=="carolina"){
    acu3++;
}
cout<<"indique su sexo(masculino/femenino)"<<endl;
cin>>sexo;
if(sexo=="masculino"){
acu1++;
}
if(sexo=="femenino"){
    acu2++;
}
cout<<"desea continuar?(si/no)"<<endl; 
cin>>respuesta;
}while(respuesta=="si"); 
cout<<"la cantidad de hombres que hay es:"<<acu1<<endl;
cout<<"la cantidad de mujeres que hay es:"<<acu2<<endl;
if(acu3>0){
cout<<"hay al menos una persona llamada carolina"<<endl;
}
else{cout<<"no hay ninguna persona llamada carolina"<<endl;
}
}












