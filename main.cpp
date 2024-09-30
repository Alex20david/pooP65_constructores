#include <iostream>
#include <cmath>
using namespace std;

// Clase cuadrado*******************************************
// Definición
class cuadrado{
public:
    int lado;
    cuadrado();
    cuadrado(int);
    cuadrado(const cuadrado &);
    int area();
    int perimetro();
    int volumen(); // Volumen de un cubo
};

// Implementación
cuadrado::cuadrado():lado(0){};
cuadrado::cuadrado(int ld):lado(ld){};
cuadrado::cuadrado(const cuadrado &cd):lado(cd.lado){};
int cuadrado::area(){
    return lado * lado;
}
int cuadrado::perimetro(){
    return 4 * lado;
}
int cuadrado::volumen(){
    return pow(lado, 3);
}

// Clase Triángulo**************************
class triangulo{
public:
    int base, altura;
    triangulo();
    triangulo(int, int);
    triangulo(const triangulo &);
    double area();
    int perimetro(); // Para un triángulo equilátero
    double volumen(); // Pirámide triangular
};

// Implementación
triangulo::triangulo():base(0),altura(0){};
triangulo::triangulo(int b, int h):base(b),altura(h){};
triangulo::triangulo(const triangulo &tg):base(tg.base),altura(tg.altura){};
double triangulo::area(){
    return (base * altura) / 2;
}
int triangulo::perimetro(){
    return 3 * base; // Perímetro de un triángulo equilátero
}
double triangulo::volumen(){
    return (1.0 / 3) * area() * altura;
}

// Clase círculo *********************************************
class circulo{
public:
    int radio;
    circulo();
    circulo(int);
    circulo(const circulo&);
    double area();
    double perimetro(); // Circunferencia
    double volumen(); // Esfera
};

// Implementación
circulo::circulo():radio(0){};
circulo::circulo(int r):radio(r){};
circulo::circulo(const circulo &cr):radio(cr.radio){};
double circulo::area(){
    return M_PI * pow(radio, 2);
}
double circulo::perimetro(){
    return 2 * M_PI * radio;
}
double circulo::volumen(){
    return (4.0 / 3) * M_PI * pow(radio, 3);
}

// Aplicación
int main(){
    cuadrado c;
    triangulo t;
    circulo cr;
    int opt = 0;
    while(opt != 7){
        cout << "1. Area de Cuadrado" << endl;
        cout << "2. Perimetro de Cuadrado" << endl;
        cout << "3. Volumen de Cubo" << endl;
        cout << "4. Area de Triangulo" << endl;
        cout << "5. Perimetro de Triangulo" << endl;
        cout << "6. Volumen de Piramide" << endl;
        cout << "7. area de Circulo" << endl;
        cout << "8. Perimetro de Circulo" << endl;
        cout << "9. Volumen de Esfera" << endl;
        cout << "10. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opt;

        if(opt == 1){
            cout << "Lado del cuadrado: ";
            cin >> c.lado;
            cout << "Area: " << c.area() << " metros cuadrados\n" << endl;
        }
        else if(opt == 2){
            cout << "Lado del cuadrado: ";
            cin >> c.lado;
            cout << "Perimetro: " << c.perimetro() << " metros\n" << endl;
        }
        else if(opt == 3){
            cout << "Lado del cubo: ";
            cin >> c.lado;
            cout << "Volumen: " << c.volumen() << " metros cubicos\n" << endl;
        }
        else if(opt == 4){
            cout << "Base: ";
            cin >> t.base;
            cout << "Altura: ";
            cin >> t.altura;
            cout << "Area: " << t.area() << " metros cuadrados\n" << endl;
        }
        else if(opt == 5){
            cout << "Base del triangulo equilátero: ";
            cin >> t.base;
            cout << "Perimetro: " << t.perimetro() << " metros\n" << endl;
        }
        else if(opt == 6){
            cout << "Base de la pirámide: ";
            cin >> t.base;
            cout << "Altura de la pirámide: ";
            cin >> t.altura;
            cout << "Volumen: " << t.volumen() << " metros cubicos\n" << endl;
        }
        else if(opt == 7){
            cout << "Radio del circulo: ";
            cin >> cr.radio;
            cout << "Area: " << cr.area() << " metros cuadrados\n" << endl;
        }
        else if(opt == 8){
            cout << "Radio del circulo: ";
            cin >> cr.radio;
            cout << "Perimetro: " << cr.perimetro() << " metros\n" << endl;
        }
        else if(opt == 9){
            cout << "Radio de la esfera: ";
            cin >> cr.radio;
            cout << "Volumen: " << cr.volumen() << " metros cubicos\n" << endl;
        }
        else if(opt == 10){
            cout << "Fin del programa" << endl;
        }
        else{
            cout << "Opcion incorrecta" << endl;
        }
    }

    return 0;
}
