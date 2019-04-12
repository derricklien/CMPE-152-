
// Generated from Expr.g4 by ANTLR 4.7.2


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::ProgContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ProgContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ProgContext::NEWLINE() {
  return getTokens(ExprParser::NEWLINE);
}

tree::TerminalNode* ExprParser::ProgContext::NEWLINE(size_t i) {
  return getToken(ExprParser::NEWLINE, i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__0

    || _la == ExprParser::INT) {
      setState(14);
      expr(0);
      setState(15);
      match(ExprParser::NEWLINE);
      setState(21);
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

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ExprContext::INT() {
  return getToken(ExprParser::INT, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::ExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ExprContext::MUL_OP() {
  return getToken(ExprParser::MUL_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::DIV_OP() {
  return getToken(ExprParser::DIV_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::ADD_OP() {
  return getToken(ExprParser::ADD_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::SUB_OP() {
  return getToken(ExprParser::SUB_OP, 0);
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ExprParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INT: {
        setState(23);
        match(ExprParser::INT);
        break;
      }

      case ExprParser::T__0: {
        setState(24);
        match(ExprParser::T__0);
        setState(25);
        expr(0);
        setState(26);
        match(ExprParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(38);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(36);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(30);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(31);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MUL_OP

          || _la == ExprParser::DIV_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(32);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(34);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD_OP

          || _la == ExprParser::SUB_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(4);
          break;
        }

        } 
      }
      setState(40);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VariableContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::VariableContext::getRuleIndex() const {
  return ExprParser::RuleVariable;
}

void ExprParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void ExprParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

ExprParser::VariableContext* ExprParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

ExprParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Stmt_listContext* ExprParser::Compound_stmtContext::stmt_list() {
  return getRuleContext<ExprParser::Stmt_listContext>(0);
}


size_t ExprParser::Compound_stmtContext::getRuleIndex() const {
  return ExprParser::RuleCompound_stmt;
}

void ExprParser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void ExprParser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}

ExprParser::Compound_stmtContext* ExprParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleCompound_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(ExprParser::T__2);
    setState(44);
    stmt_list();
    setState(45);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

ExprParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::StmtContext *> ExprParser::Stmt_listContext::stmt() {
  return getRuleContexts<ExprParser::StmtContext>();
}

ExprParser::StmtContext* ExprParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<ExprParser::StmtContext>(i);
}


size_t ExprParser::Stmt_listContext::getRuleIndex() const {
  return ExprParser::RuleStmt_list;
}

void ExprParser::Stmt_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_list(this);
}

void ExprParser::Stmt_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_list(this);
}

ExprParser::Stmt_listContext* ExprParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    stmt();
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__4) {
      setState(48);
      match(ExprParser::T__4);
      setState(49);
      stmt();
      setState(54);
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

//----------------- StmtContext ------------------------------------------------------------------

ExprParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::StmtContext::getRuleIndex() const {
  return ExprParser::RuleStmt;
}

void ExprParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

ExprParser::Compound_stmtContext* ExprParser::CompoundStmtContext::compound_stmt() {
  return getRuleContext<ExprParser::Compound_stmtContext>(0);
}

ExprParser::CompoundStmtContext::CompoundStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ExprParser::CompoundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStmt(this);
}
void ExprParser::CompoundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStmt(this);
}
//----------------- EmptyStmtContext ------------------------------------------------------------------

ExprParser::EmptyStmtContext::EmptyStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ExprParser::EmptyStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStmt(this);
}
void ExprParser::EmptyStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStmt(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

ExprParser::Assignment_stmtContext* ExprParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<ExprParser::Assignment_stmtContext>(0);
}

ExprParser::AssignmentStmtContext::AssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ExprParser::AssignmentStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStmt(this);
}
void ExprParser::AssignmentStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStmt(this);
}
ExprParser::StmtContext* ExprParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(58);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__2: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<ExprParser::CompoundStmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(55);
        compound_stmt();
        break;
      }

      case ExprParser::IDENTIFIER: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<ExprParser::AssignmentStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(56);
        assignment_stmt();
        break;
      }

      case ExprParser::T__3:
      case ExprParser::T__4: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<ExprParser::EmptyStmtContext>(_localctx));
        enterOuterAlt(_localctx, 3);

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

//----------------- Assignment_stmtContext ------------------------------------------------------------------

ExprParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::Assignment_stmtContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::Assignment_stmtContext::EQ_OP() {
  return getToken(ExprParser::EQ_OP, 0);
}

ExprParser::ExprContext* ExprParser::Assignment_stmtContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::Assignment_stmtContext::getRuleIndex() const {
  return ExprParser::RuleAssignment_stmt;
}

void ExprParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void ExprParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}

ExprParser::Assignment_stmtContext* ExprParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    variable();
    setState(61);
    match(ExprParser::EQ_OP);
    setState(62);
    expr(0);
    setState(63);
    match(ExprParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "expr", "variable", "compound_stmt", "stmt_list", "stmt", "assignment_stmt"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'{'", "'}'", "';'", "", "", "", "", "'*'", "'/'", "'+'", 
  "'-'", "'='", "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "NEWLINE", "INT", "IDENTIFIER", "INTEGER", "MUL_OP", 
  "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", 
  "GE_OP"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x15, 0x44, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x14, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x17, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1f, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x27, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x2a, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x35, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x38, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x3d, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x2, 0x3, 0x4, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x2, 0x4, 0x3, 0x2, 0xc, 0xd, 0x3, 0x2, 0xe, 0xf, 0x2, 0x43, 0x2, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 0x7, 0x8, 0x2, 0x2, 0x12, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x13, 0x10, 0x3, 0x2, 0x2, 0x2, 0x14, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x3, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x18, 0x19, 0x8, 0x3, 0x1, 0x2, 0x19, 0x1f, 0x7, 0x9, 0x2, 0x2, 
    0x1a, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x4, 0x3, 0x2, 0x1c, 
    0x1d, 0x7, 0x4, 0x2, 0x2, 0x1d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x21, 0xc, 0x6, 0x2, 0x2, 0x21, 0x22, 0x9, 0x2, 
    0x2, 0x2, 0x22, 0x27, 0x5, 0x4, 0x3, 0x7, 0x23, 0x24, 0xc, 0x5, 0x2, 
    0x2, 0x24, 0x25, 0x9, 0x3, 0x2, 0x2, 0x25, 0x27, 0x5, 0x4, 0x3, 0x6, 
    0x26, 0x20, 0x3, 0x2, 0x2, 0x2, 0x26, 0x23, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0xa, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xa, 0x6, 
    0x2, 0x2f, 0x30, 0x7, 0x6, 0x2, 0x2, 0x30, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x36, 0x5, 0xc, 0x7, 0x2, 0x32, 0x33, 0x7, 0x7, 0x2, 0x2, 0x33, 
    0x35, 0x5, 0xc, 0x7, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0xb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3a, 0x3d, 0x5, 0xe, 0x8, 
    0x2, 0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3f, 0x40, 
    0x7, 0x10, 0x2, 0x2, 0x40, 0x41, 0x5, 0x4, 0x3, 0x2, 0x41, 0x42, 0x7, 
    0x7, 0x2, 0x2, 0x42, 0xf, 0x3, 0x2, 0x2, 0x2, 0x8, 0x15, 0x1e, 0x26, 
    0x28, 0x36, 0x3c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
