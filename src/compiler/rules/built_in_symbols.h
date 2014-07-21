#ifndef COMPILER_RULES_BUILT_IN_SYMBOLS_H_
#define COMPILER_RULES_BUILT_IN_SYMBOLS_H_

#include "compiler/rules/symbol.h"

namespace tree_sitter {
namespace rules {
Symbol ERROR();
Symbol START();
Symbol END_OF_INPUT();
}
}

#endif  // COMPILER_RULES_BUILT_IN_SYMBOLS_H_
