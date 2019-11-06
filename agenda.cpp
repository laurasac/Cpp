#include <iostream>
#include <string>

using namespace std;
void mostra_contatti(string lista[30][2]){
	if(lista[0][0] == ""){
		cout<< "Nessun contatto trovato"<<endl;
	}
	
	cout << "---------------------"<< endl;
	cout << "2: Aggiungi contatto"<< endl;
	cout << "3: Elimina contatto"<< endl;
	cout << "4: Esci"<< endl;
};
void aggiungi_contatto(string lista[30][2]);

void elimina_contatto(string lista[30][2]);

int main(){
	int numero_contatti = 30, comando ;
	string contatti[numero_contatti][2];
	cout << "Benvenuto nella tua agenda, scegli l'azione che vuoi eseguire:"<<endl;
	cout << "1: Mostra contatti"<< endl;
	cout << "2: Aggiungi contatto"<< endl;
	cout << "3: Elimina contatto"<< endl;
	cout << "4: Esci"<< endl;
	cin >> comando;
	while(comando != 4){
		switch(comando){
			case 1:
				mostra_contatti(contatti);
				cin >> comando;
				break;
			case 2:
				//aggiungi_contatto(contatti);
				comando = 1;
				break;
			case 3:
				//elimina_contatto(contatti);
				comando = 1;
				break;
			default:
				break;
				}
				
		}
	}
