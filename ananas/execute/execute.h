//
//  execute.h
//  ananasExample
//
//  Created by jerry.yong on 2017/12/26.
//  Copyright © 2017年 yongpengliang. All rights reserved.
//

#ifndef execute_h
#define execute_h
#import "runenv.h"

/*built-in.m*/
void ananas_add_built_in(ANCInterpreter *inter);
/* eval.m */
BOOL ananas_equal_value(NSUInteger lineNumber,ANEValue *value1, ANEValue *value2);
ANEValue *ane_eval_expression(ANCInterpreter *inter, ANEScopeChain *scope,ANCExpression *expr);
void ane_interpret(ANCInterpreter *inter);
void ananas_assign_value_to_identifer_expr(ANCInterpreter *inter, ANEScopeChain *scope, NSString *identifer,ANEValue *operValue);
/*execute.m*/
ANEStatementResult *ane_execute_statement_list(ANCInterpreter *inter, ANEScopeChain *scope, NSArray<ANCStatement *> *statementList);
ANEValue * ananas_call_ananas_function(ANCInterpreter *inter, ANEScopeChain *scope, ANCFunctionDefinition *func, NSArray<ANEValue *> *args);
#endif /* execute_h */