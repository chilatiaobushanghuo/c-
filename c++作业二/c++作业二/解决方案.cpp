#include<iostream>
#include<math.h>
using namespace std;
main()
{
	cout << "请输入三个变量";//求解一元二次方程$ax^2+bx+c=0的根
	int a, b, c;
	cin >> a >> b >> c;

	double answer1;
	double	answer2;
	if (b*b - 4 * a*c < 0)
	{
		cout << "方程无解";

	}
	else if (b*b - 4 * a*c == 0)
	{
		cout << "方程有两个相同的解";
		answer1 = ((-b + sqrt(b * b - 4 * a*c)) / (2 * a));
		cout << "方程的解是" << answer1;

	}
	else
	{
		int answer1;
		cout << "方程有两个不同的解"；;
			answer1 = (-b + sqrt(b * b - 4 * a*c)) /(2 * a);
		answer2 = (-b - sqrt(b * b - 4 * a*c)) / (2 * a);
		cout << "方程的解是" << answer1 << answer2;
	}


	cout << "请输入三角形的边长";//求三角形的面积;
		double mianji;
	int f, g, h;
	int p = 1 / 2(f + g + h);
	mianji = sqrt(p*(p - f)*(p - g)*(p - h));//使用海伦公式
	cout << "三角形的面积为" << mianji;
	cout << "请输入当前年月日信息；";//已知年月日，求第几周第几天
	int year;
	int day;
	int month;
	int week;
	int ri;
	cin >> year >> month >> day;
	cout << "当前年月日信息为" << year << "-" << month << '-' << day;
	week = 0;
	ri = 0;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "该年为闰年";
		if (month <= 2)
		{
			week = ((month - 1) * 31 + day) / 7;
			ri = (month - 1) + day;


		}
		else if (month = 3)//三月 

		{
			week = (31 + 29 + day) / 7;
			ri = 31 + 29 + day;
		}
		else if (month = 4)//四月
		{
			week = (31 + 29 + 30 + day) / 7;
			ri = 31 + 29 + 30 + day;
		}
		else if (month = 5)//五月
		{
			week = (31 + 29 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 30 + 31 + day;
		}
		else if (month = 6)//六月
		{
			week = (31 + 29 + 31 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + day;
		}
		else if (month = 7)//七月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + day;
		}
		else if (month = 8)//八月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
		}
		else if (month = 9)//九月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
			ri = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day);
		}
		else if (month = 10)//十月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		}
		else if (month = 11)//十一月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30;
		}
		else if (month = 12)//十二月
		{
			week = (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31) / 7;
			ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31;
		}

	}
	else {
		cout << "该年是平年";
			if (month <= 2)
			{
				week = ((month - 1)* 31 + day)/ 7;
				ri = (month - 1) + day;


			}
			else if (month == 3)//三月 

			{
				week = (31 + 28 + day) / 7;
				ri = 31 + 28 + day;
			}
			else if (month == 4)//四月
			{
				week = (31 + 28 + 30 + day) / 7;
				ri = 31 + 28 + 30 + day;
			}
			else if (month == 5)//五月
			{
				week = (31 + 28 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 30 + 31 + day;
			}
			else if (month == 6)//六月
			{
				week = (31 + 28 + 31 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + day;
			}
			else if (month == 7)//七月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + day;
			}
			else if (month == 8)//八月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			}
			else if (month == 9)//九月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
				ri = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day);
			}
			else if (month == 10)//十月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			}
			else if (month == 11)//十一月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30) / 7;
				ri = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30;
			}
			else if (month == 12)//十二月
			{
				week = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31) / 7;
				ri = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day + 30 + 31;
			}

	}
	cout << "是第" << week << "周" << "第" << ri << "天";
}




