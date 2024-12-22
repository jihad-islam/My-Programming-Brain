#include <stdio.h>  //printf and scanf er jonnne ei header file
#include <math.h>   // ceil, floor, round, sqrt, pow, etc er jonne math.h use kora hoy
#include <stdlib.h> // abs() er jonne ei header file.
int main()
{
    double a = 2.139, b = 5.689, c = -5;

    printf("%lf %lf\n", ceil(a), ceil(b));
    printf("%lf %lf\n", floor(a), floor(b));
    printf("%lf %lf\n", round(a), round(b));
    printf("%lf %lf\n", sqrt(a), sqrt(b));
    printf("%lf\n", pow(a, b));
    printf("%d\n", abs(c));

    return 0;
}

/*
    1. Ceil: Decimal er upper value output dibe. Ex: in-3.001     in: 3.00
                                                     out: 4       out: 3

    2. Floor: Decimal er floor value output dibe. Ex: in: 3.1, out: 4.
    Note: i.  room er ceiling and floor diye mone rakhbo.
          ii. Ceil and Floor mainly integer value output dey. So only integer value dekhte chaile %d diye print korbo.

    3. Round: value >= .5  hole ceil value output dey. and .5 er kom hole floor value output dey.  in: 3.49        in: 3.5
                                                                                                   out: 3          out: 4

    4. Sqrt: input hishebe integer and floating value duitai ney, but output floating dey.

    5. Pow: pow(a,b) , ekhane a^b bujhay. eitaw input output float and double niye kaj kore. integer input nile jhamela korte pare.

    6. abs: eta shudhu int niye kaj kore. long long niye kaj korte pare na. long long ke absolute korte -1 diye multiply korlei hoye jay.
*/