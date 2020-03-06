#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
    int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout<< binario <<endl;
string s = to_string(binario);
string n= s.substr(0,s.length()-7);

}

int gap(string n)
{
  int i=0;
  int gap_actual=0;
  int gap_superior=0;
    for (i; n[i]=='1'; n[i+1]){
      if (gap_actual>gap_superior){
        gap_superior=gap_actual;
        gap_actual=0;}
     else{
     gap_actual= gap_actual+1;}}

cout << gap_superior;
}