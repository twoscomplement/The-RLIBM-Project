#include "float-rno/float_rno_lib.h"
#include "float-rno/log.h"
#include <math.h>

#define LN2HIGH 0.69314718055994528622676398299518041312694549560546875

double rlibm_rno_log(float x) {
  float_x fix, fit;
  fix.f = x;
  int m = 0;

  if (x == 1.0) return 0.0;
  
  if (fix.x < 0x800000 || fix.x >= 0x7F800000) {
    if ((fix.x & 0x7FFFFFFF) == 0) { // log(+/-0) = -infty
      fix.x = 0xFF800000;
      return fix.f;
    }
    
    if (fix.x > 0x7FFFFFFF) return (x - x) / 0; // Log(-val) = NaN
    if (fix.x >= 0x7F800000) return x + x;
    fix.f *= 8.388608e+06;
    m -= 23;
  }
  
  m += fix.x >> 23;
  m -= 127;
  fix.x &= 0x007FFFFF;
  fix.x |= 0x3F800000;
  
  fit.x = fix.x & 0x007F0000;
  int FIndex = fit.x >> 16;
  fit.x |= 0x3F800000;
  
  double f = fix.f - fit.f;
  f *= log_oneByF[FIndex];
  
  // Find the index of polynomial coefficients
  double_x dX;
  dX.d = f;
  double y;
  
  switch (dX.x) {
    case 0x3f536f2f2f2f2f2f:
      y = 1.185473423478577981171611099853180348873138427734375e-03;
      break;
    case 0x3f53829eb0a7ac2a:
      y = 1.19010172359376741914316344406188363791443407535552978515625e-03;
      break;
    case 0x3f544d9889f2bc5a:
      y = 1.23843623964683979300771543563541854382492601871490478515625e-03;
      break;
    case 0x3f567f6db6db6db7:
      y = 1.37221286158256705091373905958107570768333971500396728515625e-03;
      break;
    case 0x3f579421a70f9fda:
      y = 1.43809133565447910298173983534297803998924791812896728515625e-03;
      break;
    case 0x3f5d6f7e432f7e44:
      y = 1.79498962637764125117867397563031772733666002750396728515625e-03;
      break;
    case 0x3f5fbd2361d2361e:
      y = 1.93530998631358274776614880607894519926048815250396728515625e-03;
      break;
    case 0x3f657497b425ed09:
      y = 2.6156484501205783284316641612576859188266098499298095703125e-03;
      break;
    case 0x3f678d3dcb08d3dd:
      y = 2.8708408002322276415807511540378982317633926868438720703125e-03;
      break;
    case 0x3f6e8a1fd1b7af01:
      y = 3.7210405045140786291224532789101431262679398059844970703125e-03;
      break;
    case 0x3f73155555555555:
      y = 4.648197300592433502119948940389804192818701267242431640625e-03;
      break;
    case 0x3f7740a7ac29eb0a:
      y = 5.660834151209077381994294597689076908864080905914306640625e-03;
      break;
    case 0x3f7a486d6f63aa04:
      y = 6.396228650141911990789633790654988843016326427459716796875e-03;
      break;
    case 0x3f7d5ca1af286bca:
      y = 7.142846240303824152662048874162792344577610492706298828125e-03;
      break;
    default :
      y = 1.961566840976083359038284470443613827228546142578125;
      y *= f;
      y += 1.0126661508894156671356512333659338764846324920654296875e-01;
      y *= f;
      y += -2.4869334246788599163124899860122241079807281494140625e-01;
      y *= f;
      y += 3.33326193927460046051436393099720589816570281982421875e-01;
      y *= f;
      y += -4.9999998244692278603906743228435516357421875e-01;
      y *= f;
      y += 9.9999999998238575660280957890790887176990509033203125e-01;
      y *= f;
      y += 3.4419677847667998993663868441242008455247642327579082888178163557313383e-15;
  }
  
  y += ln_lutHIGH[FIndex];
  y += m * LN2HIGH;
  
  return y;
}