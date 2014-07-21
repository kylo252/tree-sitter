#ifndef COMPILER_PREPARE_GRAMMAR_TOKEN_DESCRIPTION_H_
#define COMPILER_PREPARE_GRAMMAR_TOKEN_DESCRIPTION_H_

#include <string>
#include "tree_sitter/compiler.h"

namespace tree_sitter {
namespace prepare_grammar {

std::string token_description(const rules::rule_ptr &);

}  // namespace prepare_grammar
}  // namespace tree_sitter

#endif  // COMPILER_PREPARE_GRAMMAR_TOKEN_DESCRIPTION_H_
