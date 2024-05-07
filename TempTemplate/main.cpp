#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//テンプレート　型をパラメータのとって色々な型に対応できる機能
//               多態性の一つ(同じ関数や、クラスを、色んな型に対応させられる）

//オーバーロードで書く
//２つの整数のうち大きい方を返す
int myMax(int a, int b);
//２つの単精度実数(float)のうち大きい方を返す
float myMax(float a, float b);
//２つの単精度実数(double)のうち大きい方を返す
double myMax(double a, double b);

int myMax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

float myMax(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

template<typename T>
T tMax(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}
//クラステンプレート
template<typename T>
class Vec2
{
public:
	T x;
	T y;
	T GetX() { return(x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(x, y)=(" << x << "," << y << ")" << endl; }
};
//ベクトルの長さをT型で返すメンバ関数を作る
//ベクトルの長さで比較するー＞演算子をオーバーロ－ド
//ベクトルの長さを比べて長い方表示して本当にあっているか確認（tMaxに入れる)
template<typename T>
int main()
{
	//int var1 = 10;
	//int var2 = 20;
	////int res1 = myMax(var1, var2);
	//int res1 = tMax<int>(var1, var2);
	//cout << "tMax 10 20 : " << res1 << endl;
	//float var3 = 10.6;
	//float var4 = 2.1;
	////float res2 = myMax(var3, var4);
	//float res2 = tMax<float>(var3, var4);
	//cout << "tMax 10.6 2.1 : " << res2 << endl;
	//
	//double var5 = 0.000062;
	//double var6 = 1e-15;//10のマイナス15乗
	////double res3 = myMax(var5, var6);
	//double res3 = tMax<double>(var5, var6);
	//cout << "tMax var5 var6 : " << res3 << endl;
	Vec2 <double>v;
	v.x = 2.3;
	v.y = 3.5;
	v.PrintVec();

	return 0;
}