
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

  virtual void enterExpr(ExprParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ExprParser::ExprContext * /*ctx*/) override { }

  virtual void enterVariable(ExprParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(ExprParser::VariableContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(ExprParser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(ExprParser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterStmt_list(ExprParser::Stmt_listContext * /*ctx*/) override { }
  virtual void exitStmt_list(ExprParser::Stmt_listContext * /*ctx*/) override { }

  virtual void enterCompoundStmt(ExprParser::CompoundStmtContext * /*ctx*/) override { }
  virtual void exitCompoundStmt(ExprParser::CompoundStmtContext * /*ctx*/) override { }

  virtual void enterAssignmentStmt(ExprParser::AssignmentStmtContext * /*ctx*/) override { }
  virtual void exitAssignmentStmt(ExprParser::AssignmentStmtContext * /*ctx*/) override { }

  virtual void enterEmptyStmt(ExprParser::EmptyStmtContext * /*ctx*/) override { }
  virtual void exitEmptyStmt(ExprParser::EmptyStmtContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(ExprParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(ExprParser::Assignment_stmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

