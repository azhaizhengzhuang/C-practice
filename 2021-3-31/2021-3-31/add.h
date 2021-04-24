#ifndef __ADD_H__//if no define __ADD_H__ 若没有定义__ADD_H__ 则运行#ifndef和#enif中的语句，作用是可以避免重复调用头文件造成程序的运算速度变慢
#define __ADD_H__//这是对之前的建立模块的应用的相应的优化
int add(int, int);
#endif