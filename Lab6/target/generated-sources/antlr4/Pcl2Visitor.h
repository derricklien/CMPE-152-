
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Pcl2Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Pcl2Parser.
 */
class  Pcl2Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Pcl2Parser.
   */
    virtual antlrcpp::Any visitProgram(Pcl2Parser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(Pcl2Parser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitMainBlock(Pcl2Parser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(Pcl2Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(Pcl2Parser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(Pcl2Parser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(Pcl2Parser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarList(Pcl2Parser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitVarId(Pcl2Parser::VarIdContext *context) = 0;

    virtual antlrcpp::Any visitTypeId(Pcl2Parser::TypeIdContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(Pcl2Parser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(Pcl2Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(Pcl2Parser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(Pcl2Parser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(Pcl2Parser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable(Pcl2Parser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpr(Pcl2Parser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOp(Pcl2Parser::MulDivOpContext *context) = 0;

    virtual antlrcpp::Any visitAddSubOp(Pcl2Parser::AddSubOpContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(Pcl2Parser::Rel_opContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(Pcl2Parser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(Pcl2Parser::SignContext *context) = 0;

    virtual antlrcpp::Any visitNumber(Pcl2Parser::NumberContext *context) = 0;


};

