#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QMessageBox>
#include <QTimer>
#include <QPixmap>
#include <qevent.h>
#include <QtWidgets/QLCDNumber>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "personaje.h"
#include "enemigo.h"
#include "mapas.h"
#include "partida.h"
#include "bola.h"
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *event);
    ~MainWindow();
    void set_ventana();


private slots:

    void on_btn_1_jug_clicked();

    void on_btn_salir_clicked();

    void on_btn_volver_clicked();

    void on_btn_multi_clicked();

    void on_btn_nueva_par_clicked();

    void on_btn_iniciar_clicked();

    void nivel1_tiempo();

    void resorte();

    void resorte_derecha();

    void resorte_j2_izq();

    void resorte_j2_der();

    void resorte_e1_izq();

    void resorte_e1_der();

    void resorte_e2_der();

    void resorte_e2_izq();

    void caida_libre_1j();

    void caida_libre_multi();

    void on_btn_guardar_clicked();

    void on_btn_volver_menu_clicked();

    void on_btn_reanudar_clicked();

    void on_btn_aceptar_clicked();

    void on_btn_cancelar_clicked();

    void nivel2_tiempo();

    void mov_izq_cpu1();

    void mov_der_cpu1();

    void golpe_cpu1();

    void mov_izq_cpu2();

    void on_btn_cargar_par_clicked();

    void on_btn_aceptar_2_clicked();

    void on_btn_contr_rules_clicked();

    void on_btn_reglas_clicked();

    void on_btn_controles_clicked();

    void golpe_cpu2();

    void mov_der_cpu2();

    void simulacion();

    void iniciarbola();

    void pararbola();

private:

    Ui::MainWindow *ui;
    QGraphicsScene *menu,*nivel1,*nivel2,*multijugador,*ganador;
    QPixmap Fondo_menu;
    QLCDNumber *lcdNumber;
    QWidget *centralwidget;
    bola *p;
     QTimer *timebola;
     float vxo=80,vyo=50;

    QTimer *timer,*timer2,*timer3,*timer4,*timer5,*timer6,*timer7,*n2timer,*cpu1,*timerrese2,*timercpu1g,*timcpu1der,*timresder1,*timercpu2izq,*timercpu2g;
    QTimer *timercpu2der,*timresder2,*timeresizq2;
    QMessageBox *mensaje;
    personaje *jugador;
    enemigo *enemigo1,*enemigo2;
    mapas *mapa1,*mapa1e,*mapa2,*mapa2e;
    QThread *hilo;
    int cont=90;
    QLabel *nombre_ene1,rect;
    QString nombre_usuario,nombre_cargar;
    QLine *usuario;
    int x1=0,y1=500,x3=1400,y3=475,pos0xper=0,pos0yper=500,T=20,h,contador,pasar_nivel,contn2=60,timerid,ganadormulti,contadorn2,contmulti,contj1j2,vida_j2,x2=1400,e2y2=700;
    int cont_golpe_cpu1,cont_mov_der,contadore1j1,vida_j1n1,cont_nivel,vidas,tiempo_lvl,posjug,contadore2n2,vida_j2_golpe,poscpu2=1400,cont_golpe_cpu2j2,vida_j1n2,vida_j1n2tot;
    int cont_mov_der_cpu2,cont_bola=0,cont_col_bola;
    bool colision_je,colision_je1,colision_je2,colision_j1j2,colision_e1j1,cont_vidas_j1_j2,colision_cpu2j1,colision_bola;
    float y2;
    float i=0,resorte2,g=-9.81,i2,g2=9.81,xo=50;
    partida *dat_partida;
    partida *vidas_ene1,*vidas_ene2,*vidas_j1,*vidas_j2,*vidas_j1e1,*vida_multi_g,*vidaj1cpu2,vida_e1_bola;

};
#endif // MAINWINDOW_H
