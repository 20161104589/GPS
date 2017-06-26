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
#include <stdlib.h>
#include <string.h>


int main()
{
    char hour[10];/*定义小时*/
    char min[10];/*定义分*/
    char sec[10];/*定义秒*/
    char lat[10];/*定义纬度和分*/
    char latfen[10];
    char nors[10];/*定义南北纬*/
    char lon[10];/*定义经度和分*/
    char lonfen[10];
    char wors[10];/*定义东西经*/
    char qua[14];/*质量因子*/
    char sum[10];/*可使用的卫星数*/
    char lev[10];/*水平精度因子*/
    char ant[10];/*天线高程*/
    char ear[10];/*大地椭圆相对海平面的高度*/
    char yea[10];/*差分GPS数据年龄*/
    char sta[10];/*差分基准站号*/
    
    FILE *fe;
    fe=fopen("//Users//a20161104589//Desktop//G//G//G//GPS.log","r+");
    while(scanf(fe,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s",hour,min,sec,lat,nors,lon,wors,qua,sum,lev,ant,ear,yea,sta)!=EOF)
    {
        printf("%s %s %s %s %s %s %s %s %s %s %s %s %s %s",hour,min,sec,lat,nors,lon,wors,qua,sum,lev,ant,ear,yea,sta);
    }
    
    
}






