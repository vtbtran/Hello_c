//
//  main.cpp
//  hello
//
//  Created by Võ Thị Bảo Trân on 23/09/2023.
//

#include <stdio.h>
int main()
{
       //nhap 1 thang cho biet so ngay cua thang do
       int thang;
       printf("Nhap thang vao: ");
       scanf("%d",&thang);
       switch(thang)
       {
              case 1: printf("31 ngay"); break;
              case 2: printf("28 ngay"); break;
              case 3: printf("31 ngay"); break;
              case 4: printf("30 ngay"); break;
              case 5: printf("31 ngay"); break;
              case 6: printf("30 ngay"); break;
              case 7: printf("31 ngay"); break;
              case 8: printf("31 ngay"); break;
              case 9: printf("30 ngay"); break;
              case 10: printf("31 ngay"); break;
              case 11: printf("30 ngay"); break;
              case 12: printf("31 ngay"); break;
              default: printf("khong ton tai\n"); break;
               
       }
}
