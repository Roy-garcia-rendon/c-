#include<iostream>

using namespace std;

int main() {

   float pesos;

   float tipoCambioDolar;

   float tipoCambioEuro;

   float dolares;

   float euro;              

   cout << " CONVERTIR UN MONTO EN PESOS MEXICANOS A DOLAR Y EURO \n\n";  

   cout << " ------------------------------------------------------------------------------------- \n\n";          

         

   cout << "Ingresa el valor de pesos mexicanos:";

   cin >> pesos;

   cout << "Ingresa el valor de tipo de cambio Dolar:";

   cin >> tipoCambioDolar;

   cout << "Ingresa el valor de tipo de cambio Euro:";

   cin >> tipoCambioEuro;

   cout << "DOLARES : " << pesos/tipoCambioDolar << endl;

   cout << "EUROS  : " << pesos/tipoCambioEuro << endl;

   

   return 0;

}


