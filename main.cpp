#include <iostream>

using namespace std;



//Area de Manipulação de Arquivo

//Area de Funcionalidade de Jogo

//Inicializacao Area Menu

void Menu();
void SelecaoMenu();
void OpcaoMenuSelecionada();
void Ajuda();
void OpcaoAjudaSelecionada();
void SelecaoAjuda();
void ImprimeComoFunciona();
void ImprimeComoJogar();

//Area Main
int main () {
    Menu();
    return 0;
}

//Area do Menu

void Menu(){
    cout<<"\nCAMPO MINADO\n\n"
    <<"Digite '0' para ajuda\n"
    <<"Digite '1' para o jogo em tabuleiro.txt\n"
    <<"Digite '2' para configurar e gerar um novo jogo\n";
    SelecaoMenu();
}

void OpcaoMenuSelecionada(char opcaoM){
    switch (opcaoM){
        case('0'):
            Ajuda();
            break;
        case('1'):
            //iniciar jogo
            break;
        default:
            //seletor dificuldade+edição txt+iniciar jogo
            break;
    }
}

void SelecaoMenu(){
    char opcaoM;
    do{
        cout<<"Escolha uma opção válida:\n";
        cin>>opcaoM;
    }
    while('0'>opcaoM||opcaoM>'2');
    OpcaoMenuSelecionada(opcaoM);
}

void Ajuda(){
    cout<<"\nSelecione a ajuda requesitada:\n\n"
    <<"0- Como Funciona o Campo Minado?\n"
    <<"1- Como Jogar?\n"
    <<"Digite qualquer outra coisa para sair da ajuda!\n";
    SelecaoAjuda();
}

void OpcaoAjudaSelecionada(char opcaoA){
    switch (opcaoA) {
        case('0'):
            ImprimeComoFunciona();
            break;
        case('1'):
            ImprimeComoJogar();
            break;
        default:
            Menu();
    }
}

void SelecaoAjuda(){
    char opcaoA;
    cin>>opcaoA;
    OpcaoAjudaSelecionada(opcaoA);
}

void ImprimeComoFunciona(){
    cout<<"\nCOMO FUNCIONA O CAMPO MINADO?\n\n"
    <<"O objetivo do campo minado é revelar o campo sem que seja revelada uma bomba."
    <<"\nPara isso o jogo lhe dá 3 movimentos:"
    <<"\nRevelar uma peça,"
    <<"\nColocar uma bandeira em uma casa vazia,"
    <<"\nOu retirar uma bandeira."
    <<"\nCada peça revelada contem um número, está vazia ou contem uma bomba"
    <<"\nO número em uma peça representa o número total de casas adjacentes a ela que contem uma bomba,"
    <<"\n(sendo essas: diagonais e retas, ou seja uma área 3x3 com a peça em seu centro.)"
    <<"\nSendo assim, peças vazias tem todas as suas peças adjacentes livres de bombas!"
    <<"\nDessa maneira cabe ao jogador manter notas de todas as possiveis bombas,"
    <<"\ne por processo eliminatório revelar o campo!\n";
    Ajuda();
}

void ImprimeComoJogar(){
    cout<<"\nCOMO JOGAR:\n\n"
    <<"Interagindo com o campo:"
    <<"\ninsira a coluna (da esquerda para a direita) e a linha (de cima para baixo) nessa ordem"
    <<"Revelando uma peça:"
    <<"\ninsira a letra minúscula 'r' antes de digitar a coordenada que deseja interagir com"
    <<" seguindo a regra de interação."
    <<"\nColocando uma bandeira:"
    <<"\ninsira a letra minúscula 'b' antes de digitar a coordenada que deseja interagir com"
    <<" seguindo a regra de interação."
    <<"\nRemovendo uma bandeira:"
    <<"\ninsira a letra minúscula 'x' antes de digitar a coordenada que deseja interagir com"
    <<" seguindo a regra de interação.";
    Ajuda();
    //as letras podem ser trocadas livremente
}