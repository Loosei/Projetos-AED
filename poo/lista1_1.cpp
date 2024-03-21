#include <iostream>
#include <vector>
#include <string>
using namespace std;
class AgendaTelefonica {
private:
    struct Contato {
        string nome;
        string telefone;
    };

    vector<Contato> contatos;

public:
    void adicionarContato(const string& nome, const string& telefone) {
        Contato novoContato = {nome, telefone};
        contatos.push_back(novoContato);
    }

    void imprimirAgenda() const {
        cout << "Agenda Telefônica:\n";
        for (const auto& contato : contatos) {
            cout << "Nome: " << contato.nome << ", Telefone: " << contato.telefone << endl;
        }
    }
};

int main() {
    AgendaTelefonica agenda;
    agenda.adicionarContato("João", "123456789");
    agenda.adicionarContato("Maria", "987654321");
    agenda.adicionarContato("Pedro", "999888777");
    agenda.imprimirAgenda();
    return 0;
}

