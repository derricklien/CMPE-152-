
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

ExprParser::StatementsContext* ExprParser::ProgContext::statements() {
  return getRuleContext<ExprParser::StatementsContext>(0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

ExprParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::StatementContext *> ExprParser::StatementsContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::StatementsContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::StatementsContext::getRuleIndex() const {
  return ExprParser::RuleStatements;
}

void ExprParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void ExprParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

ExprParser::StatementsContext* ExprParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::NEWLINE)
      | (1ULL << ExprParser::FOR)
      | (1ULL << ExprParser::IF)
      | (1ULL << ExprParser::STRING)
      | (1ULL << ExprParser::BOOL)
      | (1ULL << ExprParser::INTEGER)
      | (1ULL << ExprParser::VAR)
      | (1ULL << ExprParser::ID))) != 0)) {
      setState(26);
      statement();
      setState(31);
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

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExprContext* ExprParser::StatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::StatementContext::NEWLINE() {
  return getToken(ExprParser::NEWLINE, 0);
}

ExprParser::Assignment_statementContext* ExprParser::StatementContext::assignment_statement() {
  return getRuleContext<ExprParser::Assignment_statementContext>(0);
}

ExprParser::Function_callContext* ExprParser::StatementContext::function_call() {
  return getRuleContext<ExprParser::Function_callContext>(0);
}

ExprParser::Function_declareContext* ExprParser::StatementContext::function_declare() {
  return getRuleContext<ExprParser::Function_declareContext>(0);
}

ExprParser::String_declareContext* ExprParser::StatementContext::string_declare() {
  return getRuleContext<ExprParser::String_declareContext>(0);
}

ExprParser::Bool_declareContext* ExprParser::StatementContext::bool_declare() {
  return getRuleContext<ExprParser::Bool_declareContext>(0);
}

ExprParser::Int_declareContext* ExprParser::StatementContext::int_declare() {
  return getRuleContext<ExprParser::Int_declareContext>(0);
}

ExprParser::Bootleg_for_loopContext* ExprParser::StatementContext::bootleg_for_loop() {
  return getRuleContext<ExprParser::Bootleg_for_loopContext>(0);
}

ExprParser::If_statementContext* ExprParser::StatementContext::if_statement() {
  return getRuleContext<ExprParser::If_statementContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}

void ExprParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ExprParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      expr(0);
      setState(34);
      match(ExprParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(36);
      assignment_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(37);
      function_call();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(38);
      function_declare();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(39);
      string_declare();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(40);
      bool_declare();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(41);
      int_declare();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(42);
      match(ExprParser::NEWLINE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(43);
      bootleg_for_loop();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(44);
      if_statement();
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

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::ExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ExprContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::ExprContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

tree::TerminalNode* ExprParser::ExprContext::INT() {
  return getToken(ExprParser::INT, 0);
}

tree::TerminalNode* ExprParser::ExprContext::MUL() {
  return getToken(ExprParser::MUL, 0);
}

tree::TerminalNode* ExprParser::ExprContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

tree::TerminalNode* ExprParser::ExprContext::PLUS() {
  return getToken(ExprParser::PLUS, 0);
}

tree::TerminalNode* ExprParser::ExprContext::MINUS() {
  return getToken(ExprParser::MINUS, 0);
}

tree::TerminalNode* ExprParser::ExprContext::LESS_THAN() {
  return getToken(ExprParser::LESS_THAN, 0);
}

tree::TerminalNode* ExprParser::ExprContext::GREATER_THAN() {
  return getToken(ExprParser::GREATER_THAN, 0);
}

tree::TerminalNode* ExprParser::ExprContext::LT_EQ() {
  return getToken(ExprParser::LT_EQ, 0);
}

tree::TerminalNode* ExprParser::ExprContext::GT_EQ() {
  return getToken(ExprParser::GT_EQ, 0);
}

tree::TerminalNode* ExprParser::ExprContext::EQEQ() {
  return getToken(ExprParser::EQEQ, 0);
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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(55);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__0: {
        setState(48);
        match(ExprParser::T__0);
        setState(49);
        expr(0);
        setState(50);
        match(ExprParser::T__1);
        break;
      }

      case ExprParser::ID: {
        setState(52);
        match(ExprParser::ID);
        break;
      }

      case ExprParser::VAR: {
        setState(53);
        match(ExprParser::VAR);
        break;
      }

      case ExprParser::INT: {
        setState(54);
        match(ExprParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(66);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(57);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(58);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MUL

          || _la == ExprParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(60);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(61);
          _la = _input->LA(1);
          if (!(_la == ExprParser::PLUS

          || _la == ExprParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(64);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ExprParser::LESS_THAN)
            | (1ULL << ExprParser::GREATER_THAN)
            | (1ULL << ExprParser::LT_EQ)
            | (1ULL << ExprParser::GT_EQ)
            | (1ULL << ExprParser::EQEQ))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expr(5);
          break;
        }

        } 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Assignment_statementContext ------------------------------------------------------------------

ExprParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Assignment_statementContext::VAR() {
  return getTokens(ExprParser::VAR);
}

tree::TerminalNode* ExprParser::Assignment_statementContext::VAR(size_t i) {
  return getToken(ExprParser::VAR, i);
}

ExprParser::ExprContext* ExprParser::Assignment_statementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::Assignment_statementContext::getRuleIndex() const {
  return ExprParser::RuleAssignment_statement;
}

void ExprParser::Assignment_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_statement(this);
}

void ExprParser::Assignment_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_statement(this);
}

ExprParser::Assignment_statementContext* ExprParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleAssignment_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(ExprParser::VAR);
    setState(72);
    match(ExprParser::T__2);
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(73);
      expr(0);
      break;
    }

    case 2: {
      setState(74);
      match(ExprParser::VAR);
      break;
    }

    }
    setState(77);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declareContext ------------------------------------------------------------------

ExprParser::Function_declareContext::Function_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::Function_declareContext::VAR() {
  return getTokens(ExprParser::VAR);
}

tree::TerminalNode* ExprParser::Function_declareContext::VAR(size_t i) {
  return getToken(ExprParser::VAR, i);
}

ExprParser::StatementContext* ExprParser::Function_declareContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

tree::TerminalNode* ExprParser::Function_declareContext::BOOL() {
  return getToken(ExprParser::BOOL, 0);
}


size_t ExprParser::Function_declareContext::getRuleIndex() const {
  return ExprParser::RuleFunction_declare;
}

void ExprParser::Function_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declare(this);
}

void ExprParser::Function_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declare(this);
}

ExprParser::Function_declareContext* ExprParser::function_declare() {
  Function_declareContext *_localctx = _tracker.createInstance<Function_declareContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleFunction_declare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(ExprParser::VAR);
    setState(80);
    match(ExprParser::T__0);
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::BOOL: {
        setState(81);
        match(ExprParser::BOOL);
        setState(82);
        match(ExprParser::VAR);
        break;
      }

      case ExprParser::T__1: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(86);
    match(ExprParser::T__1);
    setState(87);
    match(ExprParser::T__4);
    setState(88);
    statement();
    setState(89);
    match(ExprParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

ExprParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Function_callContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}


size_t ExprParser::Function_callContext::getRuleIndex() const {
  return ExprParser::RuleFunction_call;
}

void ExprParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void ExprParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}

ExprParser::Function_callContext* ExprParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(ExprParser::VAR);
    setState(92);
    match(ExprParser::T__0);
    setState(93);
    match(ExprParser::T__1);
    setState(94);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_declareContext ------------------------------------------------------------------

ExprParser::String_declareContext::String_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::String_declareContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}

std::vector<tree::TerminalNode *> ExprParser::String_declareContext::VAR() {
  return getTokens(ExprParser::VAR);
}

tree::TerminalNode* ExprParser::String_declareContext::VAR(size_t i) {
  return getToken(ExprParser::VAR, i);
}

tree::TerminalNode* ExprParser::String_declareContext::INT() {
  return getToken(ExprParser::INT, 0);
}


size_t ExprParser::String_declareContext::getRuleIndex() const {
  return ExprParser::RuleString_declare;
}

void ExprParser::String_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_declare(this);
}

void ExprParser::String_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_declare(this);
}

ExprParser::String_declareContext* ExprParser::string_declare() {
  String_declareContext *_localctx = _tracker.createInstance<String_declareContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleString_declare);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(ExprParser::STRING);
    setState(97);
    match(ExprParser::VAR);
    setState(98);
    match(ExprParser::T__2);
    setState(99);
    match(ExprParser::T__6);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::INT) {
      setState(100);
      match(ExprParser::INT);
    }
    setState(103);
    match(ExprParser::VAR);
    setState(104);
    match(ExprParser::T__6);
    setState(105);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_declareContext ------------------------------------------------------------------

ExprParser::Bool_declareContext::Bool_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Bool_declareContext::BOOL() {
  return getToken(ExprParser::BOOL, 0);
}

tree::TerminalNode* ExprParser::Bool_declareContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

tree::TerminalNode* ExprParser::Bool_declareContext::TRUE() {
  return getToken(ExprParser::TRUE, 0);
}

tree::TerminalNode* ExprParser::Bool_declareContext::FALSE() {
  return getToken(ExprParser::FALSE, 0);
}


size_t ExprParser::Bool_declareContext::getRuleIndex() const {
  return ExprParser::RuleBool_declare;
}

void ExprParser::Bool_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_declare(this);
}

void ExprParser::Bool_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_declare(this);
}

ExprParser::Bool_declareContext* ExprParser::bool_declare() {
  Bool_declareContext *_localctx = _tracker.createInstance<Bool_declareContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleBool_declare);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(ExprParser::BOOL);
    setState(108);
    match(ExprParser::VAR);
    setState(109);
    match(ExprParser::T__2);
    setState(110);
    _la = _input->LA(1);
    if (!(_la == ExprParser::TRUE

    || _la == ExprParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(111);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_declareContext ------------------------------------------------------------------

ExprParser::Int_declareContext::Int_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Int_declareContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::Int_declareContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

tree::TerminalNode* ExprParser::Int_declareContext::INT() {
  return getToken(ExprParser::INT, 0);
}


size_t ExprParser::Int_declareContext::getRuleIndex() const {
  return ExprParser::RuleInt_declare;
}

void ExprParser::Int_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_declare(this);
}

void ExprParser::Int_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_declare(this);
}

ExprParser::Int_declareContext* ExprParser::int_declare() {
  Int_declareContext *_localctx = _tracker.createInstance<Int_declareContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleInt_declare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(ExprParser::INTEGER);
    setState(114);
    match(ExprParser::VAR);
    setState(115);
    match(ExprParser::T__2);
    setState(116);
    match(ExprParser::INT);
    setState(117);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bootleg_for_loopContext ------------------------------------------------------------------

ExprParser::Bootleg_for_loopContext::Bootleg_for_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Bootleg_for_loopContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

ExprParser::Int_declareContext* ExprParser::Bootleg_for_loopContext::int_declare() {
  return getRuleContext<ExprParser::Int_declareContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Bootleg_for_loopContext::VAR() {
  return getTokens(ExprParser::VAR);
}

tree::TerminalNode* ExprParser::Bootleg_for_loopContext::VAR(size_t i) {
  return getToken(ExprParser::VAR, i);
}

tree::TerminalNode* ExprParser::Bootleg_for_loopContext::LESS_THAN() {
  return getToken(ExprParser::LESS_THAN, 0);
}

tree::TerminalNode* ExprParser::Bootleg_for_loopContext::INT() {
  return getToken(ExprParser::INT, 0);
}

ExprParser::StatementContext* ExprParser::Bootleg_for_loopContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::Bootleg_for_loopContext::getRuleIndex() const {
  return ExprParser::RuleBootleg_for_loop;
}

void ExprParser::Bootleg_for_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBootleg_for_loop(this);
}

void ExprParser::Bootleg_for_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBootleg_for_loop(this);
}

ExprParser::Bootleg_for_loopContext* ExprParser::bootleg_for_loop() {
  Bootleg_for_loopContext *_localctx = _tracker.createInstance<Bootleg_for_loopContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleBootleg_for_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(ExprParser::FOR);
    setState(120);
    match(ExprParser::T__0);
    setState(121);
    int_declare();
    setState(122);
    match(ExprParser::VAR);
    setState(123);
    match(ExprParser::LESS_THAN);
    setState(124);
    match(ExprParser::INT);
    setState(125);
    match(ExprParser::T__3);
    setState(126);
    match(ExprParser::VAR);
    setState(127);
    match(ExprParser::T__7);
    setState(128);
    match(ExprParser::T__1);
    setState(129);
    match(ExprParser::T__4);
    setState(130);
    statement();
    setState(131);
    match(ExprParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

ExprParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::If_statementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::ExprContext* ExprParser::If_statementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

std::vector<ExprParser::StatementContext *> ExprParser::If_statementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::If_statementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

tree::TerminalNode* ExprParser::If_statementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}


size_t ExprParser::If_statementContext::getRuleIndex() const {
  return ExprParser::RuleIf_statement;
}

void ExprParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void ExprParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

ExprParser::If_statementContext* ExprParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(ExprParser::IF);
    setState(134);
    expr(0);
    setState(135);
    match(ExprParser::T__4);
    setState(136);
    statement();
    setState(137);
    match(ExprParser::T__5);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::ELSE) {
      setState(138);
      match(ExprParser::ELSE);
      setState(139);
      match(ExprParser::T__4);
      setState(140);
      statement();
      setState(141);
      match(ExprParser::T__5);
    }
   
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
    case 3: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

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
  "prog", "statements", "statement", "expr", "assignment_statement", "function_declare", 
  "function_call", "string_declare", "bool_declare", "int_declare", "bootleg_for_loop", 
  "if_statement"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'='", "';'", "'{'", "'}'", "'\"'", "'++'", "'+'", "'-'", 
  "'*'", "'/'", "'<'", "'>'", "'<='", "'>='", "'=='", "", "", "", "'Esketit'", 
  "'YallWhatIf'", "'Fam'", "'Gucci'", "'ForRealTho'", "'YAASSS'", "'Yikes'", 
  "'Lit'", "'int'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "PLUS", "MINUS", "MUL", "DIV", "LESS_THAN", 
  "GREATER_THAN", "LT_EQ", "GT_EQ", "EQEQ", "INT", "NEWLINE", "WS", "FOR", 
  "IF", "ELSE", "STRING", "BOOL", "TRUE", "FALSE", "FOURTWENTY", "INTEGER", 
  "VAR", "ID", "DIGIT"
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
    0x3, 0x22, 0x94, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x21, 0xb, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x30, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x45, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x48, 0xb, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4e, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x57, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x68, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x92, 0xa, 0xd, 0x3, 0xd, 0x2, 0x3, 0x8, 
    0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x2, 0x6, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0xf, 0x13, 
    0x3, 0x2, 0x1c, 0x1d, 0x2, 0x9c, 0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x79, 0x3, 0x2, 0x2, 0x2, 0x18, 0x87, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1b, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 
    0x5, 0x6, 0x4, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x5, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x30, 0x5, 0x8, 0x5, 0x2, 0x23, 0x24, 0x5, 0x8, 0x5, 0x2, 
    0x24, 0x25, 0x7, 0x15, 0x2, 0x2, 0x25, 0x30, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x30, 0x5, 0xa, 0x6, 0x2, 0x27, 0x30, 0x5, 0xe, 0x8, 0x2, 0x28, 0x30, 
    0x5, 0xc, 0x7, 0x2, 0x29, 0x30, 0x5, 0x10, 0x9, 0x2, 0x2a, 0x30, 0x5, 
    0x12, 0xa, 0x2, 0x2b, 0x30, 0x5, 0x14, 0xb, 0x2, 0x2c, 0x30, 0x7, 0x15, 
    0x2, 0x2, 0x2d, 0x30, 0x5, 0x16, 0xc, 0x2, 0x2e, 0x30, 0x5, 0x18, 0xd, 
    0x2, 0x2f, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x8, 0x5, 0x1, 
    0x2, 0x32, 0x33, 0x7, 0x3, 0x2, 0x2, 0x33, 0x34, 0x5, 0x8, 0x5, 0x2, 
    0x34, 0x35, 0x7, 0x4, 0x2, 0x2, 0x35, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x3a, 0x7, 0x21, 0x2, 0x2, 0x37, 0x3a, 0x7, 0x20, 0x2, 0x2, 0x38, 0x3a, 
    0x7, 0x14, 0x2, 0x2, 0x39, 0x31, 0x3, 0x2, 0x2, 0x2, 0x39, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0xc, 0x8, 0x2, 
    0x2, 0x3c, 0x3d, 0x9, 0x2, 0x2, 0x2, 0x3d, 0x45, 0x5, 0x8, 0x5, 0x9, 
    0x3e, 0x3f, 0xc, 0x7, 0x2, 0x2, 0x3f, 0x40, 0x9, 0x3, 0x2, 0x2, 0x40, 
    0x45, 0x5, 0x8, 0x5, 0x8, 0x41, 0x42, 0xc, 0x6, 0x2, 0x2, 0x42, 0x43, 
    0x9, 0x4, 0x2, 0x2, 0x43, 0x45, 0x5, 0x8, 0x5, 0x7, 0x44, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x20, 0x2, 0x2, 0x4a, 
    0x4d, 0x7, 0x5, 0x2, 0x2, 0x4b, 0x4e, 0x5, 0x8, 0x5, 0x2, 0x4c, 0x4e, 
    0x7, 0x20, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x6, 
    0x2, 0x2, 0x50, 0xb, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x20, 0x2, 
    0x2, 0x52, 0x56, 0x7, 0x3, 0x2, 0x2, 0x53, 0x54, 0x7, 0x1b, 0x2, 0x2, 
    0x54, 0x57, 0x7, 0x20, 0x2, 0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x4, 0x2, 0x2, 0x59, 0x5a, 0x7, 
    0x7, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x5b, 0x5c, 0x7, 0x8, 
    0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x20, 0x2, 
    0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x4, 0x2, 0x2, 
    0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 0xf, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x63, 0x7, 0x1a, 0x2, 0x2, 0x63, 0x64, 0x7, 0x20, 0x2, 0x2, 0x64, 0x65, 
    0x7, 0x5, 0x2, 0x2, 0x65, 0x67, 0x7, 0x9, 0x2, 0x2, 0x66, 0x68, 0x7, 
    0x14, 0x2, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x20, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x9, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x6, 0x2, 0x2, 
    0x6c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x1b, 0x2, 0x2, 0x6e, 
    0x6f, 0x7, 0x20, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x5, 0x2, 0x2, 0x70, 0x71, 
    0x9, 0x5, 0x2, 0x2, 0x71, 0x72, 0x7, 0x6, 0x2, 0x2, 0x72, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x1f, 0x2, 0x2, 0x74, 0x75, 0x7, 0x20, 
    0x2, 0x2, 0x75, 0x76, 0x7, 0x5, 0x2, 0x2, 0x76, 0x77, 0x7, 0x14, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0x6, 0x2, 0x2, 0x78, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x7a, 0x7, 0x17, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x7b, 
    0x7c, 0x5, 0x14, 0xb, 0x2, 0x7c, 0x7d, 0x7, 0x20, 0x2, 0x2, 0x7d, 0x7e, 
    0x7, 0xf, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x14, 0x2, 0x2, 0x7f, 0x80, 0x7, 
    0x6, 0x2, 0x2, 0x80, 0x81, 0x7, 0x20, 0x2, 0x2, 0x81, 0x82, 0x7, 0xa, 
    0x2, 0x2, 0x82, 0x83, 0x7, 0x4, 0x2, 0x2, 0x83, 0x84, 0x7, 0x7, 0x2, 
    0x2, 0x84, 0x85, 0x5, 0x6, 0x4, 0x2, 0x85, 0x86, 0x7, 0x8, 0x2, 0x2, 
    0x86, 0x17, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x18, 0x2, 0x2, 0x88, 
    0x89, 0x5, 0x8, 0x5, 0x2, 0x89, 0x8a, 0x7, 0x7, 0x2, 0x2, 0x8a, 0x8b, 
    0x5, 0x6, 0x4, 0x2, 0x8b, 0x91, 0x7, 0x8, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0x19, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x7, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x6, 
    0x4, 0x2, 0x8f, 0x90, 0x7, 0x8, 0x2, 0x2, 0x90, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1f, 0x2f, 0x39, 0x44, 0x46, 0x4d, 
    0x56, 0x67, 0x91, 
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
