#include <iostream>
using namespace std;

int main(){
  
  //Qui vanno definite le variabili
  float a=0,b=0,c=0;
  cout<<"inserire tre valori reali\n";
  cin >> a >> b >> c;
  //Qui va scritto il codice per eseguire i calcoli richiesti
  float areaTriangolo=0,areaQuadrato=0,areaRettangolo=0,areaTrapezio=0;
  areaTriangolo= a*b/2;
  areaQuadrato= a*a;
  areaRettangolo= a*b;
  areaTrapezio= (a+b)*c/2;
  cout << "Area Triangolo = " << areaTriangolo;
  cout << " , Area Quadrato = " << areaQuadrato;
  cout << " , Area Rettangolo = " << areaRettangolo;
  cout << " , Area Trapezio= " << areaTrapezio;
  return 0;





}
