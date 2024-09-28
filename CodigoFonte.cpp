#include <iostream>
#include <cmath>

using namespace std;

void CalculaMagnitude(double &Magnitude,double amplitude,double DiferencaTempo) {
    Magnitude = log10(amplitude)+  3.0 * log10(8.0 * DiferencaTempo) -2.92;
}

void CalculaEnergia(double &EnergiaLiberada,double magnitude) {
    EnergiaLiberada = 7 * pow(10,(1.5 * magnitude)-3);
}


int main() {
    double amplitude,DiferencaTempo,magnitude,EnergiaLiberada;

    cout << "CALCULO DE ESCALA RICHTER" << endl << endl;
    cout << "Digite a amplitude: ";
    cin >> amplitude;
    cout << "Digite a diferenca de tempo entre a chegada das ondas P e S ao sismografo: ";
    cin >> DiferencaTempo;

    CalculaMagnitude(magnitude,amplitude,DiferencaTempo);
    CalculaEnergia(EnergiaLiberada,magnitude);

    cout << endl << "Magnitude: " << magnitude;
    cout << endl << "Energia Liberada: " << EnergiaLiberada;
    if(magnitude < 3.5){
        cout << endl << "Efeito: Geralmente nao sentido, mas gravado." << endl << endl;
    }else if(magnitude>= 3.5 && magnitude<=5.4) {
        cout << endl << "Efeito: As vezes sentido, mas raramente causa dano." << endl << endl;
    }else if(magnitude>= 5.5 && magnitude<=6.0) {
        cout << endl << "Efeito: No maximo causa pequenos danos a predios bem construidos, mas pode danificar seriamente casas mal construidas em regioes proximas." << endl<< endl;
    }else if(magnitude>= 6.1 && magnitude<=6.9) {
        cout << endl << "Efeito: Pode ser destrutivo em areas em torno de ate 100 km do epicentro." << endl<< endl;
    }else if(magnitude>= 7.0 && magnitude<=7.9) {
        cout << endl << "Efeito: Grande terremoto. Pode causar serios danos numa grande faixa." << endl << endl;
    }else{
        cout << endl << "Efeito: Enorme terremoto. Pode causar graves danos em muitas areas mesmo que estejam a centenas de quilometros." << endl << endl;
    }
    system("pause");
    return 0;
}