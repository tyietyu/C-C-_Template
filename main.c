#include <stdio.h>
#include <stdint.h>
#include "utils.h"
// uint8_t int16_t等类型定义在stdint.h中, 直接使用include指令引入
//51单片机接收角度信息
uint8_t data[2]={0xF6, 0xFF};
// 定义一个短整数变量val，用来将收到的二进制流解析出来的数据存储到val中
int16_t val = 0;
 // 将收到的数据赋值给val，注意字节序
uint8_t *p = (uint8_t *)&val; 

int main()
{
    p[0]=data[0];
    p[1]=data[1];
    // 当前直接取出的数据是16位的有符号整数，所以可以直接输出
    printf("data: %d\n",(int)val);
    return 0;
}

