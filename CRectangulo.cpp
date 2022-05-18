//
// Created by Profesor08 on 18/05/2022.
//

#include "CRectangulo.h"

tNumero CRectangulo::perimetro()
{
   return 2*largo + 2*ancho;
}

tNumero CRectangulo::area()
{
   return largo * ancho;
}

