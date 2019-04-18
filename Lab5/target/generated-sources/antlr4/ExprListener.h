
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterStatements(ExprParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(ExprParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(ExprParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ExprParser::StatementContext *ctx) = 0;

  virtual void enterExpr(ExprParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ExprParser::ExprContext *ctx) = 0;

  virtual void enterAssignment_statement(ExprParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(ExprParser::Assignment_statementContext *ctx) = 0;

  virtual void enterFunction_declare(ExprParser::Function_declareContext *ctx) = 0;
  virtual void exitFunction_declare(ExprParser::Function_declareContext *ctx) = 0;

  virtual void enterFunction_call(ExprParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(ExprParser::Function_callContext *ctx) = 0;

  virtual void enterString_declare(ExprParser::String_declareContext *ctx) = 0;
  virtual void exitString_declare(ExprParser::String_declareContext *ctx) = 0;

  virtual void enterBool_declare(ExprParser::Bool_declareContext *ctx) = 0;
  virtual void exitBool_declare(ExprParser::Bool_declareContext *ctx) = 0;

  virtual void enterInt_declare(ExprParser::Int_declareContext *ctx) = 0;
  virtual void exitInt_declare(ExprParser::Int_declareContext *ctx) = 0;

  virtual void enterBootleg_for_loop(ExprParser::Bootleg_for_loopContext *ctx) = 0;
  virtual void exitBootleg_for_loop(ExprParser::Bootleg_for_loopContext *ctx) = 0;

  virtual void enterIf_statement(ExprParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(ExprParser::If_statementContext *ctx) = 0;


};

