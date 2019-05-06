#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(Pcl2Parser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(Pcl2Parser::HeaderContext *ctx)
{
    program_name = ctx->IDENTIFIER()->toString();
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMainBlock(Pcl2Parser::MainBlockContext *ctx)
{
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitBlock(Pcl2Parser::BlockContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitDeclarations(Pcl2Parser::DeclarationsContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitDeclList(Pcl2Parser::DeclListContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitDecl(Pcl2Parser::DeclContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitVarList(Pcl2Parser::VarListContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitVarId(Pcl2Parser::VarIdContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitTypeId(Pcl2Parser::TypeIdContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitCompoundStmt(Pcl2Parser::CompoundStmtContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitStmt(Pcl2Parser::StmtContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitStmtList(Pcl2Parser::StmtListContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitAssignmentStmt(Pcl2Parser::AssignmentStmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->variable()->IDENTIFIER()->toString()
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitIf_stmt(Pcl2Parser::If_stmtContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitVariable(Pcl2Parser::VariableContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitExpr(Pcl2Parser::ExprContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitMulDivOp(Pcl2Parser::MulDivOpContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitAddSubOp(Pcl2Parser::AddSubOpContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitRel_op(Pcl2Parser::Rel_opContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitSignedNumber(Pcl2Parser::SignedNumberContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitSign(Pcl2Parser::SignContext *ctx)
{

}

antlrcpp::Any Pass2Visitor::visitNumber(Pcl2Parser::NumberContext *ctx)
{

}
