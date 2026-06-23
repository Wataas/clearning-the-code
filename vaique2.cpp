#include <iostream>
#include <termios.h>
#include <unistd.h>
using namespace std;
int getch(void) {
  int ch;
  struct termios oldt;
  struct termios newt;
  tcgetattr(STDIN_FILENO, &oldt); // guarda as configurações antigas
  newt = oldt; // copia as configurações antigas para as novas
  newt.c_lflag &= ~(ICANON | ECHO); // faz uma mudança nas novas configurações
  tcsetattr(STDIN_FILENO, TCSANOW, &newt); // aplica as novas configurações
  ch = getchar();                          // pega a tecla
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // restaura as configurações antigas
  return ch;                               // retorna o caractere lido
}
void SetCursorPos(int XPos, int YPos) {
  printf("\033[%d;%dH", YPos + 1, XPos + 1);
}
void dc() { cout << "==========================================" << endl; }

int main () {
    srand(time(0));
    int escolha;
    int pagina = 1;
    int velocidade;
    bool jogando;
    int resposta_jogador;
    bool mapa1_resolvido=false;
    bool mapa2_resolvido=false;
    
    while(pagina != 0) {
        
        switch(pagina) {
                
            case 1: // MENU PRINCIPAL
                dc();
                cout << "||         BEM VINDO AO SOKOBAN!        ||" << endl;
                dc();
                cout << "||                                      ||" << endl;
                cout << "||  [ 1 ]  ========  JOGAR    ========  ||" << endl;
                cout << "||  [ 2 ]  ========  TUTORIAL ========  ||" << endl;
                cout << "||  [ 3 ]  ========  SOBRE    ========  ||" << endl;
                cout << "||  [ 4 ]  ========  SAIR     ========  ||" << endl;
                cout << "||                                      ||" << endl;
                dc();
                cout << "Escolha uma opcao >> ";
                cin >> escolha;
                
                if (escolha == 1) {
                    pagina = 5;
                    system("clear");
                    usleep(600000);
                    
                   }
                else if (escolha == 2) {
                    pagina = 2;
                    system("clear");
                    usleep(600000);
                }
                else if (escolha == 3) {
                     pagina = 3;
                    system("clear");
                    usleep(600000);
                }
                else if (escolha == 4) {
                    pagina = 0; 
                    system("clear");
                    cout << "Obrigado por jogar! Ate breve!" << endl;
                }
                
                else {cout << "Opcao invalida" << endl;
                    usleep(1000000);
                    system("clear");
                }
                break;
                
            case 3:
                 dc();
                cout << "|| //==produzido e programado por Jonas==// ||" << endl;
                cout << "|| //==feito em junho/2026==//              ||" << endl;
                cout << "|| //==supervisionado por felsky==//        ||" << endl;
                cout << "|| //==digite um numero para voltar==//     ||" << endl;
                dc();
                cout << "digite aqui >> ";  cin >> escolha;
                pagina=1;
                system("clear");
                break;
                
            case 2:
                dc();
                cout << "||                COMO JOGAR            ||" << endl;
                dc();
                cout << "||  Use as seguintes teclas para jogar: ||" << endl;
                cout << "||    [ W ] -> Mover para CIMA          ||" << endl;
                cout << "||    [ A ] -> Mover para ESQUERDA      ||" << endl;
                cout << "||    [ S ] -> Mover para BAIXO         ||" << endl;
                cout << "||    [ D ] -> Mover para DIREITA       ||" << endl;
                cout << "||                                      ||" << endl;
                cout << "||  Objetivo:                           ||" << endl;
                cout << "||  Empurre todas as caixas(@) ate as   ||" << endl;
                cout << "||  posicoes marcadas no mapa(~).       ||" << endl;
                cout << "||                                      ||" << endl;
                cout << "||  Atencao: Voce nao pode puxar caixas ||" << endl;
                cout << "||  e nem atravessar paredes!           ||" << endl;
                cout << "||                                      ||" << endl;
                cout << "||  [ Q ] -> Desistir da partida        ||" << endl;
                dc();
                cout << "Digite um numero para voltar >> ";
                cin >> escolha;
                
                pagina = 1;
                system("clear");
                break;
                
            case 5:
                if (mapa1_resolvido && mapa2_resolvido) {
                    system("clear");
                    dc();
                    cout << "||     PARABENS! VOCE ZEROU O SOKOBAN!    ||" << endl;
                    cout << "||   Todos os estoques estao organizados! ||" << endl;
                    cout << "||     Retornando ao Menu Principal...    ||" << endl;
                    dc();
                    usleep(3000000);
                    mapa1_resolvido = false; // Reseta o progresso para se quiser jogar de novo
                    mapa2_resolvido = false;
                    pagina = 1;
                    system("clear");
                    break;
                }
                
                dc();
                cout << "||              SELECIONE O MAPA        || " << endl;
                dc();
                cout << "||  [ 1 ] -> Mapa nivel 1: Atacadão     || ";
                if (mapa1_resolvido) {
                    cout << "<SOLUCIONADO>";
                }
                cout << endl;
            
                cout << "||  [ 2 ] -> Mapa nivel 2: copy         || ";
                if (mapa2_resolvido) {
                    cout << "<SOLUCIONADO>";
                }
                cout << endl;
                  
                cout << "||  [ 3 ] -> Voltar ao Menu Principal   || " << endl;
                dc();
                cout << "Escolha um mapa >> ";
                cin >> escolha;
            
                if (escolha == 1) {
                    pagina = 6; 
                    usleep(600000);
                    system("clear");
                } 
                else if (escolha == 2) {
                    pagina = 7; 
                    usleep(600000);
                    system("clear");
                } 
                else if (escolha == 3) {
                    pagina = 1;
                     usleep(600000);
                    system("clear");
                } 
                else {
                    cout << "Opcao invalida!" << endl;
                    usleep(600000);
                    system("clear");
                }
                break;
                
            case 6:
                { 
                char mapa[12][7] = {
                    {'#', '#', '#', '#', '#', '#', '#'},
                    {'#', '7', '#', ' ', ' ', '~', '#'},
                    {'#', ' ', '#', ' ', ' ', '~', '#'},
                    {'#', ' ', '#', ' ', '@', '#', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'X', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'X', 'X', ' ', '#'},
                    {'#', ' ', ' ', 'X', ' ', ' ', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'x', '@', ' ', '#'},
                    {'#', 'W', ' ', ' ', ' ', ' ', '#'},
                    {'#', '#', '#', '#', '#', '#', '#'}
                };
                
                
                
                char gabarito[12][7] = {
                    {'#', '#', '#', '#', '#', '#', '#'},
                    {'#', ' ', '#', ' ', ' ', '~', '#'},
                    {'#', ' ', '#', ' ', ' ', '~', '#'},
                    {'#', ' ', '#', ' ', ' ', '#', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'X', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'X', 'X', ' ', '#'},
                    {'#', ' ', ' ', 'X', ' ', ' ', '#'},
                    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                    {'#', ' ', ' ', 'x', ' ', ' ', '#'},
                    {'#', 'W', ' ', ' ', ' ', ' ', '#'},
                    {'#', '#', '#', '#', '#', '#', '#'}
                };
            
             
                int Lx = 1; 
                int Ly = 1; 
            
                bool jogando_mapa = true;
            
                while (jogando_mapa) {
                    usleep(300000);
                    system("clear");
            
                    // Desenhar o mapa
                    dc();
                    cout << "||       SOKOBAN - MAPA 1: Atacadão         ||" << endl;
                    dc();
                    
                    // Desenhar o mapa com caixas coloridas
                    for (int i = 0; i < 12; i++) {
                        cout << "      "; 
                        for (int j = 0; j < 7; j++) {
                            // Se for uma caixa E no gabarito for um alvo -> PINTA DE VERDE
                            if (mapa[i][j] == '@' && gabarito[i][j] == '~') {
                                cout << "\033[32m" << mapa[i][j] << "\033[0m ";
                            }
                            // Se for um alvo sozinho -> pode pintar de vermelho/amarelo se quiser destacar
                            else if (mapa[i][j] == '~') {
                                cout << "\033[31m" << mapa[i][j] << "\033[0m ";
                            }
                            // Qualquer outra coisa desenha normal
                            else {
                                cout << mapa[i][j] << " ";
                            }
                        }
                        cout << endl;
                    }
                    
                    dc();
                    cout << "[W, A, S, D] Mover  |  [Q] Desistir" << endl;
            
                    char comando = getch();
            
                    // Próxima posição pretendida pelo jogador
                    int proximo_x = Lx;
                    int proximo_y = Ly;
            
                    if (comando == 'w' || comando == 'W') { proximo_x--; }
                    else if (comando == 's' || comando == 'S') { proximo_x++; }
                    else if (comando == 'a' || comando == 'A') { proximo_y--; }
                    else if (comando == 'd' || comando == 'D') { proximo_y++; }
                    else if (comando == 'q' || comando == 'Q') {
                        jogando_mapa = false;
                        pagina = 5; 
                        usleep(600000);
                        system("clear");
                        break;
                    }
            
                    // 1. SE A PRÓXIMA POSIÇÃO FOR VAZIA OU UM ALVO
                    if (mapa[proximo_x][proximo_y] == ' ' || mapa[proximo_x][proximo_y] == '~') {
                        // Restaura o que estava embaixo do player usando o gabarito
                        mapa[Lx][Ly] = gabarito[Lx][Ly];
                        Lx = proximo_x;
                        Ly = proximo_y;
                        mapa[Lx][Ly] = '7'; // Desenha o player no novo lugar
                    }
                    // 2. SE A PRÓXIMA POSIÇÃO FOR UMA CAIXA ('C')
                    else if (mapa[proximo_x][proximo_y] == '@') {
                        // Calcula a posição seguinte à caixa (para onde ela seria empurrada)
                        int caixa_x = proximo_x + (proximo_x - Lx);
                        int caixa_y = proximo_y + (proximo_y - Ly);
                        
                        // Se o espaço após a caixa for vazio ou alvo, ela pode ser empurrada!
                        if (mapa[caixa_x][caixa_y] == ' ' || mapa[caixa_x][caixa_y] == '~') {
                            // Move a caixa
                            mapa[caixa_x][caixa_y] = '@';
                            
                            // Move o player para onde a caixa estava
                            mapa[Lx][Ly] = gabarito[Lx][Ly];
                            Lx = proximo_x;
                            Ly = proximo_y;
                            mapa[Lx][Ly] = '7';
                        }
                    }
                    
                    // 3. VERIFICAÇÃO DE VITÓRIA
                    // Vamos checar se ainda existe algum ponto '.' que não tem uma caixa em cima
                    bool ganhou = true;
                    for (int i = 0; i < 12; i++) {
                        for (int j = 0; j < 7; j++) {
                            // Se no gabarito tem '.' mas no mapa não tem 'C', significa que falta preencher
                            if (gabarito[i][j] == '~' && mapa[i][j] != '@') {
                                ganhou = false;
                            }
                        }
                    }
                    
                    if (ganhou) {
                        usleep(900000);
                        system("clear");
                        dc();
                        cout << "||                VITORIA!                ||" << endl;
                        dc();
                        cout << "   Voce organizou o estoque com sucesso!   " << endl;
                        usleep(2000000); // 2 segundos de comemoração
                        
                        mapa1_resolvido = true; // Marca como feito!
                        jogando_mapa = false;
                        pagina = 5; // Volta para a seleção de mapas
                        system("clear");
                    }
                }
                break;
            }

            case 7:
                  { 
                char mapa[7][7] = {
                    {'#', '#', '#', '#', '#', '#', '#'},
                    {'#', '7', ' ', ' ', '~', '~', '#'},
                    {'#', ' ', ' ', '@', ' ', '~', '#'},
                    {'#', ' ', '@', ' ', '@', '@', '#'},
                    {'#', ' ', '@', '@', ' ', '~', '#'},
                    {'#', 'W', ' ', ' ', ' ', ' ', '#'},
                    {'#', '#', '#', '#', '#', '#', '#'}
                };
                
                
                
                 char gabarito[7][7] = {
                    {'#', '#', '#', '#', '#', '#', '#'},
                    {'#', ' ', ' ', ' ', '~', '~', '#'},
                    {'#', ' ', ' ', ' ', ' ', '~', '#'},
                    {'#', ' ', ' ', ' ', '~', '~', '#'},
                    {'#', ' ', ' ', ' ', ' ', '~', '#'},
                    {'#', 'W', ' ', ' ', ' ', ' ', '#'},
                    {'#', '#', '#', '#', '#', '#', '#'}
                };
            
             
                int Lx = 1; 
                int Ly = 1; 
            
                bool jogando_mapa = true;
            
                while (jogando_mapa) {
                    usleep(300000);
                    system("clear");
            
                    // Desenhar o mapa
                    dc();
                    cout << "||       SOKOBAN - MAPA 2: Copy         ||" << endl;
                    dc();
                    
                     for (int i = 0; i < 7; i++) {
                        cout << "      "; 
                        for (int j = 0; j < 7; j++) {
                            // Se for uma caixa E no gabarito for um alvo -> PINTA DE VERDE
                            if (mapa[i][j] == '@' && gabarito[i][j] == '~') {
                                cout << "\033[32m" << mapa[i][j] << "\033[0m ";
                            }
                            // Se for um alvo sozinho -> pode pintar de vermelho/amarelo se quiser destacar
                            else if (mapa[i][j] == '~') {
                                cout << "\033[31m" << mapa[i][j] << "\033[0m ";
                            }
                            // Qualquer outra coisa desenha normal
                            else {
                                cout << mapa[i][j] << " ";
                            }
                        }
                        cout << endl;
                    }
                    
                    dc();
                    cout << "[W, A, S, D] Mover  |  [Q] Desistir" << endl;
            
                    char comando = getch();
            
                    // Próxima posição pretendida pelo jogador
                    int proximo_x = Lx;
                    int proximo_y = Ly;
            
                    if (comando == 'w' || comando == 'W') { proximo_x--; }
                    else if (comando == 's' || comando == 'S') { proximo_x++; }
                    else if (comando == 'a' || comando == 'A') { proximo_y--; }
                    else if (comando == 'd' || comando == 'D') { proximo_y++; }
                    else if (comando == 'q' || comando == 'Q') {
                        jogando_mapa = false;
                        pagina = 5; 
                        usleep(600000);
                        system("clear");
                        break;
                    }
            
                    // 1. SE A PRÓXIMA POSIÇÃO FOR VAZIA OU UM ALVO
                    if (mapa[proximo_x][proximo_y] == ' ' || mapa[proximo_x][proximo_y] == '~') {
                        // Restaura o que estava embaixo do player usando o gabarito
                        mapa[Lx][Ly] = gabarito[Lx][Ly];
                        Lx = proximo_x;
                        Ly = proximo_y;
                        mapa[Lx][Ly] = '7'; // Desenha o player no novo lugar
                    }
                    // 2. SE A PRÓXIMA POSIÇÃO FOR UMA CAIXA ('C')
                    else if (mapa[proximo_x][proximo_y] == '@') {
                        // Calcula a posição seguinte à caixa (para onde ela seria empurrada)
                        int caixa_x = proximo_x + (proximo_x - Lx);
                        int caixa_y = proximo_y + (proximo_y - Ly);
                        
                        // Se o espaço após a caixa for vazio ou alvo, ela pode ser empurrada!
                        if (mapa[caixa_x][caixa_y] == ' ' || mapa[caixa_x][caixa_y] == '~') {
                            // Move a caixa
                            mapa[caixa_x][caixa_y] = '@';
                            
                            // Move o player para onde a caixa estava
                            mapa[Lx][Ly] = gabarito[Lx][Ly];
                            Lx = proximo_x;
                            Ly = proximo_y;
                            mapa[Lx][Ly] = '7';
                        }
                    }
                    
                    // 3. VERIFICAÇÃO DE VITÓRIA
                    // Vamos checar se ainda existe algum ponto '.' que não tem uma caixa em cima
                    bool ganhou = true;
                    for (int i = 0; i < 7; i++) {
                        for (int j = 0; j < 7; j++) {
                            // Se no gabarito tem '.' mas no mapa não tem 'C', significa que falta preencher
                            if (gabarito[i][j] == '~' && mapa[i][j] != '@') {
                                ganhou = false;
                            }
                        }
                    }
                    
                    if (ganhou) {
                        usleep(900000);
                        system("clear");
                        dc();
                        cout << "||                VITORIA!                ||" << endl;
                        dc();
                        cout << "   Voce organizou o estoque com sucesso!   " << endl;
                        usleep(2000000); // 2 segundos de comemoração
                        
                        mapa2_resolvido = true; // Marca como feito!
                        jogando_mapa = false;
                        pagina = 5; // Volta para a seleção de mapas
                        system("clear");
                    }
                }
                break;
            }


        }
    }
}
