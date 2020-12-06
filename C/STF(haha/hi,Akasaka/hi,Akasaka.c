#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define T double
T c(T x,T y,T r){return sqrt(x*x+y*y)-r;}
T u(T x,T y,T t){return x*cos(t)+y*sin(t);}
T v(T x,T y,T t){return y*cos(t)-x*sin(t);}
T fa(T x,T y){return fmin(c(x,y,0.5),c(x*0.47+0.15,y+0.25,0.3));}
T no(T x,T y){return c(x*1.2+0.97,y+0.25,0.2);}
T nh(T x,T y){return fmin(c(x+0.9,y+0.25,0.03),c(x+0.75,y+0.25,0.03));}
T ea(T x,T y){return fmin(c(x*1.7+0.3,y+0.7,0.15),c(u(x,y,0.25)*1.7,v(x,y,0.25)+0.65,0.15));}
T ey(T x,T y){return fmin(c(x+0.4,y+0.35,0.1),c(x+0.15,y+0.35,0.1));}
T pu(T x,T y){return fmin(c(x+0.38,y+0.33,0.03),c(x+0.13,y+0.33,0.03));}
T fr(T x,T y){return c(x*1.1-0.3,y+0.1,0.15);}
T mo(T x,T y){return fmax(c(x+0.15,y-0.05,0.2),-c(x+0.15,y,0.25));}
T o(T x,T y,T(*f)(T,T),T i){T r=f(x,y);return fabs(r)<0.02?(atan2(f(x,y+1e-3)-r,f(x+1e-3,y)-r)+0.3)*1.273+6.5:r<0?i:0;}
T s(T x,T y,T(*f)(T,T),T i){return f(x,y)<0?i:0;}
T f(T x,T y){return o(x,y,no,1)?fmax(o(x,y,no,1),s(x,y,nh,12)):fmax(o(x,y,fa,1),fmax(o(x,y,ey,11),fmax(o(x,y,ea,1),fmax(o(x,y,mo,1),fmax(s(x,y,fr,13),s(x,y,pu,12))))));}

void delay(int seconds)
 
{
 
   clock_t start = clock();
 
   clock_t lay = (clock_t)seconds * CLOCKS_PER_SEC;
 
   while ((clock()-start) < lay)
 
     ;
 
}

void full_screen()
{   
    HWND hwnd = GetForegroundWindow();
    int cx = GetSystemMetrics(SM_CXSCREEN);            /* 屏幕宽度 像素 */
    int cy = GetSystemMetrics(SM_CYSCREEN);            /* 屏幕高度 像素 */

    LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);   /* 获取窗口信息 */
    /* 设置窗口信息 最大化 取消标题栏及边框 */
    SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

    SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

int main(void)
{
    int i;
    char arr[10], stop[]="STOP", stop2[]="\"STOP\"", cha;

    start:
    printf("你好yo~小卑鄙~\n");
    delay(1);
    printf("呃...\n");
    delay(2);
    printf("咋不是全屏，不行，必须全屏哦~稍等一秒钟，正在调整。\n");
    delay(2);
    full_screen();
    delay(1);
    system("CLS");
    printf("全屏了吧？\n");
    delay(1);
    printf("全屏了给你画头猪\n");
    delay(2);
    system("CLS");


    for(T y=-1,s=2;y<0.6;y+=0.05/s,putchar('\n'))for(T x=-1;x<0.6;x+=0.025/s)putchar(" .|/=\\|/=\\| @!"[(int)f(u(x,y,0.3),v(x,y,0.3))]);

    delay(4);

    system("CLS"); 

    printf("好看吗？其实今天就为了给你画一只高清猪猪。你天天打APEX，心情复杂\n");
    delay(2);
    for ( i = 1999; i > 0; i--)
    {
        printf("不开心！！坏男人！！！");
    }
    delay(2);
    system("CLS"); 
    printf("吐槽结束惹。\n");
    delay(1);
    system("CLS"); 
    printf("好吧，今天就到这里吧~输入\"STOP\"结束本程序~\n输入：");
    stop:
    gets(arr);

    if (strcmp(arr, stop) == 0)
    {
        printf("宁没有打引号哦，请输入\"STOP\"结束本程序\n输入：");
        goto stop;
    }
    else if (strcmp(arr, stop2) == 0)
    {
        printf("宁真的要选择不得不必要的不退出吗？，请输入 Y 或 N \n输入：");
        scanf("%c", &cha);
        if (cha == 'N')
        {
            printf("白白~");
            delay(3);
            exit(0);
        }
        else if (cha == 'Y')
        {
            printf("不退出吗？那就不退出8！\n");
            printf("回到从前ing~");
            delay(1);
            system("CLS");
            delay(1);

            goto start;
        }
        else
        {
            printf("宁在输入啥子乱七八糟的东西哦，那就默认不退出8!\n输入\"STOP\"结束本程序~\n输入：");
            goto stop;
        }
        

    }
    else
    {
        printf("宁在输入啥子乱七八糟的东西哦，请输入\"STOP\"结束本程序\n输入：");
        goto stop;
    }
    
    
    getchar();
    }