#include <iostream>
#include <string>
using namespace std;
int main(){
int c1=0, c2=0, i=0;
string nombre;
while(i<9){
cout<<"indique a quien desea votar(toto/tomi)"<<endl;
cin>>nombre;
if(nombre=="toto"){
    c1++;
}
else{
    c2++;
}
i++;}

cout<<"la cantidad de votos que tiene toto es de:"<<c1<<endl;
cout<<"la cantidad de votos que tiene tomi es de:"<<c2<<endl;

if(c2>c1){
    cout<<"el ganador de las elecciones es tomi"<<endl;
}else{
    cout<<"el ganador de las elecciones es toto"<<endl;
}
}

















