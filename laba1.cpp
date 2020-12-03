#include <stdio.h>
#include <math.h>
 
bool isRegion(double x, double y)
{
    double eps = 0.0000001;
 
    return( ((y < 0) || (fabs(y) < eps)) &&                                 //y <= 0
            ((x * x + y * y > 4) || (fabs(x * x + y * y - 4) < eps)) &&     //x^2 + y^2 >= 2^2
            ((x * x + y * y < 25) || (fabs(x * x + y * y - 25) < eps)));    //x^2 + y^2 <= 5^2
}
 
int main()
{
    double x, y;
    printf ("x = ");
    scanf("%lf", &x);
    printf ("y = ");
    scanf("%lf", &y);
 
    if (isRegion(x, y))
        printf("Yes\n");
    else
        printf("No\n");
}
