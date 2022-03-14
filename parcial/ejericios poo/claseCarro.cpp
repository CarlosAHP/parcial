#include <iostream>

class Carro{
    private:
        int llave;
        int numeroSerie;
        bool acceso;
        int velocidad;;

    public:
        //Constructor
        Carro(int _llave, int _numeroSerie);
        //Metodos
        void encender(int _llave);
        void acelerar();
        void frenar();
        std::string marca;
        std::string modelo;
    

};
//Constructor
Carro::Carro(int _llave, int _numeroSerie){
    llave = _llave;
    numeroSerie = _numeroSerie;
    acceso = false;
    velocidad = 0;
}

void Carro::encender(int _llave){
    if(_llave == llave){
        acceso = true;
        std::cout << "El carro se ha encendido" << std::endl;
    }else
        acceso = false;
        std::cout << "La llave no es correcta \n " << std::endl;
}

void Carro::acelerar(){
    if (acceso==true){
        velocidad= velocidad+10;
        std::cout << "tu velocidad es "<<velocidad<< std::endl;
    }else{
        std::cout << "no puesdes acceso a acelerar \n" << std::endl;
    }
}

void Carro::frenar (){
    if (acceso==true){
        velocidad= velocidad-10;
        std::cout << "tu velocidad es "<<velocidad<< std::endl;
    }else{
        std::cout << "no puesdes acceso a frenar \n" << std::endl;
    }
}




int main()
{
    Carro bocho1=Carro(123, 55);
    Carro bocho2=Carro(124, 56);
    Carro bocho3=Carro(125, 57);
    
    bocho1.encender(123);

    system ("pause");
    return 0;
}


