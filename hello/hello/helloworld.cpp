#include "iostream"
#include "string"
#define day 12
using namespace std;
int main()
{
	//����
	//������-32768-32767
	short num1 = 32768;
	//����
	int num2 = 32768;
	//������
	long num3 = 10;
	//��������
	long long num4 = 10;
	//������
	//������
	float num5 = 12345.567;
	//˫����
	double num6 = 45455.6868;
	//��ѧ������
	float num7 = 3e2;
	//�ַ���
	char num8 = 'b';
	//ת���ַ�
	//�ַ�����
	string num9 = "h";
	//��������zwxe2 
	//true --�棨������1��
	//FALSE --�٣�����Ϊ0��
	bool num10 = true;

	//���ݵ�����
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