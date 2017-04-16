#ifndef NATIVE_H_
#define NATIVE_H_

#include "alloc.h"
#include "types.h"

entry_p eval(entry_p entry);

entry_p m_add(entry_p *argv);

int m_sub(int a, int b);
int m_mul(int a, int b);
int m_div(int a, int b);
int m_and(int a, int b);
int m_or(int a, int b);
int m_xor(int a, int b);
int m_not(int a);
int m_bitand(int a, int b);
int m_bitor(int a, int b);
int m_bitxor(int a, int b);
int m_bitnot(int a);
int m_shiftleft(int a, int n);
int m_shiftright(int a, int n);

#endif