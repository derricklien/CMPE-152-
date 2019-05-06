
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Pcl2Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    PROGRAM = 8, VAR = 9, BEGIN = 10, END = 11, IF = 12, THEN = 13, ELSE = 14, 
    IDENTIFIER = 15, INTEGER = 16, FLOAT = 17, MUL_OP = 18, DIV_OP = 19, 
    ADD_OP = 20, SUB_OP = 21, EQ_OP = 22, NE_OP = 23, LT_OP = 24, LE_OP = 25, 
    GT_OP = 26, GE_OP = 27, NEWLINE = 28, WS = 29
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleMainBlock = 2, RuleBlock = 3, RuleDeclarations = 4, 
    RuleDeclList = 5, RuleDecl = 6, RuleVarList = 7, RuleVarId = 8, RuleTypeId = 9, 
    RuleCompoundStmt = 10, RuleStmt = 11, RuleStmtList = 12, RuleAssignmentStmt = 13, 
    RuleIf_stmt = 14, RuleVariable = 15, RuleExpr = 16, RuleMulDivOp = 17, 
    RuleAddSubOp = 18, RuleRel_op = 19, RuleSignedNumber = 20, RuleSign = 21, 
    RuleNumber = 22
  };

  Pcl2Parser(antlr4::TokenStream *input);
  ~Pcl2Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class MainBlockContext;
  class BlockContext;
  class DeclarationsContext;
  class DeclListContext;
  class DeclContext;
  class VarListContext;
  class VarIdContext;
  class TypeIdContext;
  class CompoundStmtContext;
  class StmtContext;
  class StmtListContext;
  class AssignmentStmtContext;
  class If_stmtContext;
  class VariableContext;
  class ExprContext;
  class MulDivOpContext;
  class AddSubOpContext;
  class Rel_opContext;
  class SignedNumberContext;
  class SignContext;
  class NumberContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    MainBlockContext *mainBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  MainBlockContext : public antlr4::ParserRuleContext {
  public:
    MainBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainBlockContext* mainBlock();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationsContext *declarations();
    CompoundStmtContext *compoundStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    DeclListContext *declList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  DeclListContext : public antlr4::ParserRuleContext {
  public:
    DeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclListContext* declList();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarListContext *varList();
    TypeIdContext *typeId();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  VarListContext : public antlr4::ParserRuleContext {
  public:
    VarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarIdContext *> varId();
    VarIdContext* varId(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarListContext* varList();

  class  VarIdContext : public antlr4::ParserRuleContext {
  public:
    VarIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIdContext* varId();

  class  TypeIdContext : public antlr4::ParserRuleContext {
  public:
    TypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdContext* typeId();

  class  CompoundStmtContext : public antlr4::ParserRuleContext {
  public:
    CompoundStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStmtContext* compoundStmt();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStmtContext *compoundStmt();
    AssignmentStmtContext *assignmentStmt();
    If_stmtContext *if_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  StmtListContext : public antlr4::ParserRuleContext {
  public:
    StmtListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtListContext* stmtList();

  class  AssignmentStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStmtContext* assignmentStmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    SignedNumberContext *signedNumber();
    VariableContext *variable();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    MulDivOpContext *mulDivOp();
    AddSubOpContext *addSubOp();
    Rel_opContext *rel_op();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  MulDivOpContext : public antlr4::ParserRuleContext {
  public:
    MulDivOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulDivOpContext* mulDivOp();

  class  AddSubOpContext : public antlr4::ParserRuleContext {
  public:
    AddSubOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddSubOpContext* addSubOp();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_opContext* rel_op();

  class  SignedNumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    SignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    NumberContext *number();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedNumberContext* signedNumber();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *FLOAT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

