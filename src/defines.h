#pragma once
#include <sstream>
#include "tinyxml2.h"
#include "json.hpp"

using xml_elem = tinyxml2::XMLElement;
using xml_document = tinyxml2::XMLDocument;
using xml_node = tinyxml2::XMLNode;

using json = nlohmann::json;
using json_type = nlohmann::basic_json<>::value_t;

template <typename T>
void assert_equal(T a, T b, int line) {
  if (a != b) {
    std::stringstream ss;
    ss << "Assert on line " << line << " failed!\n";
    std::runtime_error(ss.str());
  }
}

#define XML_CHECK(xml_func_result)\
  if (xml_func_result != tinyxml2::XML_SUCCESS) {\
    throw std::runtime_error("XML function was not successful");\
  }

#define ASSERT(a, b) assert_equal(a, b, __LINE__);
