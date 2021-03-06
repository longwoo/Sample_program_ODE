/*
 * dy/dt = y
 * y(0) = y_init
 *
 * を古典的ルンゲ・クッタ法で解くよ．
 *
 * みーくん氏
 */


#include <iostream>

//パラメータ
const double y_init  = 1.0;
const double dt      = 0.01; //時間の刻み幅だよ．
const double T_limit = 10.0;

double func(double y){
    return y;
}

int main(){
    //t=0からはじめるよ．
    double t = 0.0;
    //常微分方程式の初期条件を設定するよ．
    double y = y_init;

    //RK法で使うkたちを宣言して初期化するよ．
    double k1, k2, k3, k4;
    k1 = k2 = k3 = k4 = 0.0;

    //はじめの値を表示するよ.
    std::cout << t << " " << y_init << std::endl;

    //漸化式を解くよ．T_limit秒まで解くよ．
    for(int i=1; t<T_limit; i++){
        //k_i(i=1,2,3,4)の値を求めるよ．
        k1 = func(y);
        k2 = func(y + dt * k1 / 2.0);
        k3 = func(y + dt * k2 / 2.0);
        k4 = func(y + dt * k3);
        //dt秒後のyの値を求めるよ．
        y = y + dt / 6.0 * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
        //時間tを進めるよ．
        t = i * dt;
        //t秒後のときのyの値を表示するよ．
        std::cout << t << " " << y << std::endl;
    }
}
