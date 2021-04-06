#ifndef TREM_H
#define TREM_H

#include <QThread>
#include <qmutex.h>
#include <QMutex>
#include <QSemaphore>
#include <qsemaphore.h>
#include <semaforos.h>
#include <QWaitCondition>
const int t1 = 1;

const int BufferSize = 1;
/*
 * Classe Trem herda QThread
 * Classe Trem passa a ser uma thread.
 * A função START inicializa a thread. Após inicializada, a thread irá executar a função RUN.
 * Para parar a execução da função RUN da thread, basta executar a função TERMINATE.
 *
*/
class Trem: public QThread{
 Q_OBJECT
public:
    Trem(int,int,int);  //construtor
    void run();         //função a ser executada pela thread

    int numUsedBytes = 0;
    QMutex  mutex;
    QWaitCondition bufferNotFull;
    QWaitCondition bufferNotEmpty;
    void setVelocidade(int valor);

//Cria um sinal
signals:
    void updateGUI(int,int,int);

private:
   int x;           //posição X do trem na tela
   int y;           //posição Y do trem na tela
   int ID;          //ID do trem
   int velocidade;  //Velocidade. É o tempo de dormir em milisegundos entre a mudança de posição do trem
public:
   int n = 0;
   int l1=0;
   int l2=0;
   int l3=0;

};

#endif // TREM_H
