/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int8x16_t
foo (int8x16_t a)
{
  return vabsq_s8 (a);
}

/* { dg-final { scan-assembler "vabs.s8"  }  } */

int8x16_t
foo1 (int8x16_t a)
{
  return vabsq (a);
}

/* { dg-final { scan-assembler "vabs.s8"  }  } */
