//----------------------------------------
// Dato de Entrada: largo, ancho (double)
// Dato de Salida: area, perimetro (double)
//------------------------------------------

#include "CRectangulo.h"

int main()
{
   CRectangulo obj1(50,25);

   cout << "Perimetro : " << obj1.perimetro() << "\n";
   cout << "Area      : " << obj1.area() << "\n";

   cout << "\nAhora se crea otro objeto 2\n";
   CRectangulo obj2;    //--- instanciado el objeto
   tNumero l, a;
   cout << "Largo : " ;
   cin >> l;
   cout << "Ancho : ";
   cin >> a;
   obj2.setLargo(l);
   obj2.setAncho(a);
   cout << "El area es : " << obj2.area() << "\n";
   cout << "El perimetro es : " << obj2.perimetro() << "\n";

   cout << "\n ahora creamos el objeto 3\n";
    cout << "Largo : " ;
    cin >> l;
    cout << "Ancho : ";
    cin >> a;
    CRectangulo obj3(l,a);
    cout << "El area es : " << obj3.area() << "\n";
    cout << "El perimetro es : " << obj3.perimetro() << "\n";

    //---- ahora vamos a modificar los valores del atributo largo y ancho
    //---- del objeto numero 3, de tal manera que sea igual a 10 unidades mas
    obj3.setLargo(obj3.getLargo() + 10);
    obj3.setAncho(obj3.getAncho() + 10);
    cout << "Ahora calculamos el area y perimetro del objeto 3, pero despues de haber \n";
    cout << "Modificado los valores del largo y ancho en 10 unidades" <<"\n";
    cout << "El area es : " << obj3.area() << "\n";
    cout << "El perimetro es : " << obj3.perimetro() << "\n";

    return 0;
}



