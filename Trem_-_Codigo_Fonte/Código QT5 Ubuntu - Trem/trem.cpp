#include "trem.h"
#include <QtCore>
#include <qsemaphore.h>


//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 15;
}
void Trem::setVelocidade(int valor){
    this -> velocidade = valor;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:    //Trem 1
            if (y == 30 && x <330){
                   x+=10;
            }else if (x == 330 && y < 150){

                    y+=10;

            }else if (x > 60 && y == 150){

                x-=10;
            }else{
                y-=10;
                }
            emit updateGUI(ID, x,y);   //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 30 && x <600){
                x+=10;
            }else if (x == 600 && y < 150){
                numUsedBytes+=1;
                y+=10;

            }else if (x > 330 && y == 150){
                x-=10;
            }else{
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 3: //Trem 3
            if (y == 280 && x <450)
                x+=10;
            else if (x == 450 && y < 150)
                y+=10;
            else if (x > 330 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
        default:
            break;
        }
        msleep(velocidade);
    }



}




