#include<iostream>
#include<math.h>
using namespace std;
main()
{
	cout << "��������������";//���һԪ���η���$ax^2+bx+c=0�ĸ�
	int a, b, c;
	cin >> a >> b >> c;

	double answer1;
	double	answer2;
	if (b*b - 4 * a*c < 0)
	{
		cout << "�����޽�";

	}
	else if (b*b - 4 * a*c == 0)
	{
		cout << "������������ͬ�Ľ�";
		answer1 = ((-b + sqrt(b * b - 4 * a*c)) / (2 * a));
		cout << "���̵Ľ���" << answer1;

	}
	else
	{
		int answer1;
		cout << "������������ͬ�Ľ�"��;
			answer1 = (-b + sqrt(b * b - 4 * a*c)) /(2 * a);
		answer2 = (-b - sqrt(b * b - 4 * a*c)) / (2 * a);
		cout << "���̵Ľ���" << answer1 << answer2;
	}


	cout << "�����������εı߳�";//�������ε����;
		double mianji;
	int f, g, h;
	int p = 1 / 2(f + g + h);
	mianji = sqrt(p*(p - f)*(p - g)*(p - h));//ʹ�ú��׹�ʽ
	cout << "�����ε����Ϊ" << mianji;
	cout << "�����뵱ǰ��������Ϣ��";//��֪�����գ���ڼ��ܵڼ���
	int year;
	int day;
	int month;
	int week;
	int ri;
	cin >> year >> month >> day;
	cout << "��ǰ��������ϢΪ" << year << "-" << month << '-' << day;
	week = 0;
	ri = 0;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "����Ϊ����";
		if (month <= 2)
		{
			week = ((month - 1) * 31 + day) / 7;
			ri = (month - 1) + day;


		}
		else if (month = 3)//���� 

		{
			week = (31 + 29 + day) / 7;
			ri = 31 + 29 + day;
		}
		else if (month = 4)//����
		{
			week = (31 + 29 + 30 + day) / 7;
			ri = 31 + 29 + 30 + day;
		}
		else if (month = 5)//����
		{
			week = (31 + 29 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 30 + 31 + day;
		}
		else if (month = 6)//����
		{
			week = (31 + 29 + 31 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + day;
		}
		else if (month = 7)//����
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + day;
		}
		else if (month = 8)//����
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
		}
		else if (month = 9)//����
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
			ri = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day);
		}
		else if (month = 10)//ʮ��
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		}
		else if (month = 11)//ʮһ��
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30;
		}
		else if (month = 12)//ʮ����
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31;
		}

	}
	else {
		cout << "������ƽ��";
			if (month <= 2)
			{
				week = ((month - 1)* 31 + day)/ 7;
				ri = (month - 1) + day;


			}
			else if (month == 3)//���� 

			{
				week = (31 + 28 + day) / 7;
				ri = 31 + 28 + day;
			}
			else if (month == 4)//����
			{
				week = (31 + 28 + 30 + day) / 7;
				ri = 31 + 28 + 30 + day;
			}
			else if (month == 5)//����
			{
				week = (31 + 28 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 30 + 31 + day;
			}
			else if (month == 6)//����
			{
				week = (31 + 28 + 31 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + day;
			}
			else if (month == 7)//����
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + day;
			}
			else if (month == 8)//����
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			}
			else if (month == 9)//����
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
				ri = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day);
			}
			else if (month == 10)//ʮ��
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			}
			else if (month == 11)//ʮһ��
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30) / 7;
				ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30;
			}
			else if (month == 12)//ʮ����
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31;
			}

	}
	cout << "�ǵ�" << week << "��" << "��" << ri << "��";
}




