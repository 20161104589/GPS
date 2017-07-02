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
    int b,c,d,e,f,g,h,i,j;
    fr=fopen("//Users//a20161104589//Desktop//g//GPS//GPS//GPS.log","r+");
    fw=fopen("//Users//a20161104589//Desktop//g//GPS//GPS//gps.csv","w");
    if(fr==NULL)
        printf("打开文件错误");
    else
        fprintf(fw,"\n");
     while(!feof(fr))
            {
                   fscanf(fr,"%s%s",a1,a);
                   printf("输出：%s\n%s",a1,a);
                   for(b=0;b<2;b++)
                   {
                       hour[b]=a[b+7];
                   }
                   hour[2]='\0';
                   printf("%s时 ",hour);
                   fprintf(fw,"%s时 ",hour);
                   for(c=0;c<2;c++)
                   {
                       mine[c]=a[c+9];
                   }
                   mine[2]='\0';
                   printf("%s分 ",mine);
                   fprintf(fw,"%s分 ",mine);
                   for(d=0;d<2;d++)
                   {
                       sec[d]=a[d+11];
                   }
                   sec[2]='\0';
                   printf("%s秒 ",sec);
                   fprintf(fw,"%s秒 ",sec);
                   for(e=0;e<2;e++)
                   {
                       lat[e]=a[e+14];
                   }
                   lat[2]='\0';
                   printf("%s度",lat);
                   fprintf(fw,"%s度",lat);
                   for(f=0;f<6;f++)
                   {
                       latfen[f]=a[f+16];
                   }
                   latfen[6]='\0';
                   printf("%s分",latfen);
                   fprintf(fw,"%s分",latfen);
                   for(g=0;g<1;g++)
                   {
                       nors[g]=a[g+23];
                   }
                   mine[1]='\0';
                   if(nors[g]=='S')
                   {
                       printf("南纬");
                       fprintf(fw,"南纬");
                   }
                   else
                   {
                       printf("北纬");
                       fprintf(fw,"北纬");
                   }
                   for(h=0;h<3;h++)
                   {
                       lon[h]=a[h+25];
                   }
                    lon[3]='\0';
                   printf("%s度",lon);
                   fprintf(fw,"%s度",lon);
                   for(i=0;i<6;i++)
                   {
                       lofen[i]=a[i+28];
                   }
                   lofen[6]='\0';
                   printf("%s分",lofen);
                   fprintf(fw,"%s分",lofen);
                   for(j=0;j<1;j++)
                   {
                       wors[j]=a[j+35];
                   }
                   wors[1]='\0';
                   if(wors[j]=='E')
                   {
                       printf("东");
                       fprintf(fw,"东经\n");
                   }
                   else
                   {
                       printf("西");
                       fprintf(fw,"西经\n");
                   }

               }
            

}








