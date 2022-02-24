#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0, 5.0, 6.0);
  assertEquals("ul=(3,4),w=5,h=7", boxToString(b1,1), "boxToString(b1,1)");

  initBox(&b2,3.14159,6.2831853071,7.696969,8.420420 );
  assertEquals("ul=(3.14,6.28),w=7.69,h=8.42", boxToString(b2,3), "boxToString(b2,3)");
  assertEquals("ul=(3,6),w=7,h=8", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.142,6.283),w=7.697,h=8.424", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1416,6.2832),w=7.6970,h=8.4242", boxToString(b2,5), "boxToString(b2,5)");


  return 0;
}
