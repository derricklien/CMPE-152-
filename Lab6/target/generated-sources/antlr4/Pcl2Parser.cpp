
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
    setState(48);
    header();
    setState(49);
    mainBlock();
    setState(50);
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
    setState(52);
    match(Pcl2Parser::PROGRAM);
    setState(53);
    match(Pcl2Parser::IDENTIFIER);
    setState(54);
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
    setState(56);
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
    setState(58);
    declarations();
    setState(59);
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
    setState(61);
    match(Pcl2Parser::VAR);
    setState(62);
    declList();
    setState(63);
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
    setState(65);
    decl();
    setState(70);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(66);
        match(Pcl2Parser::T__1);
        setState(67);
        decl(); 
      }
      setState(72);
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
    setState(73);
    varList();
    setState(74);
    match(Pcl2Parser::T__2);
    setState(75);
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
    setState(77);
    varId();
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl2Parser::T__3) {
      setState(78);
      match(Pcl2Parser::T__3);
      setState(79);
      varId();
      setState(84);
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
    setState(87);
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
    setState(89);
    match(Pcl2Parser::BEGIN);
    setState(90);
    stmtList();
    setState(91);
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

Pcl2Parser::Repeat_stmtContext* Pcl2Parser::StmtContext::repeat_stmt() {
  return getRuleContext<Pcl2Parser::Repeat_stmtContext>(0);
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
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        compoundStmt();
        break;
      }

      case Pcl2Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(94);
        assignmentStmt();
        break;
      }

      case Pcl2Parser::REPEAT: {
        enterOuterAlt(_localctx, 3);
        setState(95);
        repeat_stmt();
        break;
      }

      case Pcl2Parser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(96);
        if_stmt();
        break;
      }

      case Pcl2Parser::T__1:
      case Pcl2Parser::END:
      case Pcl2Parser::UNTIL:
      case Pcl2Parser::ELSE: {
        enterOuterAlt(_localctx, 5);

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
    setState(100);
    stmt();
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl2Parser::T__1) {
      setState(101);
      match(Pcl2Parser::T__1);
      setState(102);
      stmt();
      setState(107);
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
    setState(108);
    variable();
    setState(109);
    match(Pcl2Parser::T__4);
    setState(110);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_stmtContext ------------------------------------------------------------------

Pcl2Parser::Repeat_stmtContext::Repeat_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::Repeat_stmtContext::REPEAT() {
  return getToken(Pcl2Parser::REPEAT, 0);
}

Pcl2Parser::StmtListContext* Pcl2Parser::Repeat_stmtContext::stmtList() {
  return getRuleContext<Pcl2Parser::StmtListContext>(0);
}

tree::TerminalNode* Pcl2Parser::Repeat_stmtContext::UNTIL() {
  return getToken(Pcl2Parser::UNTIL, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::Repeat_stmtContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}


size_t Pcl2Parser::Repeat_stmtContext::getRuleIndex() const {
  return Pcl2Parser::RuleRepeat_stmt;
}


antlrcpp::Any Pcl2Parser::Repeat_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitRepeat_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Repeat_stmtContext* Pcl2Parser::repeat_stmt() {
  Repeat_stmtContext *_localctx = _tracker.createInstance<Repeat_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl2Parser::RuleRepeat_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(Pcl2Parser::REPEAT);
    setState(113);
    stmtList();
    setState(114);
    match(Pcl2Parser::UNTIL);
    setState(115);
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
  enterRule(_localctx, 30, Pcl2Parser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(Pcl2Parser::IF);
    setState(118);
    expr(0);
    setState(119);
    match(Pcl2Parser::THEN);
    setState(120);
    stmt();
    setState(123);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(121);
      match(Pcl2Parser::ELSE);
      setState(122);
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
  enterRule(_localctx, 32, Pcl2Parser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
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


size_t Pcl2Parser::ExprContext::getRuleIndex() const {
  return Pcl2Parser::RuleExpr;
}

void Pcl2Parser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

Pcl2Parser::VariableContext* Pcl2Parser::VariableExprContext::variable() {
  return getRuleContext<Pcl2Parser::VariableContext>(0);
}

Pcl2Parser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::AddSubExprContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

Pcl2Parser::AddSubOpContext* Pcl2Parser::AddSubExprContext::addSubOp() {
  return getRuleContext<Pcl2Parser::AddSubOpContext>(0);
}

Pcl2Parser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberExprContext ------------------------------------------------------------------

Pcl2Parser::NumberContext* Pcl2Parser::UnsignedNumberExprContext::number() {
  return getRuleContext<Pcl2Parser::NumberContext>(0);
}

Pcl2Parser::UnsignedNumberExprContext::UnsignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::UnsignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitUnsignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::RelationalExprContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

Pcl2Parser::Rel_opContext* Pcl2Parser::RelationalExprContext::rel_op() {
  return getRuleContext<Pcl2Parser::Rel_opContext>(0);
}

Pcl2Parser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::MulDivExprContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

Pcl2Parser::MulDivOpContext* Pcl2Parser::MulDivExprContext::mulDivOp() {
  return getRuleContext<Pcl2Parser::MulDivOpContext>(0);
}

Pcl2Parser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

Pcl2Parser::ExprContext* Pcl2Parser::ParenExprContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SignedNumberExprContext ------------------------------------------------------------------

Pcl2Parser::SignedNumberContext* Pcl2Parser::SignedNumberExprContext::signedNumber() {
  return getRuleContext<Pcl2Parser::SignedNumberContext>(0);
}

Pcl2Parser::SignedNumberExprContext::SignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::SignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitSignedNumberExpr(this);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, Pcl2Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::INTEGER:
      case Pcl2Parser::FLOAT: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(128);
        number();
        break;
      }

      case Pcl2Parser::ADD_OP:
      case Pcl2Parser::SUB_OP: {
        _localctx = _tracker.createInstance<SignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(129);
        signedNumber();
        break;
      }

      case Pcl2Parser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(130);
        variable();
        break;
      }

      case Pcl2Parser::T__5: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(131);
        match(Pcl2Parser::T__5);
        setState(132);
        expr(0);
        setState(133);
        match(Pcl2Parser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(151);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(149);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(138);
          mulDivOp();
          setState(139);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(141);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(142);
          addSubOp();
          setState(143);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(146);
          rel_op();
          setState(147);
          expr(6);
          break;
        }

        } 
      }
      setState(153);
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
  enterRule(_localctx, 36, Pcl2Parser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
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
  enterRule(_localctx, 38, Pcl2Parser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
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
  enterRule(_localctx, 40, Pcl2Parser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
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
  enterRule(_localctx, 42, Pcl2Parser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    sign();
    setState(161);
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
  enterRule(_localctx, 44, Pcl2Parser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
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


size_t Pcl2Parser::NumberContext::getRuleIndex() const {
  return Pcl2Parser::RuleNumber;
}

void Pcl2Parser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::FloatConstContext::FLOAT() {
  return getToken(Pcl2Parser::FLOAT, 0);
}

Pcl2Parser::FloatConstContext::FloatConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::IntegerConstContext::INTEGER() {
  return getToken(Pcl2Parser::INTEGER, 0);
}

Pcl2Parser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl2Parser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
Pcl2Parser::NumberContext* Pcl2Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 46, Pcl2Parser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<Pcl2Parser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(165);
        match(Pcl2Parser::INTEGER);
        break;
      }

      case Pcl2Parser::FLOAT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<Pcl2Parser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(166);
        match(Pcl2Parser::FLOAT);
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

bool Pcl2Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "assignmentStmt", "repeat_stmt", "if_stmt", "variable", "expr", "mulDivOp", 
  "addSubOp", "rel_op", "signedNumber", "sign", "number"
};

std::vector<std::string> Pcl2Parser::_literalNames = {
  "", "'.'", "';'", "':'", "','", "':='", "'('", "')'", "'PROGRAM'", "'VAR'", 
  "'BEGIN'", "'END'", "'REPEAT'", "'UNTIL'", "'IF'", "'THEN'", "'ELSE'", 
  "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'<>'", "'<'", "'<='", 
  "'>'", "'>='"
};

std::vector<std::string> Pcl2Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "PROGRAM", "VAR", "BEGIN", "END", "REPEAT", 
  "UNTIL", "IF", "THEN", "ELSE", "IDENTIFIER", "INTEGER", "FLOAT", "MUL_OP", 
  "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", 
  "GE_OP", "NEWLINE", "WS"
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
    0x3, 0x21, 0xac, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x47, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x4a, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x53, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x56, 0xb, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x65, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x6a, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x6d, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x7e, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x8a, 0xa, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x98, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x9b, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xaa, 0xa, 
    0x19, 0x3, 0x19, 0x2, 0x3, 0x24, 0x1a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 0x5, 0x3, 0x2, 0x16, 0x17, 
    0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0x1a, 0x1f, 0x2, 0xa2, 0x2, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x36, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x57, 0x3, 0x2, 0x2, 0x2, 0x14, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x66, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x72, 0x3, 0x2, 0x2, 0x2, 0x20, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x24, 0x89, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x28, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x5, 0x4, 
    0x3, 0x2, 0x33, 0x34, 0x5, 0x6, 0x4, 0x2, 0x34, 0x35, 0x7, 0x3, 0x2, 
    0x2, 0x35, 0x3, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0xa, 0x2, 0x2, 
    0x37, 0x38, 0x7, 0x13, 0x2, 0x2, 0x38, 0x39, 0x7, 0x4, 0x2, 0x2, 0x39, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x3b, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3e, 0x5, 
    0x16, 0xc, 0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0xb, 
    0x2, 0x2, 0x40, 0x41, 0x5, 0xc, 0x7, 0x2, 0x41, 0x42, 0x7, 0x4, 0x2, 
    0x2, 0x42, 0xb, 0x3, 0x2, 0x2, 0x2, 0x43, 0x48, 0x5, 0xe, 0x8, 0x2, 
    0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x5, 0xe, 0x8, 0x2, 0x46, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x10, 
    0x9, 0x2, 0x4c, 0x4d, 0x7, 0x5, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x14, 0xb, 
    0x2, 0x4e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x54, 0x5, 0x12, 0xa, 0x2, 
    0x50, 0x51, 0x7, 0x6, 0x2, 0x2, 0x51, 0x53, 0x5, 0x12, 0xa, 0x2, 0x52, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x13, 
    0x2, 0x2, 0x58, 0x13, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x13, 0x2, 
    0x2, 0x5a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xc, 0x2, 0x2, 
    0x5c, 0x5d, 0x5, 0x1a, 0xe, 0x2, 0x5d, 0x5e, 0x7, 0xd, 0x2, 0x2, 0x5e, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x65, 0x5, 0x16, 0xc, 0x2, 0x60, 0x65, 
    0x5, 0x1c, 0xf, 0x2, 0x61, 0x65, 0x5, 0x1e, 0x10, 0x2, 0x62, 0x65, 0x5, 
    0x20, 0x11, 0x2, 0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x60, 0x3, 0x2, 0x2, 0x2, 0x64, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x19, 0x3, 0x2, 0x2, 0x2, 0x66, 0x6b, 0x5, 0x18, 0xd, 0x2, 0x67, 
    0x68, 0x7, 0x4, 0x2, 0x2, 0x68, 0x6a, 0x5, 0x18, 0xd, 0x2, 0x69, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x22, 0x12, 
    0x2, 0x6f, 0x70, 0x7, 0x7, 0x2, 0x2, 0x70, 0x71, 0x5, 0x24, 0x13, 0x2, 
    0x71, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0xe, 0x2, 0x2, 0x73, 
    0x74, 0x5, 0x1a, 0xe, 0x2, 0x74, 0x75, 0x7, 0xf, 0x2, 0x2, 0x75, 0x76, 
    0x5, 0x24, 0x13, 0x2, 0x76, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 
    0x10, 0x2, 0x2, 0x78, 0x79, 0x5, 0x24, 0x13, 0x2, 0x79, 0x7a, 0x7, 0x11, 
    0x2, 0x2, 0x7a, 0x7d, 0x5, 0x18, 0xd, 0x2, 0x7b, 0x7c, 0x7, 0x12, 0x2, 
    0x2, 0x7c, 0x7e, 0x5, 0x18, 0xd, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0x13, 0x2, 0x2, 0x80, 0x23, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
    0x8, 0x13, 0x1, 0x2, 0x82, 0x8a, 0x5, 0x30, 0x19, 0x2, 0x83, 0x8a, 0x5, 
    0x2c, 0x17, 0x2, 0x84, 0x8a, 0x5, 0x22, 0x12, 0x2, 0x85, 0x86, 0x7, 
    0x8, 0x2, 0x2, 0x86, 0x87, 0x5, 0x24, 0x13, 0x2, 0x87, 0x88, 0x7, 0x9, 
    0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x83, 0x3, 0x2, 0x2, 0x2, 0x89, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0xc, 0x9, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x26, 0x14, 0x2, 0x8d, 0x8e, 
    0x5, 0x24, 0x13, 0xa, 0x8e, 0x98, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0xc, 
    0x8, 0x2, 0x2, 0x90, 0x91, 0x5, 0x28, 0x15, 0x2, 0x91, 0x92, 0x5, 0x24, 
    0x13, 0x9, 0x92, 0x98, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0xc, 0x7, 0x2, 
    0x2, 0x94, 0x95, 0x5, 0x2a, 0x16, 0x2, 0x95, 0x96, 0x5, 0x24, 0x13, 
    0x8, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x97, 0x93, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9d, 0x9, 0x2, 0x2, 0x2, 0x9d, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x9, 0x3, 0x2, 0x2, 0x9f, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa1, 0x9, 0x4, 0x2, 0x2, 0xa1, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa3, 0x5, 0x2e, 0x18, 0x2, 0xa3, 0xa4, 0x5, 0x30, 0x19, 0x2, 
    0xa4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x9, 0x3, 0x2, 0x2, 0xa6, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x7, 0x14, 0x2, 0x2, 0xa8, 0xaa, 
    0x7, 0x15, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xb, 0x48, 0x54, 0x64, 
    0x6b, 0x7d, 0x89, 0x97, 0x99, 0xa9, 
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
