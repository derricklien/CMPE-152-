#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"
#include "wci/intermediate/TypeSpec.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(Pcl2Parser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

//    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(Pcl2Parser::HeaderContext *ctx)
{
//    cout << "=== visitHeader: " + ctx->getText() << endl;

    string program_name = ctx->IDENTIFIER()->toString();

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Cannot open assembly file." << endl;
            exit(-99);
    }

    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitMainBlock(Pcl2Parser::MainBlockContext *ctx)
{
//    // Emit the main program header.
//    j_file << endl;
//    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
//    j_file << endl;
//    j_file << "\tnew RunTimer" << endl;
//    j_file << "\tdup" << endl;
//    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
//    j_file << "\tputstatic        " << program_name
//           << "/_runTimer LRunTimer;" << endl;
//    j_file << "\tnew PascalTextIn" << endl;
//    j_file << "\tdup" << endl;
//    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
//    j_file << "\tputstatic        " + program_name
//           << "/_standardIn LPascalTextIn;" << endl;
//
//    auto value = visitChildren(ctx);
//
//    // Emit the main program epilogue.
//    j_file << endl;
//    j_file << "\tgetstatic     " << program_name
//               << "/_runTimer LRunTimer;" << endl;
//    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
//    j_file << endl;
//    j_file << "\treturn" << endl;
//    j_file << endl;
//    j_file << ".limit locals 16" << endl;
//    j_file << ".limit stack 16" << endl;
//    j_file << ".end method" << endl;
//
//    return value;
}

antlrcpp::Any Pass1Visitor::visitBlock(Pcl2Parser::BlockContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitDeclarations(Pcl2Parser::DeclarationsContext *ctx)
{
//    cout << "=== visitDeclarations: " << ctx->getText() << endl;

//    auto value = visitChildren(ctx);
//
//    // Emit the class constructor.
//    j_file << endl;
//    j_file << ".method public <init>()V" << endl;
//    j_file << endl;
//    j_file << "\taload_0" << endl;
//    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
//    j_file << "\treturn" << endl;
//    j_file << endl;
//    j_file << ".limit locals 1" << endl;
//    j_file << ".limit stack 1" << endl;
//    j_file << ".end method" << endl;
//
//    return value;
}

antlrcpp::Any Pass1Visitor::visitDeclList(Pcl2Parser::DeclListContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitDecl(Pcl2Parser::DeclContext *ctx)
{
//    cout << "=== visitDecl: " + ctx->getText() << endl;

//    j_file << "\n; " << ctx->getText() << "\n" << endl;
//    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVarList(Pcl2Parser::VarListContext *ctx)
{
//    cout << "=== visitVarList: " + ctx->getText() << endl;

    variable_id_list.resize(0);
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVarId(Pcl2Parser::VarIdContext *ctx)
{
//    cout << "=== visitVarId: " + ctx->getText() << endl;

    string variable_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitTypeId(Pcl2Parser::TypeIdContext *ctx)
{
//    cout << "=== visitTypeId: " + ctx->getText() << endl;

//    TypeSpec *type;
//    string type_indicator;
//
//    string type_name = ctx->IDENTIFIER()->toString();
//    if (type_name == "integer")
//    {
//        type = Predefined::integer_type;
//        type_indicator = "I";
//    }
//    else if (type_name == "real")
//    {
//        type = Predefined::real_type;
//        type_indicator = "F";
//    }
//    else
//    {
//        type = nullptr;
//        type_indicator = "?";
//    }
//
//    for (SymTabEntry *id : variable_id_list) {
//        id->set_typespec(type);
//
//        // Emit a field declaration.
//        j_file << ".field private static "
//               << id->get_name() << " " << type_indicator << endl;
//    }
//
//    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitCompoundStmt(Pcl2Parser::CompoundStmtContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitStmt(Pcl2Parser::StmtContext *ctx)
{
//    j_file << endl << "; " + ctx->getText() << endl << endl;
//
//    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitStmtList(Pcl2Parser::StmtListContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitAssignmentStmt(Pcl2Parser::AssignmentStmtContext *ctx)
{
//    auto value = visit(ctx->expr());
//
//    string type_indicator =
//                  (ctx->expr()->type == Predefined::integer_type) ? "I"
//                : (ctx->expr()->type == Predefined::real_type)    ? "F"
//                :                                                   "?";
//
//    // Emit a field put instruction.
//    j_file << "\tputstatic\t" << program_name
//           << "/" << ctx->variable()->IDENTIFIER()->toString()
//           << " " << type_indicator << endl;
//
//    return value;
}

antlrcpp::Any Pass1Visitor::visitIf_stmt(Pcl2Parser::If_stmtContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitVariable(Pcl2Parser::VariableContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitExpr(Pcl2Parser::ExprContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitMulDivOp(Pcl2Parser::MulDivOpContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitAddSubOp(Pcl2Parser::AddSubOpContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitRel_op(Pcl2Parser::Rel_opContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitSignedNumber(Pcl2Parser::SignedNumberContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitSign(Pcl2Parser::SignContext *ctx)
{

}

antlrcpp::Any Pass1Visitor::visitNumber(Pcl2Parser::NumberContext *ctx)
{

}


//antlrcpp::Any Pass1Visitor::visitAddSubExpr(Pcl2Parser::AddSubOpContext *ctx)
//{
////    cout << "=== visitAddSubExpr: " + ctx->getText() << endl;
//
//    auto value = visitChildren(ctx);
//
//    TypeSpec *type1 = ctx->expr(0)->type;
//    TypeSpec *type2 = ctx->expr(1)->type;
//
//    bool integer_mode =    (type1 == Predefined::integer_type)
//                        && (type2 == Predefined::integer_type);
//    bool real_mode    =    (type1 == Predefined::real_type)
//                        && (type2 == Predefined::real_type);
//
//    TypeSpec *type = integer_mode ? Predefined::integer_type
//                   : real_mode    ? Predefined::real_type
//                   :                nullptr;
//    ctx->type = type;
//
//    return value;
//}
//
//antlrcpp::Any Pass1Visitor::visitMulDivExpr(Pcl2Parser::MulDivOpContext *ctx)
//{
////    cout << "=== visitMulDivExpr: " + ctx->getText() << endl;
//
//    auto value = visitChildren(ctx);
//
//    TypeSpec *type1 = ctx->expr(0)->type;
//    TypeSpec *type2 = ctx->expr(1)->type;
//
//    bool integer_mode =    (type1 == Predefined::integer_type)
//                        && (type2 == Predefined::integer_type);
//    bool real_mode    =    (type1 == Predefined::real_type)
//                        && (type2 == Predefined::real_type);
//
//    TypeSpec *type = integer_mode ? Predefined::integer_type
//                   : real_mode    ? Predefined::real_type
//                   :                nullptr;
//    ctx->type = type;
//
//    return value;
//}
//
//antlrcpp::Any Pass1Visitor::visitVariableExpr(Pcl2Parser::VariableContext *ctx)
//{
////    cout << "=== visitVariableExpr: " + ctx->getText() << endl;
//
//    string variable_name = ctx->variable()->IDENTIFIER()->toString();
//    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
//
//    ctx->type = variable_id->get_typespec();
//    return visitChildren(ctx);
//}
//
//antlrcpp::Any Pass1Visitor::visitSignedNumberExpr(Pcl2Parser::SignedNumberContext *ctx)
//{
////    cout << "=== visitSignedNumberExpr: " + ctx->getText() << endl;
//
//    auto value = visitChildren(ctx);
//    ctx->type = ctx->signedNumber()->type;
//    return value;
//}
//
//antlrcpp::Any Pass1Visitor::visitSignedNumber(Pcl2Parser::SignContext *ctx)
//{
////    cout << "=== visitSignedNumber: " + ctx->getText() << endl;
//
//    auto value = visit(ctx->number());
//    ctx->type = ctx->number()->type;
//    return value;
//}
//
//antlrcpp::Any Pass1Visitor::visitUnsignedNumberExpr(Pcl2Parser::NumberContext *ctx)
//{
////    cout << "=== visitUnsignedNumberExpr: " + ctx->getText() << endl;
//
//    auto value = visit(ctx->number());
//    ctx->type = ctx->number()->type;
//    return value;
//}
//
//antlrcpp::Any Pass1Visitor::visitParenExpr(Pcl2Parser::ExprContext *ctx)
//{
////    cout << "=== visitParenExpr: " + ctx->getText() << endl;
//
//    auto value = visitChildren(ctx);
//    ctx->type = ctx->expr()->type;
//    return value;
//}
