#include <stdio.h>
int main()
{
       float doanhso, hoahong;
       printf("Nhap doanh so:");
       scanf("%f",&doanhso);
       if(doanhso<=100)
       {
              hoahong=0.05*doanhso;
       }
       else if(doanhso<=300)
       {
              hoahong=0.1*doanhso;
       }
       else if(doanhso>300)
       {
              hoahong=0.2*doanhso;
       }
       printf("Hoa hong la: %f\n",hoahong);

}

