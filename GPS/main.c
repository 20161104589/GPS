//
//  main.c
//  GPS
//
//  Created by 杨志伟 on 2017/6/26.
//  Copyright © 2017年 杨志伟. All rights reserved.
//


//  main.c
//  GPS
//
//  Created by 20161104614 on 2017/6/16.
//  Copyright © 2017年 20161104614. All rights reserved.
//

/*“˝»ÎÕ∑Œƒº˛*/
#include <stdio.h>

int main()
{
    char a1[70];
    char a[70];
    char yea[10];
    char mon[10];
    char day[10];
    char hour[10];/*定义小时*/
    char mine[10];/*定义分*/
    char sec[10];/*定义秒*/
    char lat[10];/*定义纬度和分*/
    char latfen[10];
    char nors[10];/*定义南北纬*/
    char lon[10];/*定义经度和分*/
    char lofen[10];
    char wors[10];/*定义东西经*/
    FILE *fr;
    FILE *fw;
    int b,c,d,e,f,g,h,i,j,n,l,m;
    fr=fopen("//Users//a20161104589//Desktop//g//GPS//GPS//GPS.log","r+");
    fw=fopen("//Users//a20161104589//Desktop//g//GPS//GPS//gps.csv","w");
    if(fr==NULL)
        printf("打开文件错误");
    else
        fprintf(fw,"年,月,日,小时,分钟,秒,南北纬,纬度,纬度,经度,经度,东西经,\n");
     while(!feof(fr))
            {
                
                fscanf(fr,"%s%s",a1,a);
                printf("输出：%s\n%s",a1,a);
                for(n=0;n<2;n++)
                {
                    yea[n]=a1[n+55];
                }
                yea[2]='\0';
                printf("%s年,",yea);
                fprintf(fw,"%s年,",yea);
                for(l=0;l<2;l++)
                {
                    mon[l]=a1[l+53];
                }
                mon[2]='\0';
                printf("%s月,",mon);
                fprintf(fw,"%s月,",mon);
                for(m=0;m<2;m++)
                {
                    day[m]=a1[m+51];
                }
                day[2]='\0';
                printf("%s日,",day);
                fprintf(fw,"%s日,",day);

                
                   for(b=0;b<2;b++)
                   {
                       hour[b]=a[b+7];
                   }
                   hour[2]='\0';
                   printf("%s时,",hour);
                   fprintf(fw,"%s时,",hour);
                   for(c=0;c<2;c++)
                   {
                       mine[c]=a[c+9];
                   }
                   mine[2]='\0';
                   printf("%s分,",mine);
                   fprintf(fw,"%s分,",mine);
                   for(d=0;d<2;d++)
                   {
                       sec[d]=a[d+11];
                   }
                   sec[2]='\0';
                   printf("%s秒,",sec);
                   fprintf(fw,"%s秒,",sec);
                  for(g=0;g<1;g++)
                  {
                      nors[g]=a[g+23];
                  }
                  mine[1]='\0';
                  if(nors[g]=='S')
                  {
                      printf("南纬,");
                      fprintf(fw,"南纬,");
                  }
                  else
                  {
                      printf("北纬,");
                      fprintf(fw,"北纬,");
                  }

                   for(e=0;e<2;e++)
                   {
                       lat[e]=a[e+14];
                   }
                   lat[2]='\0';
                   printf("%s度,",lat);
                   fprintf(fw,"%s度,",lat);
                   for(f=0;f<6;f++)
                   {
                       latfen[f]=a[f+16];
                   }
                   latfen[6]='\0';
                   printf("%s分,",latfen);
                   fprintf(fw,"%s分,",latfen);
                
                   for(h=0;h<3;h++)
                   {
                       lon[h]=a[h+25];
                   }
                    lon[3]='\0';
                   printf("%s度,",lon);
                   fprintf(fw,"%s度,",lon);
                   for(i=0;i<6;i++)
                   {
                       lofen[i]=a[i+28];
                   }
                   lofen[6]='\0';
                   printf("%s分,",lofen);
                   fprintf(fw,"%s分,",lofen);
                   for(j=0;j<1;j++)
                   {
                       wors[j]=a[j+35];
                   }
                   wors[1]='\0';
                   if(wors[j]=='E')
                   {
                       printf("东");
                       fprintf(fw,"东经,\n");
                   }
                   else
                   {
                       printf("西");
                       fprintf(fw,"西经,\n");
                   }

               }
}








