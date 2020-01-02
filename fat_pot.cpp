#include <iostream>
using namespace std;

void menu( int &command){
    cout << "1. Inserisci valore" << endl;
    cout << "2. Calcolare fattoriale" << endl;
    cout << "3. Calcolare potenza" << endl;
    cout << "4. Uscire" << endl;
    cin >> command;
}
void input_valore( int &n1){
    cout << "Inserisci valore : ";
    cin >> n1;
}
int fattoriale(int n1){
   if (n1 == 1) return 1;
   else return n1*fattoriale(n1-1);
}
int  potenza( int &n1, int esponente){
    if ( esponente == 0) return 1;
    else if (esponente == 1) return n1;
    else return n1*potenza(n1, esponente-1);
}

int main(){
    int n, esponente, comando = 0, risultato;
    while (comando != 4){
        menu(comando);
        switch(comando){
            case 1:
                input_valore(n);
                break;
            case 2:
                risultato = fattoriale(n);
                cout << "Il fattoriale di "<< n << " é " << risultato << endl;
                break;
            case 3:
                input_valore(esponente);
                risultato = potenza(n, esponente);
                cout << "La potenza  di "<< n << " alla " << esponente << " é " << risultato << endl;
                break;
            case 4 : 
                break;
            default :
                cout << "Comando inesistente"<< endl;
                break;

        }
    }
    
    return 0;
}