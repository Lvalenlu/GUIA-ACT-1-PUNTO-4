#include <iostream>
using namespace std;

int main()
{
    float precio, pera, manzana, ciruela, banano, pina;
    int documento, ultimosTresDigitos, ultimosDosDigitos, fruta, cant;
    
    cout << "Ingrese su documento: ";
    cin >> documento;
    
    ultimosTresDigitos = documento % 1000;
    ultimosDosDigitos = documento % 100;
    
    fruta == 0;
    precio == 0;
    
    do{
       cout << "Escriba que fruta desea comprar:" << endl << "1. Pera" << endl << "2. Manzana" << endl << "3. Ciruela" << endl << "4. Banano" << endl << "5. Piña" << endl << "6. Finalizar compra" << endl << "-->"; 
       cin >> fruta;
       
       switch (fruta){
       
           case 1: 
           cout << "El precio de las peras es de $" << ultimosTresDigitos << " ¿Cuántas desea llevar?" << endl << "-->";
           cin >> cant;
           pera = ultimosTresDigitos * cant;
           precio = precio + pera;
           cant = 0;
           break;
           
           case 2: 
           cout << "El precio de las manzanas es de $" << ultimosTresDigitos << " ¿Cuántas desea llevar?" << endl << "-->";
           cin >> cant;
           manzana = ultimosTresDigitos * cant;
           precio = precio + manzana;
           cant = 0;
           break;
           
           case 3: 
           cout << "El precio de las ciruelas es de $" << ultimosDosDigitos << " ¿Cuántas desea llevar?" << endl << "-->";
           cin >> cant;
           ciruela = ultimosDosDigitos * cant;
           precio = precio + ciruela;
           cant = 0;
           break;
           
           case 4:
           cout << "El precio de los bananos es de $" << ultimosDosDigitos << " ¿Cuántas desea llevar?" << endl << "-->";
           cin >> cant;
           banano = ultimosDosDigitos * cant;
           precio = precio + banano;
           cant = 0;
           break;
           
           case 5: 
           cout << "El precio de las piñas es de $" << ultimosTresDigitos << " ¿Cuántas desea llevar?" << endl << "-->";
           cin >> cant;
           pina = ultimosTresDigitos * cant;
           precio = precio + pina;
           cant = 0; 
           break;
           
           case 6:
           break;
           
           default:
           cout << "Opción no válida. Intente nuevamente" <<endl;
           
       }
       
       if(fruta == 6){
           
           cout << "Finalizando compra..." <<endl;
           
       }else{
           cout << "Lleva un monto de $" << precio << endl;
       }
       
    }while(fruta != 6);
    
    if(precio > 20000){
        
        cout << "¡Felicidades! Por tener una compra mayor a $20.000 se lleva un 20 porciento de descuento" << endl;
        precio = precio - (precio / 10);
        
    }
    
    cout << "El costo de su compra es de $" << precio;
    
}