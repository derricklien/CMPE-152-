
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.2


#include "Pcl2Visitor.h"

#include "Pcl2Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Pcl2Parser::Pcl2Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Pcl2Parser::~Pcl2Parser() {
  delete _interpreter;
}

std::string Pcl2Parser::getGrammarFileName() const {
  return "Pcl2.g4";
}

const std::vector<std::string>& Pcl2Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Pcl2Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

Pcl2Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::HeaderContext* Pcl2Parser::ProgramContext::header() {
  return getRuleContext<Pcl2Parser::HeaderContext>(0);
}

Pcl2Parser::MainBlockContext* Pcl2Parser::ProgramContext::mainBlock() {
  return getRuleContext<Pcl2Parser::MainBlockContext>(0);
}


size_t Pcl2Parser::ProgramContext::getRuleIndex() const {
  return Pcl2Parser::RuleProgram;
}


antlrcpp::Any Pcl2Parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ProgramContext* Pcl2Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, Pcl2Parser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    header();
    setState(47);
    mainBlock();
    setState(48);
    match(Pcl2Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

Pcl2Parser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::HeaderContext::PROGRAM() {
  return getToken(Pcl2Parser::PROGRAM, 0);
}

tree::TerminalNode* Pcl2Parser::HeaderContext::IDENTIFIER() {
  return getToken(Pcl2Parser::IDENTIFIER, 0);
}


size_t Pcl2Parser::HeaderContext::getRuleIndex() const {
  return Pcl2Parser::RuleHeader;
}


antlrcpp::Any Pcl2Parser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::HeaderContext* Pcl2Parser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, Pcl2Parser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(Pcl2Parser::PROGRAM);
    setState(51);
    match(Pcl2Parser::IDENTIFIER);
    setState(52);
    match(Pcl2Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

Pcl2Parser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::BlockContext* Pcl2Parser::MainBlockContext::block() {
  return getRuleContext<Pcl2Parser::BlockContext>(0);
}


size_t Pcl2Parser::MainBlockContext::getRuleIndex() const {
  return Pcl2Parser::RuleMainBlock;
}


antlrcpp::Any Pcl2Parser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::MainBlockContext* Pcl2Parser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, Pcl2Parser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Pcl2Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::DeclarationsContext* Pcl2Parser::BlockContext::declarations() {
  return getRuleContext<Pcl2Parser::DeclarationsContext>(0);
}

Pcl2Parser::CompoundStmtContext* Pcl2Parser::BlockContext::compoundStmt() {
  return getRuleContext<Pcl2Parser::CompoundStmtContext>(0);
}


size_t Pcl2Parser::BlockContext::getRuleIndex() const {
  return Pcl2Parser::RuleBlock;
}


antlrcpp::Any Pcl2Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::BlockContext* Pcl2Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, Pcl2Parser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    declarations();
    setState(57);
    compoundStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

Pcl2Parser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::DeclarationsContext::VAR() {
  return getToken(Pcl2Parser::VAR, 0);
}

Pcl2Parser::DeclListContext* Pcl2Parser::DeclarationsContext::declList() {
  return getRuleContext<Pcl2Parser::DeclListContext>(0);
}


size_t Pcl2Parser::DeclarationsContext::getRuleIndex() const {
  return Pcl2Parser::RuleDeclarations;
}


antlrcpp::Any Pcl2Parser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclarationsContext* Pcl2Parser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, Pcl2Parser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(Pcl2Parser::VAR);
    setState(60);
    declList();
    setState(61);
    match(Pcl2Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

Pcl2Parser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl2Parser::DeclContext *> Pcl2Parser::DeclListContext::decl() {
  return getRuleContexts<Pcl2Parser::DeclContext>();
}

Pcl2Parser::DeclContext* Pcl2Parser::DeclListContext::decl(size_t i) {
  return getRuleContext<Pcl2Parser::DeclContext>(i);
}


size_t Pcl2Parser::DeclListContext::getRuleIndex() const {
  return Pcl2Parser::RuleDeclList;
}


antlrcpp::Any Pcl2Parser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclListContext* Pcl2Parser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 10, Pcl2Parser::RuleDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    decl();
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(64);
        match(Pcl2Parser::T__1);
        setState(65);
        decl(); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

Pcl2Parser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::VarListContext* Pcl2Parser::DeclContext::varList() {
  return getRuleContext<Pcl2Parser::VarListContext>(0);
}

Pcl2Parser::TypeIdContext* Pcl2Parser::DeclContext::typeId() {
  return getRuleContext<Pcl2Parser::TypeIdContext>(0);
}


size_t Pcl2Parser::DeclContext::getRuleIndex() const {
  return Pcl2Parser::RuleDecl;
}


antlrcpp::Any Pcl2Parser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclContext* Pcl2Parser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, Pcl2Parser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    varList();
    setState(72);
    match(Pcl2Parser::T__2);
    setState(73);
    typeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

Pcl2Parser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl2Parser::VarIdContext *> Pcl2Parser::VarListContext::varId() {
  return getRuleContexts<Pcl2Parser::VarIdContext>();
}

Pcl2Parser::VarIdContext* Pcl2Parser::VarListContext::varId(size_t i) {
  return getRuleContext<Pcl2Parser::VarIdContext>(i);
}


size_t Pcl2Parser::VarListContext::getRuleIndex() const {
  return Pcl2Parser::RuleVarList;
}


antlrcpp::Any Pcl2Parser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::VarListContext* Pcl2Parser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 14, Pcl2Parser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    varId();
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl2Parser::T__3) {
      setState(76);
      match(Pcl2Parser::T__3);
      setState(77);
      varId();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIdContext ------------------------------------------------------------------

Pcl2Parser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::VarIdContext::IDENTIFIER() {
  return getToken(Pcl2Parser::IDENTIFIER, 0);
}


size_t Pcl2Parser::VarIdContext::getRuleIndex() const {
  return Pcl2Parser::RuleVarId;
}


antlrcpp::Any Pcl2Parser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::VarIdContext* Pcl2Parser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 16, Pcl2Parser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(Pcl2Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

Pcl2Parser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::TypeIdContext::IDENTIFIER() {
  return getToken(Pcl2Parser::IDENTIFIER, 0);
}


size_t Pcl2Parser::TypeIdContext::getRuleIndex() const {
  return Pcl2Parser::RuleTypeId;
}


antlrcpp::Any Pcl2Parser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::TypeIdContext* Pcl2Parser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 18, Pcl2Parser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(Pcl2Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

Pcl2Parser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::CompoundStmtContext::BEGIN() {
  return getToken(Pcl2Parser::BEGIN, 0);
}

Pcl2Parser::StmtListContext* Pcl2Parser::CompoundStmtContext::stmtList() {
  return getRuleContext<Pcl2Parser::StmtListContext>(0);
}

tree::TerminalNode* Pcl2Parser::CompoundStmtContext::END() {
  return getToken(Pcl2Parser::END, 0);
}


size_t Pcl2Parser::CompoundStmtContext::getRuleIndex() const {
  return Pcl2Parser::RuleCompoundStmt;
}


antlrcpp::Any Pcl2Parser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::CompoundStmtContext* Pcl2Parser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, Pcl2Parser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(Pcl2Parser::BEGIN);
    setState(88);
    stmtList();
    setState(89);
    match(Pcl2Parser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

Pcl2Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::CompoundStmtContext* Pcl2Parser::StmtContext::compoundStmt() {
  return getRuleContext<Pcl2Parser::CompoundStmtContext>(0);
}

Pcl2Parser::AssignmentStmtContext* Pcl2Parser::StmtContext::assignmentStmt() {
  return getRuleContext<Pcl2Parser::AssignmentStmtContext>(0);
}

Pcl2Parser::If_stmtContext* Pcl2Parser::StmtContext::if_stmt() {
  return getRuleContext<Pcl2Parser::If_stmtContext>(0);
}


size_t Pcl2Parser::StmtContext::getRuleIndex() const {
  return Pcl2Parser::RuleStmt;
}


antlrcpp::Any Pcl2Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::StmtContext* Pcl2Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 22, Pcl2Parser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(91);
        compoundStmt();
        break;
      }

      case Pcl2Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(92);
        assignmentStmt();
        break;
      }

      case Pcl2Parser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(93);
        if_stmt();
        break;
      }

      case Pcl2Parser::T__1:
      case Pcl2Parser::END:
      case Pcl2Parser::ELSE: {
        enterOuterAlt(_localctx, 4);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

Pcl2Parser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl2Parser::StmtContext *> Pcl2Parser::StmtListContext::stmt() {
  return getRuleContexts<Pcl2Parser::StmtContext>();
}

Pcl2Parser::StmtContext* Pcl2Parser::StmtListContext::stmt(size_t i) {
  return getRuleContext<Pcl2Parser::StmtContext>(i);
}


size_t Pcl2Parser::StmtListContext::getRuleIndex() const {
  return Pcl2Parser::RuleStmtList;
}


antlrcpp::Any Pcl2Parser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::StmtListContext* Pcl2Parser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 24, Pcl2Parser::RuleStmtList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    stmt();
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl2Parser::T__1) {
      setState(98);
      match(Pcl2Parser::T__1);
      setState(99);
      stmt();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmtContext ------------------------------------------------------------------

Pcl2Parser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::VariableContext* Pcl2Parser::AssignmentStmtContext::variable() {
  return getRuleContext<Pcl2Parser::VariableContext>(0);
}

Pcl2Parser::ExprContext* Pcl2Parser::AssignmentStmtContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}


size_t Pcl2Parser::AssignmentStmtContext::getRuleIndex() const {
  return Pcl2Parser::RuleAssignmentStmt;
}


antlrcpp::Any Pcl2Parser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::AssignmentStmtContext* Pcl2Parser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, Pcl2Parser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    variable();
    setState(106);
    match(Pcl2Parser::T__4);
    setState(107);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

Pcl2Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::If_stmtContext::IF() {
  return getToken(Pcl2Parser::IF, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::If_stmtContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

tree::TerminalNode* Pcl2Parser::If_stmtContext::THEN() {
  return getToken(Pcl2Parser::THEN, 0);
}

std::vector<Pcl2Parser::StmtContext *> Pcl2Parser::If_stmtContext::stmt() {
  return getRuleContexts<Pcl2Parser::StmtContext>();
}

Pcl2Parser::StmtContext* Pcl2Parser::If_stmtContext::stmt(size_t i) {
  return getRuleContext<Pcl2Parser::StmtContext>(i);
}

tree::TerminalNode* Pcl2Parser::If_stmtContext::ELSE() {
  return getToken(Pcl2Parser::ELSE, 0);
}


size_t Pcl2Parser::If_stmtContext::getRuleIndex() const {
  return Pcl2Parser::RuleIf_stmt;
}


antlrcpp::Any Pcl2Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::If_stmtContext* Pcl2Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl2Parser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(Pcl2Parser::IF);
    setState(110);
    expr(0);
    setState(111);
    match(Pcl2Parser::THEN);
    setState(112);
    stmt();
    setState(115);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(113);
      match(Pcl2Parser::ELSE);
      setState(114);
      stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

Pcl2Parser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::VariableContext::IDENTIFIER() {
  return getToken(Pcl2Parser::IDENTIFIER, 0);
}


size_t Pcl2Parser::VariableContext::getRuleIndex() const {
  return Pcl2Parser::RuleVariable;
}


antlrcpp::Any Pcl2Parser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::VariableContext* Pcl2Parser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 30, Pcl2Parser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(Pcl2Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

Pcl2Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::NumberContext* Pcl2Parser::ExprContext::number() {
  return getRuleContext<Pcl2Parser::NumberContext>(0);
}

Pcl2Parser::SignedNumberContext* Pcl2Parser::ExprContext::signedNumber() {
  return getRuleContext<Pcl2Parser::SignedNumberContext>(0);
}

Pcl2Parser::VariableContext* Pcl2Parser::ExprContext::variable() {
  return getRuleContext<Pcl2Parser::VariableContext>(0);
}

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::ExprContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::ExprContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

Pcl2Parser::MulDivOpContext* Pcl2Parser::ExprContext::mulDivOp() {
  return getRuleContext<Pcl2Parser::MulDivOpContext>(0);
}

Pcl2Parser::AddSubOpContext* Pcl2Parser::ExprContext::addSubOp() {
  return getRuleContext<Pcl2Parser::AddSubOpContext>(0);
}

Pcl2Parser::Rel_opContext* Pcl2Parser::ExprContext::rel_op() {
  return getRuleContext<Pcl2Parser::Rel_opContext>(0);
}


size_t Pcl2Parser::ExprContext::getRuleIndex() const {
  return Pcl2Parser::RuleExpr;
}


antlrcpp::Any Pcl2Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


Pcl2Parser::ExprContext* Pcl2Parser::expr() {
   return expr(0);
}

Pcl2Parser::ExprContext* Pcl2Parser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  Pcl2Parser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, Pcl2Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::INTEGER:
      case Pcl2Parser::FLOAT: {
        setState(120);
        number();
        break;
      }

      case Pcl2Parser::ADD_OP:
      case Pcl2Parser::SUB_OP: {
        setState(121);
        signedNumber();
        break;
      }

      case Pcl2Parser::IDENTIFIER: {
        setState(122);
        variable();
        break;
      }

      case Pcl2Parser::T__5: {
        setState(123);
        match(Pcl2Parser::T__5);
        setState(124);
        expr(0);
        setState(125);
        match(Pcl2Parser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(141);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(130);
          mulDivOp();
          setState(131);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(133);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(134);
          addSubOp();
          setState(135);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(138);
          rel_op();
          setState(139);
          expr(6);
          break;
        }

        } 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulDivOpContext ------------------------------------------------------------------

Pcl2Parser::MulDivOpContext::MulDivOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::MulDivOpContext::MUL_OP() {
  return getToken(Pcl2Parser::MUL_OP, 0);
}

tree::TerminalNode* Pcl2Parser::MulDivOpContext::DIV_OP() {
  return getToken(Pcl2Parser::DIV_OP, 0);
}


size_t Pcl2Parser::MulDivOpContext::getRuleIndex() const {
  return Pcl2Parser::RuleMulDivOp;
}


antlrcpp::Any Pcl2Parser::MulDivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitMulDivOp(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::MulDivOpContext* Pcl2Parser::mulDivOp() {
  MulDivOpContext *_localctx = _tracker.createInstance<MulDivOpContext>(_ctx, getState());
  enterRule(_localctx, 34, Pcl2Parser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!(_la == Pcl2Parser::MUL_OP

    || _la == Pcl2Parser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubOpContext ------------------------------------------------------------------

Pcl2Parser::AddSubOpContext::AddSubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::AddSubOpContext::ADD_OP() {
  return getToken(Pcl2Parser::ADD_OP, 0);
}

tree::TerminalNode* Pcl2Parser::AddSubOpContext::SUB_OP() {
  return getToken(Pcl2Parser::SUB_OP, 0);
}


size_t Pcl2Parser::AddSubOpContext::getRuleIndex() const {
  return Pcl2Parser::RuleAddSubOp;
}


antlrcpp::Any Pcl2Parser::AddSubOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAddSubOp(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::AddSubOpContext* Pcl2Parser::addSubOp() {
  AddSubOpContext *_localctx = _tracker.createInstance<AddSubOpContext>(_ctx, getState());
  enterRule(_localctx, 36, Pcl2Parser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    _la = _input->LA(1);
    if (!(_la == Pcl2Parser::ADD_OP

    || _la == Pcl2Parser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

Pcl2Parser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::EQ_OP() {
  return getToken(Pcl2Parser::EQ_OP, 0);
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::NE_OP() {
  return getToken(Pcl2Parser::NE_OP, 0);
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::LT_OP() {
  return getToken(Pcl2Parser::LT_OP, 0);
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::LE_OP() {
  return getToken(Pcl2Parser::LE_OP, 0);
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::GT_OP() {
  return getToken(Pcl2Parser::GT_OP, 0);
}

tree::TerminalNode* Pcl2Parser::Rel_opContext::GE_OP() {
  return getToken(Pcl2Parser::GE_OP, 0);
}


size_t Pcl2Parser::Rel_opContext::getRuleIndex() const {
  return Pcl2Parser::RuleRel_op;
}


antlrcpp::Any Pcl2Parser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Rel_opContext* Pcl2Parser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 38, Pcl2Parser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::EQ_OP)
      | (1ULL << Pcl2Parser::NE_OP)
      | (1ULL << Pcl2Parser::LT_OP)
      | (1ULL << Pcl2Parser::LE_OP)
      | (1ULL << Pcl2Parser::GT_OP)
      | (1ULL << Pcl2Parser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedNumberContext ------------------------------------------------------------------

Pcl2Parser::SignedNumberContext::SignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::SignContext* Pcl2Parser::SignedNumberContext::sign() {
  return getRuleContext<Pcl2Parser::SignContext>(0);
}

Pcl2Parser::NumberContext* Pcl2Parser::SignedNumberContext::number() {
  return getRuleContext<Pcl2Parser::NumberContext>(0);
}


size_t Pcl2Parser::SignedNumberContext::getRuleIndex() const {
  return Pcl2Parser::RuleSignedNumber;
}


antlrcpp::Any Pcl2Parser::SignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitSignedNumber(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::SignedNumberContext* Pcl2Parser::signedNumber() {
  SignedNumberContext *_localctx = _tracker.createInstance<SignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 40, Pcl2Parser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    sign();
    setState(153);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

Pcl2Parser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::SignContext::ADD_OP() {
  return getToken(Pcl2Parser::ADD_OP, 0);
}

tree::TerminalNode* Pcl2Parser::SignContext::SUB_OP() {
  return getToken(Pcl2Parser::SUB_OP, 0);
}


size_t Pcl2Parser::SignContext::getRuleIndex() const {
  return Pcl2Parser::RuleSign;
}


antlrcpp::Any Pcl2Parser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::SignContext* Pcl2Parser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 42, Pcl2Parser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    _la = _input->LA(1);
    if (!(_la == Pcl2Parser::ADD_OP

    || _la == Pcl2Parser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

Pcl2Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::NumberContext::INTEGER() {
  return getToken(Pcl2Parser::INTEGER, 0);
}

tree::TerminalNode* Pcl2Parser::NumberContext::FLOAT() {
  return getToken(Pcl2Parser::FLOAT, 0);
}


size_t Pcl2Parser::NumberContext::getRuleIndex() const {
  return Pcl2Parser::RuleNumber;
}


antlrcpp::Any Pcl2Parser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::NumberContext* Pcl2Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 44, Pcl2Parser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _la = _input->LA(1);
    if (!(_la == Pcl2Parser::INTEGER

    || _la == Pcl2Parser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Pcl2Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Pcl2Parser::_decisionToDFA;
atn::PredictionContextCache Pcl2Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Pcl2Parser::_atn;
std::vector<uint16_t> Pcl2Parser::_serializedATN;

std::vector<std::string> Pcl2Parser::_ruleNames = {
  "program", "header", "mainBlock", "block", "declarations", "declList", 
  "decl", "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", 
  "assignmentStmt", "if_stmt", "variable", "expr", "mulDivOp", "addSubOp", 
  "rel_op", "signedNumber", "sign", "number"
};

std::vector<std::string> Pcl2Parser::_literalNames = {
  "", "'.'", "';'", "':'", "','", "':='", "'('", "')'", "'PROGRAM'", "'VAR'", 
  "'BEGIN'", "'END'", "'IF'", "'THEN'", "'ELSE'", "", "", "", "'*'", "'/'", 
  "'+'", "'-'", "'='", "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> Pcl2Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "PROGRAM", "VAR", "BEGIN", "END", "IF", 
  "THEN", "ELSE", "IDENTIFIER", "INTEGER", "FLOAT", "MUL_OP", "DIV_OP", 
  "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", 
  "NEWLINE", "WS"
};

dfa::Vocabulary Pcl2Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Pcl2Parser::_tokenNames;

Pcl2Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0xa2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x45, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x48, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x51, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x54, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x62, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0x67, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x6a, 0xb, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x76, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x82, 0xa, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x90, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x93, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x2, 0x3, 0x22, 0x19, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0x6, 
    0x3, 0x2, 0x14, 0x15, 0x3, 0x2, 0x16, 0x17, 0x3, 0x2, 0x18, 0x1d, 0x3, 
    0x2, 0x12, 0x13, 0x2, 0x97, 0x2, 0x30, 0x3, 0x2, 0x2, 0x2, 0x4, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x38, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x49, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x14, 0x57, 0x3, 0x2, 0x2, 0x2, 0x16, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x77, 0x3, 0x2, 0x2, 0x2, 0x22, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x94, 0x3, 0x2, 0x2, 0x2, 0x26, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x98, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
    0x5, 0x4, 0x3, 0x2, 0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 0x33, 0x7, 
    0x3, 0x2, 0x2, 0x33, 0x3, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0xa, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x11, 0x2, 0x2, 0x36, 0x37, 0x7, 0x4, 0x2, 
    0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x8, 0x5, 0x2, 
    0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xa, 0x6, 0x2, 0x3b, 
    0x3c, 0x5, 0x16, 0xc, 0x2, 0x3c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x7, 0xb, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0xc, 0x7, 0x2, 0x3f, 0x40, 0x7, 
    0x4, 0x2, 0x2, 0x40, 0xb, 0x3, 0x2, 0x2, 0x2, 0x41, 0x46, 0x5, 0xe, 
    0x8, 0x2, 0x42, 0x43, 0x7, 0x4, 0x2, 0x2, 0x43, 0x45, 0x5, 0xe, 0x8, 
    0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 
    0x5, 0x10, 0x9, 0x2, 0x4a, 0x4b, 0x7, 0x5, 0x2, 0x2, 0x4b, 0x4c, 0x5, 
    0x14, 0xb, 0x2, 0x4c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x52, 0x5, 0x12, 
    0xa, 0x2, 0x4e, 0x4f, 0x7, 0x6, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x12, 0xa, 
    0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 
    0x7, 0x11, 0x2, 0x2, 0x56, 0x13, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 
    0x11, 0x2, 0x2, 0x58, 0x15, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0xc, 
    0x2, 0x2, 0x5a, 0x5b, 0x5, 0x1a, 0xe, 0x2, 0x5b, 0x5c, 0x7, 0xd, 0x2, 
    0x2, 0x5c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x62, 0x5, 0x16, 0xc, 0x2, 
    0x5e, 0x62, 0x5, 0x1c, 0xf, 0x2, 0x5f, 0x62, 0x5, 0x1e, 0x10, 0x2, 0x60, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x19, 0x3, 0x2, 0x2, 0x2, 0x63, 0x68, 0x5, 0x18, 
    0xd, 0x2, 0x64, 0x65, 0x7, 0x4, 0x2, 0x2, 0x65, 0x67, 0x5, 0x18, 0xd, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0x20, 0x11, 0x2, 0x6c, 0x6d, 0x7, 0x7, 0x2, 0x2, 0x6d, 0x6e, 0x5, 
    0x22, 0x12, 0x2, 0x6e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0xe, 
    0x2, 0x2, 0x70, 0x71, 0x5, 0x22, 0x12, 0x2, 0x71, 0x72, 0x7, 0xf, 0x2, 
    0x2, 0x72, 0x75, 0x5, 0x18, 0xd, 0x2, 0x73, 0x74, 0x7, 0x10, 0x2, 0x2, 
    0x74, 0x76, 0x5, 0x18, 0xd, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x7, 0x11, 0x2, 0x2, 0x78, 0x21, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x8, 
    0x12, 0x1, 0x2, 0x7a, 0x82, 0x5, 0x2e, 0x18, 0x2, 0x7b, 0x82, 0x5, 0x2a, 
    0x16, 0x2, 0x7c, 0x82, 0x5, 0x20, 0x11, 0x2, 0x7d, 0x7e, 0x7, 0x8, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x22, 0x12, 0x2, 0x7f, 0x80, 0x7, 0x9, 0x2, 0x2, 
    0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x79, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x91, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0xc, 
    0x9, 0x2, 0x2, 0x84, 0x85, 0x5, 0x24, 0x13, 0x2, 0x85, 0x86, 0x5, 0x22, 
    0x12, 0xa, 0x86, 0x90, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0xc, 0x8, 0x2, 
    0x2, 0x88, 0x89, 0x5, 0x26, 0x14, 0x2, 0x89, 0x8a, 0x5, 0x22, 0x12, 
    0x9, 0x8a, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0xc, 0x7, 0x2, 0x2, 
    0x8c, 0x8d, 0x5, 0x28, 0x15, 0x2, 0x8d, 0x8e, 0x5, 0x22, 0x12, 0x8, 
    0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x83, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x23, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x95, 0x9, 0x2, 0x2, 0x2, 0x95, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x9, 0x3, 0x2, 0x2, 0x97, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x99, 0x9, 0x4, 0x2, 0x2, 0x99, 0x29, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9b, 0x5, 0x2c, 0x17, 0x2, 0x9b, 0x9c, 0x5, 0x2e, 0x18, 0x2, 0x9c, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x9, 0x3, 0x2, 0x2, 0x9e, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x9, 0x5, 0x2, 0x2, 0xa0, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0xa, 0x46, 0x52, 0x61, 0x68, 0x75, 0x81, 0x8f, 0x91, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Pcl2Parser::Initializer Pcl2Parser::_init;
