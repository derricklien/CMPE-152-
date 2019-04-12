
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

  virtual void enterExpr(ExprParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ExprParser::ExprContext *ctx) = 0;

  virtual void enterVariable(ExprParser::VariableContext *ctx) = 0;
  virtual void exitVariable(ExprParser::VariableContext *ctx) = 0;

  virtual void enterCompound_stmt(ExprParser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(ExprParser::Compound_stmtContext *ctx) = 0;

  virtual void enterStmt_list(ExprParser::Stmt_listContext *ctx) = 0;
  virtual void exitStmt_list(ExprParser::Stmt_listContext *ctx) = 0;

  virtual void enterCompoundStmt(ExprParser::CompoundStmtContext *ctx) = 0;
  virtual void exitCompoundStmt(ExprParser::CompoundStmtContext *ctx) = 0;

  virtual void enterAssignmentStmt(ExprParser::AssignmentStmtContext *ctx) = 0;
  virtual void exitAssignmentStmt(ExprParser::AssignmentStmtContext *ctx) = 0;

  virtual void enterEmptyStmt(ExprParser::EmptyStmtContext *ctx) = 0;
  virtual void exitEmptyStmt(ExprParser::EmptyStmtContext *ctx) = 0;

  virtual void enterAssignment_stmt(ExprParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(ExprParser::Assignment_stmtContext *ctx) = 0;


};

