#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//�e���v���[�g�@�^���p�����[�^�̂Ƃ��ĐF�X�Ȍ^�ɑΉ��ł���@�\
//               ���Ԑ��̈��(�����֐���A�N���X���A�F��Ȍ^�ɑΉ���������j

//�I�[�o�[���[�h�ŏ���
//�Q�̐����̂����傫������Ԃ�
int myMax(int a, int b);
//�Q�̒P���x����(float)�̂����傫������Ԃ�
float myMax(float a, float b);
//�Q�̒P���x����(double)�̂����傫������Ԃ�
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
//�N���X�e���v���[�g
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
//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r����[�����Z�q���I�[�o�[���|�h
//�x�N�g���̒������ׂĒ������\�����Ė{���ɂ����Ă��邩�m�F�itMax�ɓ����)
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
	//double var6 = 1e-15;//10�̃}�C�i�X15��
	////double res3 = myMax(var5, var6);
	//double res3 = tMax<double>(var5, var6);
	//cout << "tMax var5 var6 : " << res3 << endl;
	Vec2 <double>v;
	v.x = 2.3;
	v.y = 3.5;
	v.PrintVec();

	return 0;
}