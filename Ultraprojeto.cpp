//Biblioteca da liguagem:
#include <iostream>
    #include <stdlib.h>
    #include <conio.h>
    #include <time.h>
    #include <stdio.h>
    #include <windows.h>
    #include <cmath>
    #include <unistd.h>

//para usar os pacotes das bibliotecas
using namespace std;

void discoverCaracterType(){
	
	string caracter;
	
	cout<<"\n\n\n\t\t\t  Qual caracter voc� deseja descobrir ?";
	cin>> caracter;
	
	if((caracter =="a" ) || (caracter == "e") || (caracter =="i" ) || (caracter == "o") || (caracter == "u")){
	
	
	cout<<"\n\n\t\t\t\t Seu caracter � uma vogal";
	
	}else {
		
		if((caracter == "b") || (caracter == "c") || (caracter == "d") || (caracter == "f") || (caracter == "g") || (caracter == "h") || (caracter == "j") || (caracter == "k") || (caracter == "l") || (caracter == "m") || (caracter == "n") || (caracter == "p") || (caracter == "q") || (caracter == "r") || (caracter == "s") || (caracter == "t") || (caracter == "v") || (caracter == "w") || (caracter == "x") || (caracter == "y") || (caracter == "z")){
	
			cout<<"\n\n\t\t\t\t Seu caracter � uma consoante";
		}else {
			
			if((caracter =="0" ) || (caracter == "1") || (caracter =="2" ) || (caracter == "3") || (caracter == "4") || (caracter =="5" ) || (caracter == "6") || (caracter =="7" ) || (caracter == "8") || (caracter == "9")){
			
				cout<<"\n\n\t\t\t\t Seu caracter � um numeral";
			}else {
				
			cout<<"\n\n\t\t\t\t � um caracter especial";	
			}
			
		}
	}
}

	void discoverCaracterLemghth(){
		
		string caracterLength;
		
		cout<<"\n\n\n\t\t\t  Digite uma palavra para descobrir o tamanho dela ";
		cin>>caracterLength;
		cout<<"\n\n\n\t\t\t  A quantidade de caracteres na palavra: "<<caracterLength.length();
		
		getch();
		system("cls");
		
	}
	
	void percentageCalculation(){
		
		double initialCapital;
		double interestRate;
		int timeMonth;
		double totalRate;
	
		cout<<"\n\n\n\t\t\t  Qual valor do capital ? ";
		cin>>initialCapital;
		cout<<"\n\n\n\t\t\t  Qual valor da taxa de juros ? ";
		cin>>interestRate;
		cout<<"\n\n\n\t\t\t  Qual � o tempo do emprestimo ? [em meses]";
		cin>>timeMonth;
		totalRate =  (initialCapital * interestRate * timeMonth) / 100;
		cout<<"\n\n\n\t\t\t  Total de juro simples � igual a:" << totalRate; 
		
		
		
	}

//fun��o principal que sera chamada:
main() {

//para poder usar(,/?/!/./�)
    setlocale(LC_ALL, "Portuguese");

    int optionsMenu = 0;

//pata mudar as cores da letra
    system("color 3");


    do{
	    cout<<"\n\n\n\t\t\t\t+-----------------------------------------------------------------------------------+\n"
            <<"\t\t\t\t�                      Escolha uma tarefa                                  �\n"
            <<"\t\t\t\t�-----------------------------------------------------------------------------------�\n"
            <<"\t\t\t\t� 1. Descobrir que tipo de caracter voc� digitou (digite apenas um).                 �\n"
            <<"\t\t\t\t� 2  Descobrir quantos caracteres tem no que voc� digitou.                          �\n"
            <<"\t\t\t\t� 3. Descobrir juros simples.                                                                      �\n"
            <<"\t\t\t\t� 4. Op��o 4                                                                        �\n"
            <<"\t\t\t\t� 5. Op��o 5                                                                        �\n"
            <<"\t\t\t\t� 6. Op��o 6                                                                        �\n"
            <<"\t\t\t\t� 7. Op��o 7                                                                        �\n"
            <<"\t\t\t\t� 8. Op��o 8                                                                        �\n"
            <<"\t\t\t\t� 9. Op��o 9                                                                        �\n"
            <<"\t\t\t\t� 10. Op��o 10                                                                      �\n"
            <<"\t\t\t\t� 0. Sair do programa.                                                              �\n"
            <<"\t\t\t\t+-----------------------------------------------------------------------------------+\n";
        cin>>optionsMenu; 
		
		switch(optionsMenu){
			
			case 1:
				discoverCaracterType();
			break;	
				
			case 2:
				discoverCaracterLemghth();
			break;
			
			case 3:
				percentageCalculation();
			break;		
		} 	
		   
            
    }while(optionsMenu != 0 );

    cout<<"\n\n\n\t\t\t  Aperte qualquer tecla para sair!";
}

