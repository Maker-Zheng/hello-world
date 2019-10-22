//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
	float a = z>z1 ? z-z1 : z1-z;   
    if (a<=0.00001) 
	{
        z = (m + x) / y;
    }
    printf("z is %f\n", z);
    printf("z1 is %f\n", z1);
    return 0;
}
