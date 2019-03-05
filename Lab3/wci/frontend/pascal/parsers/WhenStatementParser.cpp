/**
 * <h1>WhenStatementParser</h1>
 *
 * <p>Parse a Pascal CASE statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "WhenStatementParser.h"
#include "StatementParser.h"
#include "AssignmentStatementParser.h"
#include "ExpressionParser.h"
#include "../PascalParserTD.h"
#include "../PascalToken.h"
#include "../PascalError.h"
#include "../../Token.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/ICodeFactory.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

set<PascalTokenType> WhenStatementParser::ARROW_SET;

bool WhenStatementParser::INITIALIZED = false;

void WhenStatementParser::initialize()
{
    if (INITIALIZED) return;

    ARROW_SET = StatementParser::STMT_START_SET;
    ARROW_SET.insert(PascalTokenType::ARROW);

    set<PascalTokenType>::iterator it;
    for (it = StatementParser::STMT_FOLLOW_SET.begin();
    	 it != StatementParser::STMT_FOLLOW_SET.end();
    	 it++)
    {
    	ARROW_SET.insert(*it);
	}

    INITIALIZED = true;
}

WhenStatementParser::WhenStatementParser(PascalParserTD *parent)
    : StatementParser(parent)
{
    initialize();
}

ICodeNode *WhenStatementParser::parse_statement(Token *token) throw (string)
{
    token = next_token(token);  // consume the WHEN

    //Create a WHEN node
    ICodeNode *when_node = ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);

    //Parse the expression
    //The WHEN node adopts the expression subtree as its first child
    ExpressionParser expression_parser(this);
    when_node->add_child(expression_parser.parse_statement(token));

    //Synchronize at the arrow
    token = synchronize(ARROW_SET);
    if (token->get_type() == (TokenType) PT_ARROW)
    {
    	token = next_token(token); //consume the ARROW
	}
    else
    {
    	error_handler.flag(token, MISSING_OTHERWISE, this);
    }

    //Parse the => (much like the THEN statement)
    //This will be the second child
    StatementParser statement_parser(this);
    when_node->add_child(statement_parser.parse_statement(token));
    token = current_token();
    token = next_token(token);

    //Look for the semicolon
    if(token->get_type() == (TokenType) PT_SEMICOLON);
    {
    	token = next_token(token); //consume the semicolon

    	//Parse the semicolon
    	//Add as the third child
    	when_node->add_child(statement_parser.parse_statement(token));
    }


    //Set of WHEN branch constants *maybe*
    set<int> constant_set;

    while ((token != nullptr) && (token->get_type() != (TokenType) PT_END))
    {
    	token = current_token();
    	TokenType token_type = token->get_type();

    	if(token_type == (TokenType) PT_SEMICOLON)
    	{
    		token = next_token(token);
    	}

//    	else if(CONSTANT_START_SET.find((PascalTokenType) token_type) != CONSTANT_START_SET.end())
//    	{
//
//    	}
    }

    //Look at the END token
    if(token->get_type() == (TokenType) PT_END)
    {
    	token = next_token(token); //consume the END
    }
    else
    {
    	error_handler.flag(token, MISSING_END, this);
    }


    return when_node;
}

}}}} // namespace wci::frontend::pascal::parsers
