#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

using namespace std;



int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

    string cor_azul = "\033[34m"; // CÛdigo ANSI para azul
    string cor_reset = "\033[0m";

    bool permitido;

    string editar;
    int tipo;

    string usuario,usuario_true;
    usuario_true = "Jadson";
    int i, senha, senha_true;
    senha_true = 1234;
      vector<string> Nomes_alunos (30);

 Nomes_alunos[1]="20241CSI13I0019 Arthur EugÈnio Santos Ferreira Leal"; 
 Nomes_alunos[2]="20241CSI13I0016 Ayla Samyle Santos Brito";
 Nomes_alunos[3]="20241CSI13I0013 Gabrielly Galv„o dos Santos";
 Nomes_alunos[4]="20241CSI13I0012 Guilherme Henrique Santana da Silva";
 Nomes_alunos[5]="20241CSI13I0022 Isaac Gabriel Santos Mota"; 
 Nomes_alunos[6]="20241CSI13I0005 Isabela Santos dos Santos"; 
 Nomes_alunos[7]="20241CSI13I0035 Õtalo Cezar Santos Souza"; 
Nomes_alunos[8]="20241CSI13I0006 Jo√o Gustavo Silva Souza";
 Nomes_alunos[9]="20241CSI13I0004 Jo√o Vitor Souza dos Santos";
 Nomes_alunos[10]="20241CSI13I0002 Jose Davi Lima Almeida";
 Nomes_alunos[11]="20241CSI13I0014 Kaila Evelin Nascimento Queiroz";
 Nomes_alunos[12]="20241CSI13I0031 Kaio Manoel Guimar„os Santos"; 
 Nomes_alunos[13]="20241CSI13I0021 Kau„o Oliveira Silva Souza"; 
 Nomes_alunos[14]="20241CSI13I0009 Kaylla Souza Sampaio Santos";
 Nomes_alunos[15]="20241CSI13I0003 LARISSA SOUSA COSTA";
 Nomes_alunos[16]="20241CSI13I0034 Lucas da Hora Vieira"; 
 Nomes_alunos[17]="20241CSI13I0032 Luis Gustavo Rocha Freitas"; 
 Nomes_alunos[18]="20241CSI13I0020 Marcos Carvalho Neris"; 
 Nomes_alunos[19]="20241CSI13I0010 Marcos Rios Caze"; 
Nomes_alunos[20]="20241CSI13I0029 Maria Eduarda Santos Pereira"; 
 Nomes_alunos[21]="20241CSI13I0011 Monica Souza Santos"; 
 Nomes_alunos[22]="20241CSI13I0018 Pedro Henrique da Cruz Alves";
 Nomes_alunos[23]="20241CSI13I0030 Priscila Santos da Silva";
 Nomes_alunos[24]="20241CSI13I0024 Sabrina Paix√o Ferreira";
 Nomes_alunos[25]="20241CSI13I0008 Silas Almeida Andrade";
 Nomes_alunos[26]="20241CSI13I0007 Yulo Reis Brand√o";


    do{ 
    cout<<"Digite o nome de usuario\n: ";
    cout<<"| ";
    cin>>usuario;
   cout<<"Digita a senha\n";
   cout<<"| ";
   cin>>senha;
/* caso usuariio ou senha estive errado volta o laÁo*/
    if(usuario == usuario_true && senha == senha_true){
            cout<<"\033[32mAcesso permitido\n\033[0m";
            permitido = true;
        }   
   
            else{
                cout<<"\033[31mAcesso negado\n\033[0m";
            }

   
    }while(permitido == false);

//lista dos discente
cout<<"\t\tLista dos Discente\n";
cout<<"  "<<endl;
cout<<"1- "<<Nomes_alunos[1]<<endl;
cout<<" "<<endl;
cout<<"2- "<<Nomes_alunos[2]<<endl;
cout<<" "<<endl;
cout<<"3- "<<Nomes_alunos[3]<<endl;
cout<<" "<<endl;
cout<<"4- "<<Nomes_alunos[4]<<endl;
cout<<" "<<endl;
cout<<"5- "<<Nomes_alunos[5]<<endl;
cout<<" "<<endl;
cout<<"6- "<<Nomes_alunos[6]<<endl;
cout<<" "<<endl;
cout<<"7- "<<Nomes_alunos[7]<<endl;
cout<<" "<<endl;
cout<<"8- "<<Nomes_alunos[8]<<endl;
cout<<" "<<endl;
cout<<"9- "<<Nomes_alunos[9]<<endl;
cout<<" "<<endl;
cout<<"10- "<<Nomes_alunos[10]<<endl;
cout<<" "<<endl;
cout<<"11- "<<Nomes_alunos[11]<<endl;
cout<<" "<<endl;
cout<<"12- "<<Nomes_alunos[12]<<endl;
cout<<" "<<endl;
cout<<"13- "<<Nomes_alunos[13]<<endl;
cout<<" "<<endl;
cout<<"14- "<<Nomes_alunos[14]<<endl;
cout<<" "<<endl;
cout<<"15- "<<Nomes_alunos[15]<<endl;
cout<<" "<<endl;
cout<<"16- "<<Nomes_alunos[16]<<endl;
cout<<" "<<endl;
cout<<"17- "<<Nomes_alunos[17]<<endl;
cout<<" "<<endl;
cout<<"18- "<<Nomes_alunos[18]<<endl;
cout<<" "<<endl;
cout<<"19- "<<Nomes_alunos[19]<<endl;
cout<<" "<<endl;
cout<<"20- "<<Nomes_alunos[20]<<endl;
cout<<" "<<endl;
cout<<"21- "<<Nomes_alunos[21]<<endl;
cout<<" "<<endl;
cout<<"22- "<<Nomes_alunos[22]<<endl;
cout<<" "<<endl;
cout<<"23- "<<Nomes_alunos[23]<<endl;
cout<<" "<<endl;
cout<<"24- "<<Nomes_alunos[24]<<endl;
cout<<" "<<endl;
cout<<"25- "<<Nomes_alunos[25]<<endl;
cout<<" "<<endl;
cout<<"26- "<<Nomes_alunos[26]<<endl;
cout<<" "<<endl;

cout<<"\033[34mEscreve o numero do aluno\033[0m\n ";
cin>>i;

Sleep(2000);


vector<int>notas(5);

system("cls");
 
    cout<<cor_azul<<Nomes_alunos[i]<<cor_reset<<endl;
    cout<<" "<<endl;
cout<<"\033[1;34mSIGLA\t\tTIPO\t\t\t\t  DES«RI«¬O\t\t\t\t\t\t\t\t             Nota \n\033[0m ";                
cout<<"A1\t\tTeste\t\tAtividade individual: Tipos de dados, Vari·veis e Operadores                                          "<<notas[1]<<endl ;
cout<<" "<<endl;	                	
cout<<"AT\t\t-\t\tParticipac„oo nas atividades e FrequÍncia                                                             "<<notas[2]<<endl;       
cout<<" "<<endl;	                	
cout<<"RP\tRecuperaÁ„o Paralela\t\tRecuperaÁaoo Paralela                                                                         "<<notas[3]<<endl;
cout<<" "<<endl;	                	
cout<<"A2\t\tTeste\t\tAtividade em dupla: Estruturas de Controle Condicionais                                               "<<notas[4]<<endl;  
cout<<" "<<endl;	                	
cout<<"A3\t\tProva\t        Prova sobre o assunto: Vari·veis, Operadores, E/S e Estruturas de Controle e repetiÁ„o                "<<notas[5]<<endl;


//altera nota do aluno



cout<<" "<<endl;
cout<<"Dejse altera alguma nota:  | sim | | N„o: |";
cin>>editar;
    if(editar == "sim"|| editar == "Sim" || editar =="s"){
        cout<<"Deseja editar qual(seleciona o numero)\n";
        cout<<"\033[1;34mA1 = 1\n\033[0m";
        cout<<"\033[1;34mAT = 2\n\033[0m";
        cout<<"\033[1;34mRP = 3\n\033[0m";
        cout<<"\033[1;34mA2 = 4\n\033[0m";
        cout<<"\033[1;34mA3 = 5\n\033[0m";
        cout<<"\033[1;34mTODAS = 6\n\033[0m";
        cin>>tipo;


    }





    return 0;
}