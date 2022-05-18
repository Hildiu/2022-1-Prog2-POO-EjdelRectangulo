//
// Created by Profesor08 on 18/05/2022.
//

#ifndef MAYO_18_CRECTANGULO_H
#define MAYO_18_CRECTANGULO_H

#include <iostream>
using namespace  std;

using tNumero = double;

class CRectangulo
{
   private:
      tNumero largo;
      tNumero ancho;
   public:
     CRectangulo() {}   //--- constructor por defecto
     CRectangulo(tNumero _largo, tNumero _ancho): largo(_largo), ancho(_ancho) {}
     virtual ~CRectangulo(){ cout << "Destruyendo el objeto....\n";}
     tNumero perimetro();
     tNumero area();
     //---metodos de acceso-------
     void setLargo(tNumero _largo) { largo = _largo;}
     tNumero getLargo() { return largo; }
     void setAncho(tNumero _ancho) { ancho = _ancho;}
     tNumero getAncho(){ return ancho;}
};


#endif //MAYO_18_CRECTANGULO_H
