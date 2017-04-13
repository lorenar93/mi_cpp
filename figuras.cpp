// Pre directiva 
#include <iostream>

using namespace std;

// Mi objeto Figura

class Figura {
private:
  // Tarea: Anhadir atributos altura y ancho

public:
  // Constructor 
  Figura( /* Tarea: Completar argumentos */ ){ 
    // Tarea : Completar constructor
  }

  // Destructor, luego hablamos de eso, no le pongas cuidado por ahora
  virtual ~Figura();

  // Tarea: Crear metodos que me devuelvan los valores de altura y ancho

};

// Tarea: Crear Objeto Rectangulo que herede metodos, ancho y altura de Figura
// Hint: Ancho y altura ya no seran privados, sino ...

// Tarea: Crear metodo que calcule el area del objeto rectangulo.
// Hint: El area de un rectangulo es = altura * ancho.
// Hint: En C++ la multiplicacion se hace con el signo *

// Tarea: Crear Objeto Triangulo que herede metodos, ancho y largo de Figura
// Hint: Ancho y largo ya no seran privados, sino ...
// Hint: El area de un triangulo es = (altura * ancho)/2.
// Hint: En C++ la multiplicacion se hace con el signo *
// Hint: En C++ la division se hace con el signo /

int main(){
  // Tarea: La funcion main debe escribir al terminal el alto de un triangulo
  // que se llame triangulo_rectangulo con ancho 4 y alto 5.
  // Y el ancho de un Rectangulo que se llame rectangulo_grande con ancho 4 y alto 5.
  
  // Tarea: La funcion main tambien debe escribir al terminal si el area de 
  // triangulo_rectangulo es mayor al area de rectangulo_grande. Y escribir
  // al terminal el valor de ambas areas.
  // Hint: Escribir al terminal se hace asi: cout << algo va aqui << endl;
  
  return 0;
}
