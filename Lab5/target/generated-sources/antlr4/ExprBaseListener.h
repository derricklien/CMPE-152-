
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterStatements(ExprParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(ExprParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(ExprParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ExprParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpr(ExprParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ExprParser::ExprContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(ExprParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(ExprParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterFunction_declare(ExprParser::Function_declareContext * /*ctx*/) override { }
  virtual void exitFunction_declare(ExprParser::Function_declareContext * /*ctx*/) override { }

  virtual void enterFunction_call(ExprParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(ExprParser::Function_callContext * /*ctx*/) override { }

  virtual void enterString_declare(ExprParser::String_declareContext * /*ctx*/) override { }
  virtual void exitString_declare(ExprParser::String_declareContext * /*ctx*/) override { }

  virtual void enterBool_declare(ExprParser::Bool_declareContext * /*ctx*/) override { }
  virtual void exitBool_declare(ExprParser::Bool_declareContext * /*ctx*/) override { }

  virtual void enterInt_declare(ExprParser::Int_declareContext * /*ctx*/) override { }
  virtual void exitInt_declare(ExprParser::Int_declareContext * /*ctx*/) override { }

  virtual void enterBootleg_for_loop(ExprParser::Bootleg_for_loopContext * /*ctx*/) override { }
  virtual void exitBootleg_for_loop(ExprParser::Bootleg_for_loopContext * /*ctx*/) override { }

  virtual void enterIf_statement(ExprParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(ExprParser::If_statementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

