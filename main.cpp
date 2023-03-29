#include <iostream>
using namespace std;

int main(){
  
  
  //Qui vanno definite le variabili
  float a=0,b=0,c=0;
  float Triangolo=0, Quadrato=0, Rettangolo=0, Trapezio=0;
  
  cout<<"inserire tre valori reali\n";
  cin >> a >> b >> c;
  //Qui va scritto il codice per eseguire i calcoli richiesti
  
  Triangolo= a*b/2;
  Quadrato= a*a;
  Rettangolo= a*b;
  Trapezio= ((a+b)*c)/2;
  cout << Triangolo << endl ;
  cout << Quadrato << endl ;
  cout << Rettangolo << endl ;
  cout << Trapezio << endl ;
    
  
  
  return 0;





}
