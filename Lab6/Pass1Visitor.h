#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public Pcl2BaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(Pcl2Parser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(Pcl2Parser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(Pcl2Parser::MainBlockContext *ctx) override;
    antlrcpp::Any visitBlock(Pcl2Parser::BlockContext *ctx) override;
    antlrcpp::Any visitDeclarations(Pcl2Parser::DeclarationsContext *ctx) override;
    antlrcpp::Any visitDeclList(Pcl2Parser::DeclListContext *ctx) override;
    antlrcpp::Any visitDecl(Pcl2Parser::DeclContext *ctx) override;
    antlrcpp::Any visitVarList(Pcl2Parser::VarListContext *ctx) override;
    antlrcpp::Any visitVarId(Pcl2Parser::VarIdContext *ctx) override;
    antlrcpp::Any visitTypeId(Pcl2Parser::TypeIdContext *ctx) override;
    antlrcpp::Any visitCompoundStmt(Pcl2Parser::CompoundStmtContext *ctx) override;
    antlrcpp::Any visitStmt(Pcl2Parser::StmtContext *ctx) override;
    antlrcpp::Any visitStmtList(Pcl2Parser::StmtListContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(Pcl2Parser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(Pcl2Parser::If_stmtContext *ctx) override;
    antlrcpp::Any visitVariable(Pcl2Parser::VariableContext *ctx) override;
    antlrcpp::Any visitExpr(Pcl2Parser::ExprContext *ctx) override;
    antlrcpp::Any visitMulDivOp(Pcl2Parser::MulDivOpContext *ctx) override;
    antlrcpp::Any visitAddSubOp(Pcl2Parser::AddSubOpContext *ctx) override;
    antlrcpp::Any visitRel_op(Pcl2Parser::Rel_opContext *ctx) override;
    antlrcpp::Any visitSignedNumber(Pcl2Parser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitSign(Pcl2Parser::SignContext *ctx) override;
    antlrcpp::Any visitNumber(Pcl2Parser::NumberContext *ctx) override;

//    antlrcpp::Any visitAddSubExpr(Pcl2Parser::AddSubOpContext *ctx);
//    antlrcpp::Any visitMulDivExpr(Pcl2Parser::MulDivOpContext *ctx);
//    antlrcpp::Any visitVariableExpr(Pcl2Parser::VariableContext *ctx);
//    antlrcpp::Any visitSignedNumberExpr(Pcl2Parser::SignedNumberContext *ctx);
//    antlrcpp::Any visitSignedNumber(Pcl2Parser::SignContext *ctx);
//    antlrcpp::Any visitUnsignedNumberExpr(Pcl2Parser::NumberContext *ctx);
//    antlrcpp::Any visitParenExpr(Pcl2Parser::ExprContext *ctx);
};

#endif /* PASS1VISITOR_H_ */
