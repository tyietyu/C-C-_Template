#ifndef UTILS_H
#define UTILS_H

/**
 * @brief 两数相加
 * @param a 第一个数
 * @param b 第二个数
 * @return 两数之和
 */
int add(int a, int b);

/**
 * @brief 两数相减
 * @param a 第一个数
 * @param b 第二个数
 * @return 两数之差
 */
int subtract(int a, int b);

/**
 * @brief 两数相乘
 * @param a 第一个数
 * @param b 第二个数
 * @return 两数之积
 */
int multiply(int a, int b);

/**
 * @brief 两数相除
 * @param a 第一个数
 * @param b 第二个数
 * @return 两数之商，如果b为0则返回0
 */
int divide(int a, int b);

#endif /* UTILS_H */