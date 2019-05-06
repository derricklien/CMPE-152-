#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public Pcl2BaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

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
};

#endif /* PASS2VISITOR_H_ */
