#include "xjx.h"

int main() {
  xjx x2x;
  XML_CHECK(x2x.read_xml("../data/test1.xml"));
  XML_CHECK(x2x.write_xml("../data/test1_out.xml"));
  return 0;
}