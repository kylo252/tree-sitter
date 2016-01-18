#ifndef RUNTIME_PARSER_H_
#define RUNTIME_PARSER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "runtime/stack.h"
#include "runtime/vector.h"

typedef struct {
  TSLexer lexer;
  Stack *stack;
  const TSLanguage *language;
  Vector lookahead_states;
  Vector reduce_parents;
  TSTree *finished_tree;
  bool is_split;
} TSParser;

bool ts_parser_init(TSParser *);
void ts_parser_destroy(TSParser *);
TSDebugger ts_parser_debugger(const TSParser *);
void ts_parser_set_debugger(TSParser *, TSDebugger);
TSTree *ts_parser_parse(TSParser *, TSInput, TSTree *);

#ifdef __cplusplus
}
#endif

#endif  // RUNTIME_PARSER_H_
