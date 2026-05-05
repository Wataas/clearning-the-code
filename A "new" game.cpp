#include <iostream>
#include <string>
using namespace std;
void d() {cout<<"-----------------------------------------------------------------------"<< endl;}
void dc() {cout<<"------------"<< endl;}
void g() {cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<< endl;}
void pausa() {cin.get();}
//case 2= bussula, case 3 e 4= finais
//case14=gato/ case 15 = case 60-final verdadeiro/ case70-final falso

int main()
{
    bool faca=false;
    bool chave=false;
    int escolha;
    string nome;
    string senha;
    int pagina=1;
   
    cout<<"Eu sou ";
    cin>>nome;
    cin.ignore();
    
while(pagina!=0) {
        
        switch(pagina) {
            
        case 1: //introdução
             d();
             cout<<"O branco é a única coisa que você conhece. Não há paredes, não há teto, apenas um vazio infinito que se estende para todas as direções. Você está sentado em um pequeno quadrado de carpete, o único ponto em meio\n    ao nada"<< endl;
        pausa();
        
            g();
            cout<<"Bem vindo ao espaço branco, vc vive aqui desde que consegue se lembrar.";
        pausa();
            
            cout<<"Não existem portas, janelas ou paredes";
        pausa();
        
            cout<<"Você se levanta e sente o frio do chão invisível, a sua frente um gato preto te olha com desdém, a sua direita brilha suavemente a luz de um laptop velho, emitindo um fraco som de estática, junto do laptop há um caderno de desenhos com figuras que vc se recusa a visualizar";
        pausa();
            
            d();
            cout<<"olhando para cima uma lampâda preta paira pelo ar, de alguma forma ela mantém vc afastado da escuridão, enquanto a via balançar, de repente, um brilho metálico corta o vazio e uma faca cai do céu aterrisando perto de vc."<< endl;
            dc();
            cout<<"oque vc faz?"<< endl;
            cout<<"1-pegar faca."<< endl;
            cout<<"2-não pegar."<< endl;
            cin>>escolha;
            cin.ignore();
            
            if (escolha==1) {faca=true;
                    cout<<"o metal está frio.";
                pausa();
            
                  cout<<"vc sente uma sensação familiar.";
                pausa();
        
                  cout<<"vc adquiriu 'faca!'";
                
            }
            
            else if (escolha==2) {faca=false;
                    cout<<"vc decide deixar a lâmina onde esta";
                pausa();
        
                  cout<<"o brilho dela te assuta.";
                pausa();
            }
                pagina=2;
                break;
             
        case 2:
            pausa();
             d();
             cout<<"É mais um dia como todos os outros, ou seria noite? vc decide não pensar sobre isso. Mas vc sente que há algo fora do lugar, algo que não devia estar lá ";
            pausa();
            
             dc();
             cout<<"oque vc faz?"<< endl;
             cout<<"1-investigar"<< endl;
             cout<<"2-nada"<< endl;
             cin>>escolha;
             cin.ignore();
             
            if (escolha==1 && faca==false) {
                pagina=3;
            }
            else if (escolha==1 && faca==true) {
                pagina=10;
            }
            else if (escolha==2) {
                pagina=4;
            }
                break;
    
        case 3:
             d();
            cout<<"vc se encaminha para o laptop ao mesmo tempo que evita o gato preto. enquanto logava sua conta, evitava a todo custo olhar para o bloco de notas"<< endl;
        pausa();
            
            cout<<"O laptop finalmente liga, o calor aquece seu colo"<< endl;
        pausa();
        
            cout<<"olhando a área de trabalho, há apenas 2 arquivos, no qual um deles era preciso de uma senha da qual vc não faz ideia, ao acessar o arquivo sem senha, vc encontra um diário de muitos dias, talvez infinitos dias contados:"<< endl;
        pausa();
            
            cout<<"dia ??? - Hoje, eu passei tempo no espaço branco, tudo estava ok"<< endl;
            cout<<"dia ??? - Hoje, eu passei tempo no espaço branco, tudo estava ok"<< endl;
            cout<<"dia ??? - Hoje, eu visitei meus amigos, tudo estava ok"<< endl;
            cout<<"dia ??? - Hoje, eu passei tempo no espaço branco, tudo estava ok"<< endl;
            cout<<"dia ??? - Hoje, visitei meus amigos, tudo estava ok"<< endl;
            cout<<"..."<< endl;
        pausa();
            
            d();
            cout<<"Lendo essas notas, vc sente um gosto amargo na boca e se sente enjôado. Vc lembra quem vc é.";
        pausa();
            
            cout<<"vc não sente vontade de sair do espaço branco.";
        pausa();
        
            cout<<"vc cria uma nova nota no laptop e escreve:"<< endl;
        pausa();
        
            cout<<"dia ??? - Hoje, eu passei tempo no espaço branco, tudo estava ok"<< endl;
        pausa();
        
            cout<<"              --------FIM DA INTRODUÇÃO----------"<< endl;
            cout<<"FINAL: Amanhã sera igual."<< endl;
            cout<<"Vc vive aqui desde que consegue se lembrar";
            return 0;
            
        case 10:
              d();
            cout<<"Vc se aproxima do gato preto, e logo se lembra de que seu nome é Meawo, além de que 'O gato' na verdade é 'A gata'.";
        pausa();
        
            cout<<"Ao mesmo tempo que acaricia o gato, vc se da conta que ela é o unico fator que faz com oque vc não esteja de fato sozinho nesse momento";
        pausa();
        
             cout<<"Vc aprecia a companhia dela, e se sente bem consigo mesmo";
        pausa();
        
             dc();
             cout<<"Oque vc faz?"<< endl;
             cout<<"1-continuar a acariciar o gato"<< endl;
             cout<<"2-seguir a investigação"<< endl;
             cin>>escolha;
             cin.ignore();
             if (escolha==1) {
                 pagina=11;
             }
             else if (escolha==2) {
                 pagina=12;
             }
                 break;
                 
        case 11:
              cout<<"acariciando ainda mais o gato, ele se irrita e te arranha com frieza";
            pausa();
             
             cout<<"AIII!";
            pausa();
            
             cout<<"O gato volta a te olhar com desdém";
            pausa();
            
            pagina=13;
            break;
            
        case 12:
            cout<<"ao virar de costas para o gato, vc o ouve miar como se quisesse mais carinho, mas por algum motivo vc sente um ar maquiavelico junto de seus miados, e seguindo seus instintos vc o ignora.";
            pausa();
            
            pagina=13;
            break;
            
        case 13:
              cout<<"Se virando de frente ao laptop, vc pressiona o botão de login, e espera a maquina processar seus dados, enquanto isso, o bloco de desenhos chama sua atenção";
           pausa();
             
             cout<<"Vc estende seu braço em direção ao bloco de desenhos e sente uma leve hesitação, mas vc sente algo familiar no seu bolso e se enche de coragem, o pegando e o abrindo:";
           pausa();
             
             cout<<"<Pagina 1> - Um desenho surrealista de Meawo segurando uma cloche";
           pausa();
             
              cout<<"<Pagina 2> - Vc vê um retrato assinado, e ao olhar a assinatura esta escrito: '"<<nome<< "'. Este sou eu, vc lembra?";
           pausa();
           
              cout<<"<Pagina 3> - Vc vê rostos familiares, estes são meus amigos";
           pausa();
              
              cout<<"<Pagina 4> - esta intitulada como 'A verdade' e abaixo dentro de um espaço oco, se encontra uma chave, tão negra quanta a lâmpada que paira pelo ar.";
           pausa(); 
           
              dc();
              cout<<"Oque vc deseja fazer?"<< endl;
              cout<<"1-pegar chave"<< endl;
              cout<<"2-deixa-la onde esta"<< endl;
              cin>>escolha;
              cin.ignore();
              if (escolha==1) {
                      chave=true;
                      cout<<"Vc adquiriu 'Verdade!'";
                    pausa();  
                
                }
              else if (escolha==2) {
                      chave=false;
                       cout<<"Vc rejeitou 'verdade'";
                     pausa();
               }
               
                     pagina=14;
                     break;
         
         case 14:
              d();
              cout<<"Logo vc ouve as ventoinhas do laptop, e se vira de frente para ele, soltando o bloco de notas no chão. Na área de trabalho há dois arquivos, e ao acessar o primeiro, é pedido uma senha";
            pausa();
            
              cout<<"-----------------------------------------------------------"<< endl;
              cout<<"a senha possue 5 caracteres, eu devo ser capaz de acerta-la"<< endl;
              cout<<"Digite a senha abaixo:"<< endl;
              cin>>senha; 
              cin.ignore();
              
              if (senha=="meawo" || senha=="Meawo") {
                  
                 pausa();
                  cout<<"acesso permitido!"<< endl;
                  pagina=15;
                  
                }
                
              else {
              
                   cout<<"Acesso negado!";
                pausa();
                
                   cout<<"Enquanto tenta lembrar sua senha, a tela do laptop muda mostrando apenas uma sequência de palavras:";
                 pausa();
                
                   cout<<"---------------------------"<< endl;
                   cout<<"'Vc esqueceu, como pode?!'"<< endl;
                   cout<<"'Vc esqueceu, como pode?!'"<< endl;
                   cout<<"'Vc esqueceu, como pode?!'"<< endl;
                   cout<<"'Vc esqueceu, como pode?!'"<< endl;
                   cout<<"---------------------------"<< endl;
                 pausa();
                
                   cout<<"Logo o laptop se mergulha em trevas e o engole por completo sem chance de fuga";
                 pausa();
                
                   cout<<"       ------------FIM DA INTRODUÇÃO?-------------"<< endl;
                   cout<<"FINAL: consumido"<< endl;
                   cout<<"tente se lembrar das regras de diretrizes de senhas do google, nem todos a seguem";
                   return 0;
                  
                }
                   break;
                   
         case 15:
               cout<<"Vendo o arquivo, vc nota que na verdade ele era um app de rede social, e para sua surpresa na caixa de entrada estava 'Vc tem 1 nova mensagem!'";
            pausa();
            
               cout<<"Antes de clicar, vc novamenta hesita, mas então vc sente algo familiar em seu bolso que te enche de coragem. E com aflição vc visualiza a seguinte mensagem: ";
            pausa();
            
               d();
               cout<<"<Isaak> - Falaaaaaa, como vc tá? " <<nome<< ". Faz tempo que a gente não une o pessoal, se puder venha hoje, vai ser muuuuito legal"<< endl;
               d();
            pausa();
            
               cout<<"Apos ler a mensagem, uma porta branca de cotorno preto aparece adiante de vc";
            pausa();
            
               cout<<"Vc desliga o laptop e ao se aproximar da porta, nota que há uma fechadura com o mesmo formato da chave negra. Convêniente, não?";
            pausa();
            
               cout<<"Vc fica de frente a porta e sente um leve aperto no peito. Vc sente como se houvesse apenas uma escolha a ser tomada";
            pausa();
                dc();
                cout<<"abrir porta?"<< endl;
                cout<<"1-sim"<< endl;
                cin>>escolha;
                cin.ignore();
                if (escolha==1 && chave==true) {
                    
                    pagina=60;
                }
                else if (escolha==1 && chave==false) {
                    
                    pagina=70;
                }
                
                    break;
                
         case 60: 
               cout<<"Vc encaixa a chave na fechadura, e a porta se abre adiante de vc"<< endl;
            pausa();
            
               cout<<"do outro lado...";
            pausa();
            
               cout<<"Luz, cores, algo genuínamente confortavel";
            pausa();
            
               cout<<"Vc sente que pode entrar, mas tbm sente que caso entre deixará algo para trás..."<< endl;
               dc();
               cout<<"Oque vc faz?"<< endl;
               cout<<"1-Entrar (fugir)"<< endl;
               cout<<"2-ficar (encarar a verdade)"<< endl;
               cin>>escolha;
               cin.ignore();
               if (escolha==1) {
                   
                   pagina=61;
                }  
                else if (escolha==2) {
                    
                    pagina=62;
                }
                    break;
              
         case 61:
               cout<<"Vc entra"<< endl;
             pausa();
            
               cout<<"O branco desaparece e as cores preenchem sua visão"<< endl;
             pausa(); 
            
               cout<<"Tudo parece perfeito"<< endl;
             pausa();  
               cout<<"Mas no fundo algo continua errado...";
             pausa();
            
               cout<<"      ----------FIM DA INTRODUÇÃO------------"<< endl;
               cout<<"FINAL: Ilusão perfeita"<< endl;
               cout<<"dia ??? - Hoje, eu visitei meus amigos, tudo estava ok";
               return 0;
              
         case 62:
               cout<<"Vc não entra"<< endl;
               cout<<"seus pés não se movem"<< endl;
               cout<<"Algo dentro de vc... não permite"<< endl;
               cout<<"A luz começa a enfraquecer";
             pausa();
           
               cout<<"A porta... muda";
             pausa();
            
               cout<<"Vc observa cético a porta se contorcendo e descamando sua madeira como se fosse uma aranha, ate que no final ela muda por completo deixando de ser uma porta e passando a ser um grande espelho";
             pausa();
             
               cout<<"Vc se vê, mas não como deveria...";
             pausa();
             
               cout<<"algo parece diferente...";
             pausa();
             
               cout<<"Algo está atras de vc...";
             pausa();
             
               cout<<"de repente sua visão fica um breu,";
             pausa();
             
               cout<<"Vc abre seus olhos e quando olha para o lado vê:";
             pausa();
             
               cout<<"03:33 A.M";
             pausa();
             
               cout<<"         ----------FIM DA INTRODUÇÃO--------------"<<  endl;
               cout<<"FINAL: A verdade"<< endl;
               cout<<"Meus pensamentos te seguirão nos seus sonhos";
               return 0;
                
        case 70:
               cout<<"A porta não abre";
             pausa();
               cout<<"Esqueceu algo importante?";
             pausa();
             
               cout<<"Vc tenta forçar a porta, mas nada funciona. Quando vc ja estava prestes a desmoronar, vc sente algo familiar em seu bolso...";
             pausa();
             
               cout<<"Vc segura e olha fixamente seu reflexo na faca";
             pausa();
             
               cout<<"Vc não quer fazer isso, mas algo em vc já decidiu";
             pausa();
             
               cout<<"...";
             pausa();
             
               cout<<"Vc não lembra do que aconteceu em seguida";
             pausa();
            
               cout<<"siêncio";
             pausa();
             
               cout<<"escuro";
             pausa();
             
               cout<<"vc abre seus olhos, mas antes de olhar para o lado, vc sente seu esôfago em atividade"<< endl;
               cout<<"Vc larga a faca e abaixa a cabeça para fora de seu travesseiro.";
             pausa();
             
               cout<<"nesse meio tempo vc se questiona:"<< endl;
               cout<<"'pq eu estava com aquilo afinal?'";
             pausa();
             
               cout<<"       ------------FIM DA INTRODUÇÃO-------------"<< endl;
               cout<<"FINAL: Ruptura"<< endl;
               cout<<"Vc não lembra do que acontece em seguida";
               return 0;  
               
         case 4:
               cout << "Voce decide nao fazer nada." << endl;
               cout << "..." << endl;
               cout << "O silencio continua." << endl;
               cout << "O branco continua." << endl;
               cout << "Voce continua. O tempo passa." << endl;
               cout << "Ou talvez nao." << endl;
               cout << "Voce nao sabe dizer. Algo muda." << endl;
               cout << "Nao no espaco." << endl;
               cout << "Em voce." << endl;
             pausa();
             
               cout << "suas mãos, pés e sentidos sumiram"<< endl;
             pausa();
             
               cout << "Vc e o vazio se tornam um só"<< endl;
             pausa();
             
               cout << "Vc desaparece"<< endl;
             pausa();
             
               cout<<"        --------------FIM DA INTRODUÇÃO-------------"<< endl;
               cout<<"FINAL: vazio"<< endl;
               cout<<"Vc escolheu não escolher";
               return 0;  
                           
        
              
        
             
        
        
        }
        
        
        
        
    }

}
