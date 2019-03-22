#ifndef FE25519_H
#define FE25519_H

#include "crypto_uint32.h"

typedef struct {
  crypto_uint32 v[32]; 
} fe25519;

void fe25519_unpack(fe25519 *r, const unsigned char x[32]);

void fe25519_pack(unsigned char r[32], const fe25519 *x);

void fe25519_cmov(fe25519 *r, const fe25519 *x, unsigned char b);

void fe25519_setone(fe25519 *r);

void fe25519_setzero(fe25519 *r);

void fe25519_neg(fe25519 *r, const fe25519 *x);

unsigned char fe25519_getparity(const fe25519 *x);

void fe25519_add(fe25519 *r, const fe25519 *x, const fe25519 *y);

void fe25519_sub(fe25519 *r, const fe25519 *x, const fe25519 *y);

void fe25519_mul(fe25519 *r, const fe25519 *x, const fe25519 *y);

void fe25519_square(fe25519 *r, const fe25519 *x);

void fe25519_pow(fe25519 *r, const fe25519 *x, const unsigned char *e);

int fe25519_sqrt_vartime(fe25519 *r, const fe25519 *x, unsigned char parity);

void fe25519_invert(fe25519 *r, const fe25519 *x);

#endif
