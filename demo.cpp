#include <iostream>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (x = 1)
        {
            return 1;
        }

        bool fh = true;
        if (n < 0)
        {
            fh = false;
            n = 0 - n;
        }

        double doubleRet = x;
        for (int i = 1; i < n; i++)
        {
            doubleRet = doubleRet * x;
        }

        if (!fh)
        {
            doubleRet = 1.0 / doubleRet;
        }

        return doubleRet;
    }
};

int i=1;
int main()
{
	int i = i;	//����дδ���壬�ҵ�����Ǻ���Ҫ����i��ʱ�򣬶���֪���Ǿֲ�����ȫ�ֵ��ˡ����Բ���������
	cout << i << endl;

    double a = 2.00000;
    int b = 10;
    Solution solu;
    cout << solu.myPow(a, b) << endl;

    return 0;
}