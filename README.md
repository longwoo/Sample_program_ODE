# 常微分方程式の数値解法の基礎 by 簑毛崇章（Takaaki MINOMO）

（APS学習コミュニティの教材用に作成．http://www.aps153.org）

## 動作環境等

Ubuntu16.04.

プログラムはC++で作成．

Boost, Eigenを適宜使用した．
 
Boost C++ライブラリ : http://www.boost.org

Eigen 線形代数ライブラリ : http://eigen.tuxfamily.org


## Sample001 : Euler法
### テーマ： 1階常微分方程式．マルサスの人口モデル．修正マルサスモデル．

オイラー法で簡単な1階常微分方程式の数値計算のサンプルプログラム．


## Sample002 : RK4法
### テーマ : 1階常微分方程式．クラシカルなRK4法．

古典的4段4次のルンゲ・クッタ法の数値計算のサンプルプログラム．


## Sample003 : Euler法
### テーマ : 2階常微分方程式．ロジスティクス方程式．

2階の常微分方程式をオイラー法で解くサンプルプログラム．


## Sample004 : RK4法
### テーマ : 2階常微分方程式．単振り子．

2階の常微分方程式を古典的ルンゲ・クッタ法（以下RK4と略記）で解くサンプルプログラム．


## Sample005 : RK4法
### テーマ : 線形代数ライブラリEigen.RK4.単振り子．

線形代数ライブラリEigenを使用したRK4による単振り子のサンプルプログラム．


## Sample006 : RK4法
### テーマ : 二重振り子．可視化．

RK4における二重振り子のサンプルプログラム．

gnuplotによる可視化のサンプルプログラムもあり．


## Sample007 : RKF4法
### テーマ : 二重振り子．ルンゲ・クッタ・フェールブルク4(5)次法．

時間刻み幅制御することに精度良く高速に計算することを目標にしたサンプルプログラム．

1970年台からよく使われる埋込み型ルンゲ・クッタ方の一種のルンゲ・クッタ・フェールブルク法（以下RKF4）のサンプルプログラム．

5次公式で次の値を決定することも可能．試してみること．


## Sample008 : RKF4法
### テーマ : 任意精度の浮動小数点演算．高精度演算．Boostライブラリ．二重振り子．

Boostライブラリによる多倍長浮動小数点数演算でRKF4法のサンプルプログラム．


## Sample009 : RKF4法
### テーマ : Eigen.他Sample008に同じ．

線形代数ライブラリEigenを使用してしたサンプルプログラム．


## Sample010 : RKF4法
### テーマ : 二体問題．

RKF4で二体問題の数値計算プログラム例．


## Sample011 : RKF4法
### テーマ : 二体問題．離心率．

上にほぼ同じ．

数値計算的に難しい離心率での計算例．


## Sample012 : RKF7(8)法
### テーマ : 二体問題．13段7(8)次埋込み型ルンゲ・クッタ法．アレンストーフ軌道の計算．

アレンストーフ軌道の計算．高次のルンゲ・クッタ法のプログラム例．


## Sample013 : RKF7(8)法
### テーマ : 多体問題．

高次埋込み型ルンゲ・クッタ法による多体問題の数値解法．


## Sample014 : RKF7(8)法
### テーマ : 多体問題．

多体問題シミュレーション例．
可視化．
