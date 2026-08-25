#include<iostream> 
#include<string>
using namespace std; 

struct Voo { 
    int num; 
    string cidadeOr; 
    string cidadeDe; 
    int quantMax; 
    int quantAtual; 
    int preco; 
}; 

Voo LA1; 

void menu(); 
void cadastrarVoo(); 
void consultarVoo(); 


int main() { 
    menu();
}

void menu() { 
    int escolha = 999; 
    
    do {
        system("clear");
        cout << "======= COMPANHIA AEREA =======" << endl; 
        cout << "1 - Cadastrar Voo" << endl;      
        cout << "2 - Consultar Voo" << endl; 
        cout << "3 - Reservar Passagem" << endl; 
        cout << "4 - Cancelar Reserva" << endl;
        cout << "5 - Alterar Preço da Passagem" << endl; 
        cout << "6 - Consultar Assentos Disponiveis" << endl; 
        cout << "7 - Consultar Faturamento" << endl;
        cout << "0 - Encerrar" << endl; 
        cout << "Escolha uma opcao: "; 
        cin >> escolha;
        while (escolha < 0 || escolha > 7) { 
            cout << "Digitre uma opcao valida (0 - 7): "; 
            cin >> escolha;
        }
        
        switch(escolha) { 
            case 0: 
            break;

            case 1: 
            cadastrarVoo(); 

            case 2: 
            consultarVoo();
        }
    } while (escolha != 0);

    cout << ">>>>>>> PROGRAMA FINALIZADO <<<<<<<" << endl; 
}

void cadastrarVoo() { 
    system("clear");
    cout << "======= CADASTRAR VOO =======" << endl;
    cout << "Digite o número do voo: "; 
    cin >> LA1.num; 
    cin.ignore();
    
    cout << "Digite a cidade de origem: "; 
    getline(cin, LA1.cidadeOr);
    
    cout << "Digite a cidade destino: "; 
    getline(cin, LA1.cidadeDe); 
    
    cout << "Digite a capacidade máxima da aeronave: "; 
    cin >> LA1.quantMax; 
    
    cout << "Digite a quantidade atual de pessoas cadastradas: "; 
    cin >> LA1.quantAtual; 
    
    cout << "Digite o preço da viagem em $: "; 
    cin >> LA1.preco;  
} 

void consultarVoo() { 
    
    int escolha;

    cout << "======= CONSULTAR VOO =======" << endl;
    cout << " >>> VOOS DISPONIVEIS:" << endl; 
    cout << " 0 - Voo " << LA1.num << endl; 
    cout << "Digite o voo que deseja consultar: "; 
    cin >> escolha; 
    if (escolha == LA1.num) { 
        cout << "Número do voo: " << LA1.num << endl;
        cout << "Cidade origem: " << LA1.cidadeOr << endl; 
        cout << "Cidade destino: " << LA1.cidadeDe << endl; 
        cout << "Capacidade maxima da aeronave: " << LA1.quantMax << endl; 
        cout << "Quantidade de assentos reservados: " << LA1.quantAtual << endl; 
        cout << "Preço da passagem: $" << LA1.preco << endl; 
    }

    cout << "Deseja consultar outro voo? ";
    cin >> escolha;
}
