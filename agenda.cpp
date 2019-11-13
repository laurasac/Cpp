#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int numero_contatti = 30;

void mostra_contatti(string lista[30][2]){
	if(lista[0][0] == ""){
		cout<< "Nessun contatto trovato"<<endl;
	}else{
        for(int i = 0; i < numero_contatti; i++){
            if (lista[i][0] != ""){
                cout << i+1 << ":" << lista[i][0] <<": " << lista[i][1] << endl;
            }
        }
    }
    
	cout << "---------------------"<< endl;
	cout << "B: Aggiungi contatto"<< endl;
	cout << "C: Elimina contatto"<< endl;
	cout << "D: Esci"<< endl;
};

int aggiungi_contatto(string lista[30][2]){
    int i ;
    string nome, cognome, numero;
        
    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome:";
    cin >> cognome;
	cout << endl <<"Numero: ";
    cin >> numero ;

        
    for( i = 0; i < numero_contatti; i++){
        if (lista[i][0] == ""){
            lista[i][0] = nome+ " "+cognome;
            lista[i][1] = numero;
            break;
        }
    }
    
    if ( i == numero_contatti){
        cout << endl <<"Agenda piena! Premere 1 per tornare alla lista contatti"<< endl;
        cin >> i;

    }  
};

void elimina_contatto(string lista[30][2]){
    int contatto;
    
    cout << "Quale contatto si vuole eliminare? ";
    cin >> contatto;
    
    for(int i = 0; i< numero_contatti; i++){
        if (i == contatto-1){
            for( int y = i; y < numero_contatti; y++){
                if(lista[y+1][0] != ""){
                    lista[y][0] = lista[y+1][0];
                    lista[y][1] = lista[y+1][1];
                }else{
                    lista[y][0] = "";
                    lista[y][1] = "";
                    break;
                }
            }
            break;
        }
    }
};

int main(){
    char comando;
	string contatti[numero_contatti][2];
	
    cout << "Benvenuto nella tua agenda, scegli l'azione che vuoi eseguire:"<<endl;
	cout << "A: Mostra contatti"<< endl;
	cout << "B: Aggiungi contatto"<< endl;
	cout << "C: Elimina contatto"<< endl;
	cout << "D: Esci"<< endl;
	cin >> comando;
	
    while(comando != 'D'){
		if(getenv("windir") == NULL){
            system("clear");
        } else {
            system("cls");
        }
        
        switch(comando){
			case 'A':
				mostra_contatti(contatti);
				cin >> comando;
				break;
			case 'B':
				aggiungi_contatto(contatti);
				comando = 'A';
				break;
			case 'C':
				elimina_contatto(contatti);
				comando = 'A';
				break;
			default:
                cout << "Azione non riconosciuta, premere 1 per tornare indietro";
                cin >> comando;
                comando = 'A';
				break;
		}
				
	}

    return 0;
}
