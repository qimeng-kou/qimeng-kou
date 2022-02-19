#include "iostream"
#include "string"
#define day 12
using namespace std;
int main()
{
	//整形
	//短整形-32768-32767
	short num1 = 32768;
	//整形
	int num2 = 32768;
	//长整型
	long num3 = 10;
	//长长整形
	long long num4 = 10;
	//浮点型
	//单精度
	float num5 = 12345.567;
	//双精度
	double num6 = 45455.6868;
	//科学计数法
	float num7 = 3e2;
	//字符型
	char num8 = 'b';
	//转义字符
	//字符串型
	string num9 = "h";
	//布尔类型zwxe2 
	//true --真（本质是1）
	//FALSE --假（本质为0）
	bool num10 = true;

	//数据的输入
	cin >> num10;

	cout << "num1=" << num1-- << "\t" << num1 << endl;
	cout << "num2=" << sizeof(num2) << endl;
	cout << "num3=" << sizeof(num3) << endl;
	cout << "num4=" << sizeof(num4) << endl;
	cout << "num5=" << sizeof(num5) << endl;
	cout << "num6=" <<sizeof(num6) << endl;
	cout << "num7=\t" << sizeof(num7) << endl;
	cout << "num8=" << (int)num8 << endl;
	cout << "num9=" <<sizeof( num9) << endl;
	cout << "num10=" << num10 << endl;
	system("pause");
	return 0;
}